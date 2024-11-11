/********************************************************************************
** Form generated from reading UI file 'mainwindow-alt.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_2D_ALT_H
#define UI_MAINWINDOW_2D_ALT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QComboBox *comboBox;
    QLabel *label;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_Iterations;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_Kmax;
    QLabel *label_9;
    QLabel *label_10;
    QTextEdit *textEdit_a;
    QTextEdit *textEdit_b;
    QTextEdit *textEdit_Eps;
    QTextEdit *textEdit_Kmax;
    QTextEdit *textEdit_x;
    QTextEdit *textEdit_Iterations;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(821, 333);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 50, 161, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 101, 18));
        QPalette palette;
        QBrush brush(QColor(85, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        label->setPalette(palette);
        QFont font;
        font.setBold(true);
        label->setFont(font);
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(50, 120, 161, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 100, 111, 18));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_2->setPalette(palette1);
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 60, 31, 18));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 120, 31, 18));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(350, 170, 41, 18));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(570, 60, 58, 18));
        label_Iterations = new QLabel(centralwidget);
        label_Iterations->setObjectName(QString::fromUtf8("label_Iterations"));
        label_Iterations->setGeometry(QRect(560, 120, 61, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(550, 200, 80, 26));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 200, 80, 26));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 240, 80, 26));
        pushButton_3->setFont(font);
        label_Kmax = new QLabel(centralwidget);
        label_Kmax->setObjectName(QString::fromUtf8("label_Kmax"));
        label_Kmax->setEnabled(true);
        label_Kmax->setGeometry(QRect(340, 220, 58, 18));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(400, 20, 71, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_9->setPalette(palette2);
        label_9->setFont(font);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(670, 20, 51, 18));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_10->setPalette(palette3);
        label_10->setFont(font);
        textEdit_a = new QTextEdit(centralwidget);
        textEdit_a->setObjectName(QString::fromUtf8("textEdit_a"));
        textEdit_a->setGeometry(QRect(390, 50, 104, 31));
        textEdit_b = new QTextEdit(centralwidget);
        textEdit_b->setObjectName(QString::fromUtf8("textEdit_b"));
        textEdit_b->setGeometry(QRect(390, 110, 104, 31));
        textEdit_Eps = new QTextEdit(centralwidget);
        textEdit_Eps->setObjectName(QString::fromUtf8("textEdit_Eps"));
        textEdit_Eps->setGeometry(QRect(390, 160, 104, 31));
        textEdit_Kmax = new QTextEdit(centralwidget);
        textEdit_Kmax->setObjectName(QString::fromUtf8("textEdit_Kmax"));
        textEdit_Kmax->setEnabled(true);
        textEdit_Kmax->setGeometry(QRect(390, 210, 104, 31));
        textEdit_x = new QTextEdit(centralwidget);
        textEdit_x->setObjectName(QString::fromUtf8("textEdit_x"));
        textEdit_x->setGeometry(QRect(630, 50, 104, 31));
        textEdit_Iterations = new QTextEdit(centralwidget);
        textEdit_Iterations->setObjectName(QString::fromUtf8("textEdit_Iterations"));
        textEdit_Iterations->setGeometry(QRect(630, 110, 104, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 821, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\321\226\320\262\320\260\321\226\320\262\320\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Bisection method", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Newton's method", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Choose method", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "x * x - 4 = 0", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "3 * x - 4 * log(x) - 5 = 0", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "x*x*x - 6*x*x + 11*x - 6", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Choose equation", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "a =", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "b =", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Eps =", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Root x =", nullptr));
        label_Iterations->setText(QCoreApplication::translate("MainWindow", "Iterations", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Solve", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_Kmax->setText(QCoreApplication::translate("MainWindow", "Kmax =", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Input data", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_2D_ALT_H
