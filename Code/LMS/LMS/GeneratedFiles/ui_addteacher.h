/********************************************************************************
** Form generated from reading UI file 'addteacher.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTEACHER_H
#define UI_ADDTEACHER_H

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

class Ui_AddTeacher
{
public:
    QLabel *emailLabel;
    QLabel *nameError;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QLineEdit *homeEdit;
    QLabel *contactError;
    QLabel *label_4;
    QCheckBox *femaleCheckbox;
    QLineEdit *retypePasswordEdit;
    QPushButton *pushButton;
    QLineEdit *firstnameEdit;
    QLineEdit *usernameEdit;
    QLineEdit *lnameEdit;
    QCheckBox *maleCheckbox;
    QLabel *label_3;
    QLabel *DOBerror;
    QLineEdit *emailEdit;
    QLabel *errorLabel;
    QLabel *label_6;
    QLabel *usernameError;
    QLabel *emailError;
    QLabel *label_5;
    QLabel *label_9;
    QPushButton *quitButton;
    QLabel *repasswordError;
    QLineEdit *phoneEdit;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *genderError;
    QLabel *passwordError;
    QLabel *topLabel;
    QDateEdit *dateEdit;
    QLabel *label_11;

    void setupUi(QWidget *AddTeacher)
    {
        if (AddTeacher->objectName().isEmpty())
            AddTeacher->setObjectName(QStringLiteral("AddTeacher"));
        AddTeacher->resize(1234, 675);
        emailLabel = new QLabel(AddTeacher);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        emailLabel->setGeometry(QRect(90, 350, 151, 20));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        emailLabel->setFont(font);
        emailLabel->setStyleSheet(QLatin1String("color:white;\n"
""));
        nameError = new QLabel(AddTeacher);
        nameError->setObjectName(QStringLiteral("nameError"));
        nameError->setGeometry(QRect(640, 140, 501, 31));
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
        nameError->setPalette(palette);
        nameError->setFont(font);
        nameError->setStyleSheet(QLatin1String("color:white;\n"
""));
        label_2 = new QLabel(AddTeacher);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 90, 111, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("color:white;\n"
""));
        passwordEdit = new QLineEdit(AddTeacher);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(260, 190, 371, 31));
        QFont font1;
        passwordEdit->setFont(font1);
        passwordEdit->setStyleSheet(QLatin1String("color:black;\n"
"font-size:16px;\n"
""));
        passwordEdit->setEchoMode(QLineEdit::Password);
        homeEdit = new QLineEdit(AddTeacher);
        homeEdit->setObjectName(QStringLiteral("homeEdit"));
        homeEdit->setGeometry(QRect(260, 390, 371, 31));
        homeEdit->setFont(font1);
        homeEdit->setStyleSheet(QLatin1String("color:black;\n"
"font-size:16px;\n"
""));
        contactError = new QLabel(AddTeacher);
        contactError->setObjectName(QStringLiteral("contactError"));
        contactError->setGeometry(QRect(640, 290, 331, 31));
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
        contactError->setPalette(palette1);
        contactError->setFont(font);
        contactError->setStyleSheet(QLatin1String("color:white;\n"
""));
        label_4 = new QLabel(AddTeacher);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 200, 101, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("color:white;\n"
""));
        femaleCheckbox = new QCheckBox(AddTeacher);
        femaleCheckbox->setObjectName(QStringLiteral("femaleCheckbox"));
        femaleCheckbox->setGeometry(QRect(270, 490, 81, 17));
        femaleCheckbox->setFont(font);
        femaleCheckbox->setStyleSheet(QLatin1String("color:white;\n"
""));
        retypePasswordEdit = new QLineEdit(AddTeacher);
        retypePasswordEdit->setObjectName(QStringLiteral("retypePasswordEdit"));
        retypePasswordEdit->setGeometry(QRect(260, 240, 371, 31));
        retypePasswordEdit->setFont(font1);
        retypePasswordEdit->setStyleSheet(QLatin1String("color:black;\n"
"font-size:16px;\n"
""));
        retypePasswordEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(AddTeacher);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 520, 191, 61));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        firstnameEdit = new QLineEdit(AddTeacher);
        firstnameEdit->setObjectName(QStringLiteral("firstnameEdit"));
        firstnameEdit->setGeometry(QRect(260, 140, 111, 31));
        firstnameEdit->setFont(font1);
        firstnameEdit->setStyleSheet(QLatin1String("color:black;\n"
"font-size:16px;\n"
""));
        usernameEdit = new QLineEdit(AddTeacher);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));
        usernameEdit->setGeometry(QRect(260, 90, 371, 31));
        usernameEdit->setFont(font1);
        usernameEdit->setStyleSheet(QLatin1String("color:black;\n"
"font-size:16px;\n"
""));
        lnameEdit = new QLineEdit(AddTeacher);
        lnameEdit->setObjectName(QStringLiteral("lnameEdit"));
        lnameEdit->setGeometry(QRect(490, 140, 141, 31));
        lnameEdit->setFont(font1);
        lnameEdit->setStyleSheet(QLatin1String("color:black;\n"
"font-size:16px;\n"
""));
        maleCheckbox = new QCheckBox(AddTeacher);
        maleCheckbox->setObjectName(QStringLiteral("maleCheckbox"));
        maleCheckbox->setGeometry(QRect(380, 490, 71, 17));
        maleCheckbox->setFont(font);
        maleCheckbox->setStyleSheet(QLatin1String("color:white;\n"
""));
        label_3 = new QLabel(AddTeacher);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 150, 131, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("color:white;\n"
""));
        DOBerror = new QLabel(AddTeacher);
        DOBerror->setObjectName(QStringLiteral("DOBerror"));
        DOBerror->setGeometry(QRect(320, 430, 251, 21));
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
        DOBerror->setPalette(palette2);
        DOBerror->setFont(font);
        DOBerror->setStyleSheet(QLatin1String("color:white;\n"
""));
        emailEdit = new QLineEdit(AddTeacher);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));
        emailEdit->setGeometry(QRect(260, 340, 371, 31));
        emailEdit->setFont(font1);
        emailEdit->setStyleSheet(QLatin1String("color:black;\n"
"font-size:16px;\n"
""));
        errorLabel = new QLabel(AddTeacher);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(260, 600, 451, 81));
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
        errorLabel->setPalette(palette3);
        errorLabel->setFont(font);
        errorLabel->setStyleSheet(QLatin1String("color:white;\n"
""));
        errorLabel->setTextFormat(Qt::RichText);
        label_6 = new QLabel(AddTeacher);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 300, 181, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(true);
        label_6->setFont(font2);
        label_6->setStyleSheet(QLatin1String("color:white;\n"
""));
        usernameError = new QLabel(AddTeacher);
        usernameError->setObjectName(QStringLiteral("usernameError"));
        usernameError->setGeometry(QRect(640, 90, 631, 31));
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
        usernameError->setPalette(palette4);
        usernameError->setFont(font);
        usernameError->setStyleSheet(QLatin1String("color:white;\n"
""));
        emailError = new QLabel(AddTeacher);
        emailError->setObjectName(QStringLiteral("emailError"));
        emailError->setGeometry(QRect(650, 340, 331, 31));
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
        emailError->setPalette(palette5);
        emailError->setFont(font);
        emailError->setStyleSheet(QLatin1String("color:white;\n"
""));
        label_5 = new QLabel(AddTeacher);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 250, 181, 20));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("color:white;\n"
""));
        label_9 = new QLabel(AddTeacher);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 390, 151, 20));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("color:white;\n"
""));
        quitButton = new QPushButton(AddTeacher);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(480, 520, 151, 61));
        quitButton->setFont(font);
        quitButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        repasswordError = new QLabel(AddTeacher);
        repasswordError->setObjectName(QStringLiteral("repasswordError"));
        repasswordError->setGeometry(QRect(640, 250, 381, 31));
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
        repasswordError->setPalette(palette6);
        repasswordError->setFont(font);
        repasswordError->setStyleSheet(QLatin1String("color:white;\n"
""));
        phoneEdit = new QLineEdit(AddTeacher);
        phoneEdit->setObjectName(QStringLiteral("phoneEdit"));
        phoneEdit->setGeometry(QRect(260, 290, 371, 31));
        phoneEdit->setFont(font1);
        phoneEdit->setStyleSheet(QLatin1String("color:black;\n"
"font-size:16px;\n"
""));
        label_8 = new QLabel(AddTeacher);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 480, 101, 20));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("color:white;\n"
""));
        label_10 = new QLabel(AddTeacher);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(380, 140, 111, 21));
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("color:white;\n"
""));
        genderError = new QLabel(AddTeacher);
        genderError->setObjectName(QStringLiteral("genderError"));
        genderError->setGeometry(QRect(470, 480, 351, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        genderError->setPalette(palette7);
        genderError->setFont(font);
        genderError->setStyleSheet(QLatin1String("color:white;\n"
""));
        passwordError = new QLabel(AddTeacher);
        passwordError->setObjectName(QStringLiteral("passwordError"));
        passwordError->setGeometry(QRect(650, 190, 471, 31));
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
        passwordError->setPalette(palette8);
        passwordError->setFont(font);
        passwordError->setStyleSheet(QLatin1String("color:white;\n"
""));
        topLabel = new QLabel(AddTeacher);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        topLabel->setGeometry(QRect(70, 20, 871, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Colonna MT"));
        font3.setPointSize(28);
        font3.setBold(true);
        font3.setWeight(75);
        topLabel->setFont(font3);
        topLabel->setStyleSheet(QLatin1String("color:white;\n"
""));
        topLabel->setAlignment(Qt::AlignCenter);
        dateEdit = new QDateEdit(AddTeacher);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(260, 440, 151, 31));
        dateEdit->setFont(font1);
        dateEdit->setStyleSheet(QLatin1String("color:black;\n"
"font-size:16px;\n"
""));
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setCalendarPopup(true);
        label_11 = new QLabel(AddTeacher);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(190, 440, 51, 20));
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("color:white;\n"
""));

        retranslateUi(AddTeacher);
        QObject::connect(quitButton, SIGNAL(clicked()), AddTeacher, SLOT(quitButtonClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), AddTeacher, SLOT(AddTeacherClicked()));

        QMetaObject::connectSlotsByName(AddTeacher);
    } // setupUi

    void retranslateUi(QWidget *AddTeacher)
    {
        AddTeacher->setWindowTitle(QApplication::translate("AddTeacher", "AddTeacher", 0));
        emailLabel->setText(QApplication::translate("AddTeacher", "Email Address:", 0));
        nameError->setText(QString());
        label_2->setText(QApplication::translate("AddTeacher", "Username:", 0));
        contactError->setText(QString());
        label_4->setText(QApplication::translate("AddTeacher", "Password:", 0));
        femaleCheckbox->setText(QApplication::translate("AddTeacher", "Female", 0));
        pushButton->setText(QApplication::translate("AddTeacher", "ADD TEACHER", 0));
        maleCheckbox->setText(QApplication::translate("AddTeacher", "Male", 0));
        label_3->setText(QApplication::translate("AddTeacher", "First Name:", 0));
        DOBerror->setText(QString());
        errorLabel->setText(QString());
        label_6->setText(QApplication::translate("AddTeacher", "Contact Number:", 0));
        usernameError->setText(QString());
        emailError->setText(QString());
        label_5->setText(QApplication::translate("AddTeacher", "Retype Password:", 0));
        label_9->setText(QApplication::translate("AddTeacher", "Home Address:", 0));
        quitButton->setText(QApplication::translate("AddTeacher", "QUIT", 0));
        repasswordError->setText(QString());
        label_8->setText(QApplication::translate("AddTeacher", "Gender:", 0));
        label_10->setText(QApplication::translate("AddTeacher", "Last Name:", 0));
        genderError->setText(QString());
        passwordError->setText(QString());
        topLabel->setText(QApplication::translate("AddTeacher", "YOU CAN ADD A TEACHER BY FILLING THE FORM:", 0));
        label_11->setText(QApplication::translate("AddTeacher", "DOB:", 0));
    } // retranslateUi

};

namespace Ui {
    class AddTeacher: public Ui_AddTeacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTEACHER_H
