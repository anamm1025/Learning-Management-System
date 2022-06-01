/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QLabel *topLabel;
    QLabel *label;
    QLineEdit *oldpasswordEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *newPasswordEdit;
    QLineEdit *renewPasswordEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *passErrorLabel;
    QLabel *errorLabel;
    QLabel *passError1;

    void setupUi(QWidget *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QStringLiteral("ChangePassword"));
        ChangePassword->resize(1124, 596);
        topLabel = new QLabel(ChangePassword);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        topLabel->setGeometry(QRect(10, 20, 171, 31));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        topLabel->setFont(font);
        topLabel->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(ChangePassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 140, 181, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white;"));
        oldpasswordEdit = new QLineEdit(ChangePassword);
        oldpasswordEdit->setObjectName(QStringLiteral("oldpasswordEdit"));
        oldpasswordEdit->setGeometry(QRect(490, 120, 361, 41));
        oldpasswordEdit->setFont(font1);
        oldpasswordEdit->setCursor(QCursor(Qt::ArrowCursor));
        oldpasswordEdit->setStyleSheet(QStringLiteral("color:black;"));
        oldpasswordEdit->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(ChangePassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 210, 181, 20));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color:white;"));
        label_3 = new QLabel(ChangePassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 290, 261, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        newPasswordEdit = new QLineEdit(ChangePassword);
        newPasswordEdit->setObjectName(QStringLiteral("newPasswordEdit"));
        newPasswordEdit->setGeometry(QRect(490, 200, 361, 41));
        newPasswordEdit->setFont(font1);
        newPasswordEdit->setCursor(QCursor(Qt::ArrowCursor));
        newPasswordEdit->setStyleSheet(QStringLiteral("color:black;"));
        newPasswordEdit->setEchoMode(QLineEdit::Password);
        renewPasswordEdit = new QLineEdit(ChangePassword);
        renewPasswordEdit->setObjectName(QStringLiteral("renewPasswordEdit"));
        renewPasswordEdit->setGeometry(QRect(490, 280, 361, 41));
        renewPasswordEdit->setFont(font1);
        renewPasswordEdit->setCursor(QCursor(Qt::ArrowCursor));
        renewPasswordEdit->setStyleSheet(QStringLiteral("color:black;"));
        renewPasswordEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(ChangePassword);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 400, 91, 51));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        pushButton_2 = new QPushButton(ChangePassword);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 400, 101, 51));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        passErrorLabel = new QLabel(ChangePassword);
        passErrorLabel->setObjectName(QStringLiteral("passErrorLabel"));
        passErrorLabel->setGeometry(QRect(870, 290, 581, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        passErrorLabel->setPalette(palette);
        passErrorLabel->setFont(font1);
        passErrorLabel->setStyleSheet(QStringLiteral("color:white;"));
        errorLabel = new QLabel(ChangePassword);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(440, 490, 501, 61));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        errorLabel->setPalette(palette1);
        errorLabel->setFont(font1);
        errorLabel->setStyleSheet(QStringLiteral("color:white;"));
        passError1 = new QLabel(ChangePassword);
        passError1->setObjectName(QStringLiteral("passError1"));
        passError1->setGeometry(QRect(860, 200, 521, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        passError1->setPalette(palette2);
        passError1->setFont(font1);
        passError1->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(ChangePassword);
        QObject::connect(pushButton, SIGNAL(clicked()), ChangePassword, SLOT(OKButtonClicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), ChangePassword, SLOT(CancelButtonClicked()));

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QWidget *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "ChangePassword", 0));
        topLabel->setText(QString());
        label->setText(QApplication::translate("ChangePassword", "Old Password:", 0));
        label_2->setText(QApplication::translate("ChangePassword", "New Password:", 0));
        label_3->setText(QApplication::translate("ChangePassword", "Confirm New Password:", 0));
        pushButton->setText(QApplication::translate("ChangePassword", "OK", 0));
        pushButton_2->setText(QApplication::translate("ChangePassword", "CANCEL", 0));
        passErrorLabel->setText(QString());
        errorLabel->setText(QString());
        passError1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
