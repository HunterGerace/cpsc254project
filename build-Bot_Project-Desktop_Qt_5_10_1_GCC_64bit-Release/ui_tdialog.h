/********************************************************************************
** Form generated from reading UI file 'tdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOG_H
#define UI_TDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TDialog
{
public:
    QPushButton *p2;
    QLabel *score;
    QLabel *msg;
    QLabel *table;
    QPushButton *b9;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b4;
    QPushButton *b1;
    QPushButton *b5;
    QPushButton *b6;
    QPushButton *b3;
    QPushButton *b2;
    QPushButton *p1;

    void setupUi(QDialog *TDialog)
    {
        if (TDialog->objectName().isEmpty())
            TDialog->setObjectName(QStringLiteral("TDialog"));
        TDialog->resize(633, 329);
        p2 = new QPushButton(TDialog);
        p2->setObjectName(QStringLiteral("p2"));
        p2->setGeometry(QRect(510, 270, 111, 31));
        score = new QLabel(TDialog);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(10, 10, 371, 31));
        score->setScaledContents(false);
        score->setWordWrap(true);
        msg = new QLabel(TDialog);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(30, 280, 330, 31));
        msg->setAlignment(Qt::AlignCenter);
        msg->setWordWrap(true);
        table = new QLabel(TDialog);
        table->setObjectName(QStringLiteral("table"));
        table->setGeometry(QRect(80, 60, 231, 191));
        table->setAlignment(Qt::AlignCenter);
        table->setWordWrap(true);
        b9 = new QPushButton(TDialog);
        b9->setObjectName(QStringLiteral("b9"));
        b9->setGeometry(QRect(558, 190, 61, 61));
        b7 = new QPushButton(TDialog);
        b7->setObjectName(QStringLiteral("b7"));
        b7->setGeometry(QRect(400, 190, 61, 61));
        b8 = new QPushButton(TDialog);
        b8->setObjectName(QStringLiteral("b8"));
        b8->setGeometry(QRect(480, 190, 61, 61));
        b4 = new QPushButton(TDialog);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setGeometry(QRect(400, 110, 61, 61));
        b1 = new QPushButton(TDialog);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setGeometry(QRect(400, 30, 61, 61));
        b5 = new QPushButton(TDialog);
        b5->setObjectName(QStringLiteral("b5"));
        b5->setGeometry(QRect(480, 110, 61, 61));
        b6 = new QPushButton(TDialog);
        b6->setObjectName(QStringLiteral("b6"));
        b6->setGeometry(QRect(560, 110, 61, 61));
        b3 = new QPushButton(TDialog);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setGeometry(QRect(560, 30, 61, 61));
        b2 = new QPushButton(TDialog);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setGeometry(QRect(480, 30, 61, 61));
        p1 = new QPushButton(TDialog);
        p1->setObjectName(QStringLiteral("p1"));
        p1->setGeometry(QRect(390, 270, 111, 31));

        retranslateUi(TDialog);

        QMetaObject::connectSlotsByName(TDialog);
    } // setupUi

    void retranslateUi(QDialog *TDialog)
    {
        TDialog->setWindowTitle(QApplication::translate("TDialog", "U-Bot-U's Tic-Tac-Toe", nullptr));
        p2->setText(QApplication::translate("TDialog", "2 Players", nullptr));
        score->setText(QString());
        msg->setText(QString());
        table->setText(QApplication::translate("TDialog", "<html><head/><body><p align=\"center\">Welcome to Tic-Tac-Toe!</p><p align=\"center\">Please select either &quot;1 Player&quot; or &quot;2 Players&quot;.</p><p align=\"center\">(Or don't...because this feature has not been fully implemented yet. But hey, this interface looks pretty nice, huh?)</p></body></html>", nullptr));
        b9->setText(QApplication::translate("TDialog", "9", nullptr));
        b7->setText(QApplication::translate("TDialog", "7", nullptr));
        b8->setText(QApplication::translate("TDialog", "8", nullptr));
        b4->setText(QApplication::translate("TDialog", "4", nullptr));
        b1->setText(QApplication::translate("TDialog", "1", nullptr));
        b5->setText(QApplication::translate("TDialog", "5", nullptr));
        b6->setText(QApplication::translate("TDialog", "6", nullptr));
        b3->setText(QApplication::translate("TDialog", "3", nullptr));
        b2->setText(QApplication::translate("TDialog", "2", nullptr));
        p1->setText(QApplication::translate("TDialog", "1 Player", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialog: public Ui_TDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOG_H
