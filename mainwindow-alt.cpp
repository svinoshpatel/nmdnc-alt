#include "mainwindow-alt.h"
#include "ui_mainwindow-alt.h"
#include <math.h>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_Kmax->setVisible(false);
    ui->textEdit_Kmax->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
        ui->label_Kmax->setVisible(false);
        ui->textEdit_Kmax->setVisible(false);
        break;
    case 1:
        ui->label_Kmax->setVisible(true);
        ui->textEdit_Kmax->setVisible(true);
    }

}

double f(double x, char k1)
{
    switch (k1) {
    case 0:
        return x * x - 4;
    case 1:
        return 3 * x - 4 * log(x) - 5;
    case 2:
        return x*x*x - 6*x*x + 11*x - 6;
    }
    return 0;
}

double fp(double x, double d, char k1)
{
    return (f(x+d, k1) - f(x, k1)) / d;
}

double f2p(double x, double d, char k1)
{
    return (f(x + d, k1) + f(x - d, k1) - 2 * f(x, k1)) / (d * d);
}

void MDP(double a, double b, double Eps, char k1, int &L, double &result)
{
    double c, Fc;
    while (b - a > Eps) {
        c = a + 0.5 * (b - a);
        L = L + 1;
        Fc = f(c, k1);
        if (fabs(Fc) < Eps) {
            result = c;
            return;
        }
        if (f(a, k1) * Fc > 0)
            a = c;
        else
            b = c;
    }
    result = c;
}

void MN(double a, double b, double Eps, char k1, int Kmax, int &L, double &result)
{
    double x, Dx, D;
    int i;
    Dx = 0.0;
    D = Eps / 100.0;
    x = b;
    if (f(x, k1) * f2p(x, D, k1) < 0)
        x = a;
    if (f(x, k1) * f2p(x, D, k1) < 0)
        QMessageBox::information(nullptr, "", "For a given equation the convergence of Newton's method is not guaranteed");
    for (i = 1; i <= Kmax; i++)
    {
        Dx = f(x, k1) / fp(x, D, k1);
        x = x - Dx;
        if (fabs(Dx) < Eps) {
            L = i;
            result = x;
            return;
        }
    }
    QMessageBox::information(nullptr, "", "For the given number of iterations no root was found with Eps precision");
    result = -1000.0;
}


void MainWindow::on_pushButton_clicked()
{
    int L, Kmax, k = -1, m = -1;
    double D, Eps, a, b, result;
    L = 0;
    switch (ui->comboBox->currentIndex()) {
    case 0:
        m = 0;
        break;
    case 1:
        m = 1;
        D = Eps / 100.0;
        break;
    }
    if (m == -1) {
        QMessageBox::warning(nullptr, "", "Choose method!");
        ui->comboBox->setFocus();
        return;
    }
    switch (ui->comboBox_2->currentIndex()) {
    case 0:
        k = 0;
        break;
    case 1:
        k = 1;
        break;
    case 2:
        k = 2;
        break;
    }
    if (k == -1) {
        QMessageBox::warning(nullptr, "", "Choose equation!");
        ui->comboBox_2->setFocus();
        return;
    }
    if (ui->textEdit_a->toPlainText().isEmpty()) {
        QMessageBox::warning(nullptr, "", "Input number in textEdit_a");
        ui->textEdit_a->setFocus();
        return;
    }
    a = ui->textEdit_a->toPlainText().toDouble();

    if (ui->textEdit_b->toPlainText().isEmpty()) {
        QMessageBox::warning(nullptr, "", "Input number is textEdit_b");
        ui->textEdit_b->setFocus();
        return;
    }
    b = ui->textEdit_b->toPlainText().toDouble();

    if (a > b) {
        D = a;
        a = b;
        b = D;
        ui->textEdit_a->setText(QString::number(a));
        ui->textEdit_b->setText(QString::number(b));
    }
    if (ui->textEdit_Eps->toPlainText().isEmpty()) {
        QMessageBox::warning(nullptr, "", "Input number in textEdit_Eps");
        ui->textEdit_Eps->setFocus();
        return;
    }
    Eps = ui->textEdit_Eps->toPlainText().toDouble();
    if ((Eps > 1e-1) || (Eps <= 0)) {
        Eps = 1e-4;
        ui->textEdit_Eps->setText(QString::number(Eps));
    }
    switch (m) {
    case 0:
        if (f(a, k) * f(b, k) > 0) {
            QMessageBox::warning(nullptr, "", "Input right interval!");
            ui->textEdit_a->setText("");
            ui->textEdit_b->setText("");
            ui->textEdit_a->setFocus();
            return;
        }
        if (fabs(f(a, k)) < Eps) {
            ui->textEdit_x->setText(QString::number(a));
            ui->textEdit_Iterations->setText(QString::number(L));
            return;
        }
        if (fabs(f(a, k)) < Eps) {
            ui->textEdit_x->setText(QString::number(b));
            ui->textEdit_Iterations->setText(QString::number(L));
            return;
        }
        MDP(a, b, Eps, k, L, result);
        ui->textEdit_x->setText(QString::number(result));
        ui->textEdit_Iterations->setText(QString::number(L));
        break;
    case 1:
        if (ui->textEdit_Kmax->toPlainText().isEmpty()) {
            QMessageBox::warning(nullptr, "", "Input number in textEdit_Kmax");
            ui->textEdit_Kmax->setFocus();
            return;
        }
        Kmax = ui->textEdit_Kmax->toPlainText().toInt();
        MN(a, b, Eps, k, Kmax, L, result);
        ui->textEdit_x->setText(QString::number(result));
        ui->textEdit_Iterations->setText(QString::number(L));
        break;
    }
}




void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit_a->clear();
    ui->textEdit_b->clear();
    ui->textEdit_Eps->clear();
    ui->textEdit_Kmax->clear();
    ui->textEdit_x->clear();
    ui->textEdit_Iterations->clear();
}


void MainWindow::on_pushButton_3_clicked()
{
    close();
}

