/********************************************************************************
** Form generated from reading UI file 'lms.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LMS_H
#define UI_LMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LMSClass
{
public:
    QWidget *centralWidget;
    QLabel *lmsLabel;
    QPushButton *loginButton;
    QPushButton *signupButton;
    QLabel *lmsLabel_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LMSClass)
    {
        if (LMSClass->objectName().isEmpty())
            LMSClass->setObjectName(QStringLiteral("LMSClass"));
        LMSClass->setEnabled(true);
        LMSClass->resize(1206, 594);
        QFont font;
        font.setPointSize(26);
        LMSClass->setFont(font);
        centralWidget = new QWidget(LMSClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lmsLabel = new QLabel(centralWidget);
        lmsLabel->setObjectName(QStringLiteral("lmsLabel"));
        lmsLabel->setGeometry(QRect(160, 60, 441, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Colonna MT"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        lmsLabel->setFont(font1);
        lmsLabel->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;"));
        lmsLabel->setAlignment(Qt::AlignCenter);
        loginButton = new QPushButton(centralWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(180, 240, 161, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        loginButton->setFont(font2);
        loginButton->setStyleSheet(QLatin1String("border-image:none;\n"
"background-color:black;\n"
"border:3px solid white;\n"
"color:white;"));
        signupButton = new QPushButton(centralWidget);
        signupButton->setObjectName(QStringLiteral("signupButton"));
        signupButton->setGeometry(QRect(380, 240, 181, 61));
        signupButton->setFont(font2);
        signupButton->setStyleSheet(QLatin1String("border-image:none;\n"
"background-color:black;\n"
"border:3px solid white;\n"
"color:white;"));
        lmsLabel_2 = new QLabel(centralWidget);
        lmsLabel_2->setObjectName(QStringLiteral("lmsLabel_2"));
        lmsLabel_2->setGeometry(QRect(150, 130, 591, 31));
        lmsLabel_2->setFont(font1);
        lmsLabel_2->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;"));
        lmsLabel_2->setAlignment(Qt::AlignCenter);
        LMSClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(LMSClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LMSClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LMSClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LMSClass->setStatusBar(statusBar);

        retranslateUi(LMSClass);
        QObject::connect(loginButton, SIGNAL(clicked()), LMSClass, SLOT(loginButtonClicked()));
        QObject::connect(signupButton, SIGNAL(clicked()), LMSClass, SLOT(signupButtonClicked()));

        QMetaObject::connectSlotsByName(LMSClass);
    } // setupUi

    void retranslateUi(QMainWindow *LMSClass)
    {
        LMSClass->setWindowTitle(QApplication::translate("LMSClass", "lms", 0));
#ifndef QT_NO_TOOLTIP
        LMSClass->setToolTip(QApplication::translate("LMSClass", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        lmsLabel->setText(QApplication::translate("LMSClass", "WELCOME TO LMS", 0));
        loginButton->setText(QApplication::translate("LMSClass", "LOGIN", 0));
        signupButton->setText(QApplication::translate("LMSClass", "SIGNUP", 0));
        lmsLabel_2->setText(QApplication::translate("LMSClass", "LEARNING MANAGEMENT SYSTEM", 0));
    } // retranslateUi

};

namespace Ui {
    class LMSClass: public Ui_LMSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LMS_H
