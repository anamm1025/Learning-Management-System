/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *loginLabel;
    QLabel *usernameLabel;
    QLabel *label_2;
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QPushButton *signupButton;
    QLabel *label;
    QLabel *errorLabel;
    QCheckBox *adminCheckBox;
    QLabel *checkboxLabel;
    QCheckBox *studentCheckBox;
    QLabel *label_3;
    QCheckBox *TeacherCheckBox;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(877, 594);
        login->setMaximumSize(QSize(16777215, 16777215));
        login->setStyleSheet(QStringLiteral("background: url(:/lms1.png)"));
        loginLabel = new QLabel(login);
        loginLabel->setObjectName(QStringLiteral("loginLabel"));
        loginLabel->setGeometry(QRect(350, 60, 191, 61));
        QFont font;
        font.setFamily(QStringLiteral("Colonna MT"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        loginLabel->setFont(font);
        loginLabel->setStyleSheet(QLatin1String("color:white;\n"
""));
        usernameLabel = new QLabel(login);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setGeometry(QRect(140, 130, 111, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        usernameLabel->setFont(font1);
        usernameLabel->setStyleSheet(QStringLiteral("color:white;"));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 200, 101, 20));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color:white;"));
        usernameEdit = new QLineEdit(login);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));
        usernameEdit->setGeometry(QRect(270, 130, 331, 31));
        usernameEdit->setFont(font1);
        passwordEdit = new QLineEdit(login);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(270, 190, 331, 31));
        passwordEdit->setFont(font1);
        passwordEdit->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(login);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(210, 360, 131, 71));
        loginButton->setFont(font1);
        loginButton->setFocusPolicy(Qt::StrongFocus);
        loginButton->setStyleSheet(QLatin1String("border-image:none;\n"
"background-color:black;\n"
"border:3px solid white;\n"
"color:white;"));
        signupButton = new QPushButton(login);
        signupButton->setObjectName(QStringLiteral("signupButton"));
        signupButton->setGeometry(QRect(440, 360, 141, 71));
        signupButton->setFont(font1);
        signupButton->setStyleSheet(QLatin1String("border-image:none;\n"
"background-color:black;\n"
"border:3px solid white;\n"
"color:white;"));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 380, 51, 20));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:white;"));
        errorLabel = new QLabel(login);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(140, 450, 541, 111));
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
        errorLabel->setFont(font1);
        errorLabel->setStyleSheet(QStringLiteral("color:white;"));
        errorLabel->setWordWrap(true);
        adminCheckBox = new QCheckBox(login);
        adminCheckBox->setObjectName(QStringLiteral("adminCheckBox"));
        adminCheckBox->setGeometry(QRect(380, 280, 91, 17));
        adminCheckBox->setFont(font1);
        adminCheckBox->setStyleSheet(QStringLiteral("color:white;"));
        checkboxLabel = new QLabel(login);
        checkboxLabel->setObjectName(QStringLiteral("checkboxLabel"));
        checkboxLabel->setGeometry(QRect(610, 270, 371, 31));
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
        checkboxLabel->setPalette(palette1);
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        checkboxLabel->setFont(font3);
        checkboxLabel->setStyleSheet(QStringLiteral("color:white;"));
        studentCheckBox = new QCheckBox(login);
        studentCheckBox->setObjectName(QStringLiteral("studentCheckBox"));
        studentCheckBox->setGeometry(QRect(260, 280, 111, 17));
        studentCheckBox->setFont(font1);
        studentCheckBox->setStyleSheet(QStringLiteral("color:white;"));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 280, 111, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        TeacherCheckBox = new QCheckBox(login);
        TeacherCheckBox->setObjectName(QStringLiteral("TeacherCheckBox"));
        TeacherCheckBox->setGeometry(QRect(480, 280, 121, 17));
        TeacherCheckBox->setFont(font1);
        TeacherCheckBox->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(login);
        QObject::connect(loginButton, SIGNAL(clicked()), login, SLOT(loginButtonClicked()));
        QObject::connect(signupButton, SIGNAL(clicked()), login, SLOT(signupButtonClicked()));

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", 0));
#ifndef QT_NO_TOOLTIP
        login->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        login->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        loginLabel->setText(QApplication::translate("login", "LOGIN", 0));
        usernameLabel->setText(QApplication::translate("login", "Username:", 0));
        label_2->setText(QApplication::translate("login", "Password:", 0));
#ifndef QT_NO_TOOLTIP
        loginButton->setToolTip(QApplication::translate("login", "Login to start using LMS", 0));
#endif // QT_NO_TOOLTIP
        loginButton->setText(QApplication::translate("login", "LOGIN", 0));
#ifndef QT_NO_TOOLTIP
        signupButton->setToolTip(QApplication::translate("login", "if u dont have an account, then click", 0));
#endif // QT_NO_TOOLTIP
        signupButton->setText(QApplication::translate("login", "SIGN UP", 0));
        label->setText(QApplication::translate("login", "OR", 0));
        errorLabel->setText(QString());
        adminCheckBox->setText(QApplication::translate("login", "Admin", 0));
        checkboxLabel->setText(QString());
        studentCheckBox->setText(QApplication::translate("login", "Student", 0));
        label_3->setText(QApplication::translate("login", "LOGIN AS:", 0));
        TeacherCheckBox->setText(QApplication::translate("login", "Teacher", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
