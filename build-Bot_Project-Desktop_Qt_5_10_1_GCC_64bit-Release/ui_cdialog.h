/********************************************************************************
** Form generated from reading UI file 'cdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDIALOG_H
#define UI_CDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDialog
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *cBut;
    QLabel *calc;

    void setupUi(QDialog *CDialog)
    {
        if (CDialog->objectName().isEmpty())
            CDialog->setObjectName(QStringLiteral("CDialog"));
        CDialog->resize(461, 128);
        centralWidget = new QWidget(CDialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setGeometry(QRect(10, 10, 441, 111));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 70, 271, 31));
        cBut = new QPushButton(centralWidget);
        cBut->setObjectName(QStringLiteral("cBut"));
        cBut->setGeometry(QRect(290, 70, 141, 31));
        calc = new QLabel(centralWidget);
        calc->setObjectName(QStringLiteral("calc"));
        calc->setGeometry(QRect(20, 10, 401, 51));

        retranslateUi(CDialog);

        QMetaObject::connectSlotsByName(CDialog);
    } // setupUi

    void retranslateUi(QDialog *CDialog)
    {
        CDialog->setWindowTitle(QApplication::translate("CDialog", "U-Bot-U's Calculator", nullptr));
        lineEdit->setText(QApplication::translate("CDialog", "Life, the universe, and everything", nullptr));
        cBut->setText(QApplication::translate("CDialog", "New Calculation", nullptr));
        calc->setText(QApplication::translate("CDialog", "<html><head/><body><p align=\"right\"><span style=\" font-size:36pt; font-weight:600;\">42</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CDialog: public Ui_CDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDIALOG_H
