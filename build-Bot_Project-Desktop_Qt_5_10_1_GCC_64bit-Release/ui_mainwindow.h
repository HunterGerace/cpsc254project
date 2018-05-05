/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *about;
    QWidget *centralWidget;
    QPushButton *btTime;
    QPushButton *btJoke;
    QPushButton *btMath;
    QPushButton *btGame;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *rLabel;
    QPushButton *btAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(450, 348);
        MainWindow->setMaximumSize(QSize(450, 348));
        about = new QAction(MainWindow);
        about->setObjectName(QStringLiteral("about"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btTime = new QPushButton(centralWidget);
        btTime->setObjectName(QStringLiteral("btTime"));
        btTime->setGeometry(QRect(30, 230, 192, 51));
        btJoke = new QPushButton(centralWidget);
        btJoke->setObjectName(QStringLiteral("btJoke"));
        btJoke->setGeometry(QRect(230, 230, 191, 51));
        btMath = new QPushButton(centralWidget);
        btMath->setObjectName(QStringLiteral("btMath"));
        btMath->setGeometry(QRect(30, 290, 191, 51));
        btGame = new QPushButton(centralWidget);
        btGame->setObjectName(QStringLiteral("btGame"));
        btGame->setGeometry(QRect(230, 290, 191, 51));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 0, 371, 131));
        label->setScaledContents(false);
        label->setWordWrap(true);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(42, 180, 371, 31));
        rLabel = new QLabel(centralWidget);
        rLabel->setObjectName(QStringLiteral("rLabel"));
        rLabel->setGeometry(QRect(40, 135, 371, 31));
        rLabel->setScaledContents(false);
        rLabel->setWordWrap(true);
        btAbout = new QPushButton(centralWidget);
        btAbout->setObjectName(QStringLiteral("btAbout"));
        btAbout->setGeometry(QRect(420, 10, 21, 21));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "U-Bot-U", nullptr));
        about->setText(QApplication::translate("MainWindow", "About", nullptr));
        btTime->setText(QApplication::translate("MainWindow", "Time/Date", nullptr));
        btJoke->setText(QApplication::translate("MainWindow", "Joke", nullptr));
        btMath->setText(QApplication::translate("MainWindow", "Calculator", nullptr));
        btGame->setText(QApplication::translate("MainWindow", "Tic-Tac-Toe", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Greetings, user! My name is U-Bot-U, and I will be your personal bot!</p><p align=\"center\">You may either type a command or press any of the following buttons below.</p></body></html>", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "This feature has not been implemented yet.", nullptr));
        rLabel->setText(QString());
        btAbout->setText(QApplication::translate("MainWindow", "i", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
