/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *emailLabel;
    QLineEdit *usernameEdit;
    QLineEdit *firstnameEdit;
    QLineEdit *passwordEdit;
    QLineEdit *retypePasswordEdit;
    QLineEdit *phoneEdit;
    QLineEdit *emailEdit;
    QPushButton *pushButton;
    QLabel *errorLabel;
    QDateEdit *dateEdit;
    QLabel *label_7;
    QCheckBox *femaleCheckbox;
    QCheckBox *maleCheckbox;
    QLabel *label_8;
    QLabel *usernameError;
    QLabel *nameError;
    QLabel *label_10;
    QLineEdit *lnameEdit;
    QLabel *passwordError;
    QLabel *repasswordError;
    QLabel *contactError;
    QLabel *emailError;
    QLabel *DOBerror;
    QLabel *genderError;
    QLabel *label_9;
    QLineEdit *homeEdit;
    QPushButton *quitButton;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QStringLiteral("signup"));
        signup->resize(1302, 668);
        signup->setStyleSheet(QStringLiteral(""));
        label = new QLabel(signup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(600, 40, 191, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Schoolbook"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(signup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 120, 121, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color:white;"));
        label_3 = new QLabel(signup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(370, 180, 121, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        label_4 = new QLabel(signup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(390, 230, 101, 20));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("color:white;"));
        label_5 = new QLabel(signup);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(320, 280, 161, 20));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        label_6 = new QLabel(signup);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(320, 330, 171, 20));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color:white;"));
        emailLabel = new QLabel(signup);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        emailLabel->setGeometry(QRect(340, 370, 141, 20));
        emailLabel->setFont(font1);
        emailLabel->setStyleSheet(QStringLiteral("color:white;"));
        usernameEdit = new QLineEdit(signup);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));
        usernameEdit->setGeometry(QRect(510, 110, 371, 31));
        QFont font2;
        font2.setPointSize(12);
        usernameEdit->setFont(font2);
        firstnameEdit = new QLineEdit(signup);
        firstnameEdit->setObjectName(QStringLiteral("firstnameEdit"));
        firstnameEdit->setGeometry(QRect(510, 170, 131, 31));
        firstnameEdit->setFont(font2);
        passwordEdit = new QLineEdit(signup);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(510, 220, 371, 31));
        passwordEdit->setFont(font2);
        passwordEdit->setEchoMode(QLineEdit::Password);
        retypePasswordEdit = new QLineEdit(signup);
        retypePasswordEdit->setObjectName(QStringLiteral("retypePasswordEdit"));
        retypePasswordEdit->setGeometry(QRect(510, 270, 371, 31));
        retypePasswordEdit->setFont(font2);
        retypePasswordEdit->setEchoMode(QLineEdit::Password);
        phoneEdit = new QLineEdit(signup);
        phoneEdit->setObjectName(QStringLiteral("phoneEdit"));
        phoneEdit->setGeometry(QRect(510, 320, 371, 31));
        phoneEdit->setFont(font2);
        emailEdit = new QLineEdit(signup);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));
        emailEdit->setGeometry(QRect(510, 370, 371, 31));
        emailEdit->setFont(font2);
        pushButton = new QPushButton(signup);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 550, 131, 51));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("border-image:none;\n"
"background-color:black;\n"
"border:3px solid white;\n"
"color:white;"));
        errorLabel = new QLabel(signup);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(460, 620, 451, 61));
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
        errorLabel->setPalette(palette);
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        errorLabel->setFont(font3);
        errorLabel->setStyleSheet(QStringLiteral("color:white;"));
        errorLabel->setTextFormat(Qt::RichText);
        dateEdit = new QDateEdit(signup);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(510, 450, 161, 31));
        dateEdit->setFont(font3);
        dateEdit->setCalendarPopup(true);
        label_7 = new QLabel(signup);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(430, 460, 61, 16));
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("color:white;"));
        femaleCheckbox = new QCheckBox(signup);
        femaleCheckbox->setObjectName(QStringLiteral("femaleCheckbox"));
        femaleCheckbox->setGeometry(QRect(510, 500, 101, 17));
        femaleCheckbox->setFont(font1);
        femaleCheckbox->setStyleSheet(QStringLiteral("color:white;"));
        maleCheckbox = new QCheckBox(signup);
        maleCheckbox->setObjectName(QStringLiteral("maleCheckbox"));
        maleCheckbox->setGeometry(QRect(620, 500, 131, 17));
        maleCheckbox->setFont(font1);
        maleCheckbox->setStyleSheet(QStringLiteral("color:white;"));
        label_8 = new QLabel(signup);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(400, 500, 81, 16));
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("color:white;"));
        usernameError = new QLabel(signup);
        usernameError->setObjectName(QStringLiteral("usernameError"));
        usernameError->setGeometry(QRect(900, 110, 551, 31));
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
        usernameError->setPalette(palette1);
        usernameError->setFont(font3);
        usernameError->setStyleSheet(QStringLiteral("color:white;"));
        nameError = new QLabel(signup);
        nameError->setObjectName(QStringLiteral("nameError"));
        nameError->setGeometry(QRect(900, 180, 311, 21));
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
        nameError->setPalette(palette2);
        nameError->setFont(font3);
        nameError->setStyleSheet(QStringLiteral("color:white;"));
        label_10 = new QLabel(signup);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(650, 170, 111, 21));
        label_10->setFont(font1);
        label_10->setStyleSheet(QStringLiteral("color:white;"));
        lnameEdit = new QLineEdit(signup);
        lnameEdit->setObjectName(QStringLiteral("lnameEdit"));
        lnameEdit->setGeometry(QRect(760, 170, 121, 31));
        lnameEdit->setFont(font2);
        passwordError = new QLabel(signup);
        passwordError->setObjectName(QStringLiteral("passwordError"));
        passwordError->setGeometry(QRect(900, 220, 331, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        passwordError->setPalette(palette3);
        passwordError->setFont(font3);
        passwordError->setStyleSheet(QStringLiteral("color:white;"));
        repasswordError = new QLabel(signup);
        repasswordError->setObjectName(QStringLiteral("repasswordError"));
        repasswordError->setGeometry(QRect(900, 270, 311, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        repasswordError->setPalette(palette4);
        repasswordError->setFont(font3);
        repasswordError->setStyleSheet(QStringLiteral("color:white;"));
        contactError = new QLabel(signup);
        contactError->setObjectName(QStringLiteral("contactError"));
        contactError->setGeometry(QRect(900, 320, 291, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        contactError->setPalette(palette5);
        contactError->setFont(font3);
        contactError->setStyleSheet(QStringLiteral("color:white;"));
        emailError = new QLabel(signup);
        emailError->setObjectName(QStringLiteral("emailError"));
        emailError->setGeometry(QRect(900, 370, 291, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        emailError->setPalette(palette6);
        emailError->setFont(font3);
        emailError->setStyleSheet(QStringLiteral("color:white;"));
        DOBerror = new QLabel(signup);
        DOBerror->setObjectName(QStringLiteral("DOBerror"));
        DOBerror->setGeometry(QRect(690, 450, 291, 31));
        QPalette palette7;
        QBrush brush1(QColor(0, 0, 139, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        DOBerror->setPalette(palette7);
        QFont font4;
        font4.setFamily(QStringLiteral("Comic Sans MS"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        DOBerror->setFont(font4);
        DOBerror->setStyleSheet(QStringLiteral("color:darkblue;;"));
        genderError = new QLabel(signup);
        genderError->setObjectName(QStringLiteral("genderError"));
        genderError->setGeometry(QRect(710, 490, 271, 31));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        genderError->setPalette(palette8);
        genderError->setFont(font3);
        genderError->setStyleSheet(QStringLiteral("color:white;"));
        label_9 = new QLabel(signup);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(340, 420, 151, 20));
        label_9->setFont(font1);
        label_9->setStyleSheet(QStringLiteral("color:white;"));
        homeEdit = new QLineEdit(signup);
        homeEdit->setObjectName(QStringLiteral("homeEdit"));
        homeEdit->setGeometry(QRect(510, 410, 371, 31));
        homeEdit->setFont(font2);
        quitButton = new QPushButton(signup);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(700, 550, 151, 51));
        quitButton->setFont(font1);
        quitButton->setStyleSheet(QLatin1String("border-image:none;\n"
"background-color:black;\n"
"border:3px solid white;\n"
"color:white;"));

        retranslateUi(signup);
        QObject::connect(pushButton, SIGNAL(clicked()), signup, SLOT(signupButtonClicked()));
        QObject::connect(quitButton, SIGNAL(clicked()), signup, SLOT(quitButtonClicked()));

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QApplication::translate("signup", "signup", 0));
        label->setText(QApplication::translate("signup", "SIGN UP", 0));
        label_2->setText(QApplication::translate("signup", "Username:", 0));
        label_3->setText(QApplication::translate("signup", "First Name:", 0));
        label_4->setText(QApplication::translate("signup", "Password:", 0));
        label_5->setText(QApplication::translate("signup", "Retype Password:", 0));
        label_6->setText(QApplication::translate("signup", "Contact Number:", 0));
        emailLabel->setText(QApplication::translate("signup", "Email Address:", 0));
        pushButton->setText(QApplication::translate("signup", "SIGN UP", 0));
        errorLabel->setText(QString());
        label_7->setText(QApplication::translate("signup", "DOB:", 0));
        femaleCheckbox->setText(QApplication::translate("signup", "Female", 0));
        maleCheckbox->setText(QApplication::translate("signup", "Male", 0));
        label_8->setText(QApplication::translate("signup", "Gender:", 0));
        usernameError->setText(QString());
        nameError->setText(QString());
        label_10->setText(QApplication::translate("signup", "Last Name:", 0));
        passwordError->setText(QString());
        repasswordError->setText(QString());
        contactError->setText(QString());
        emailError->setText(QString());
        DOBerror->setText(QString());
        genderError->setText(QString());
        label_9->setText(QApplication::translate("signup", "Home Address:", 0));
        quitButton->setText(QApplication::translate("signup", "QUIT", 0));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
