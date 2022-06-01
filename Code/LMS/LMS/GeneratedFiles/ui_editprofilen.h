/********************************************************************************
** Form generated from reading UI file 'editprofilen.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILEN_H
#define UI_EDITPROFILEN_H

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

class Ui_editProfilen
{
public:
    QLabel *topLabel;
    QLabel *label_3;
    QLineEdit *firstnameEdit;
    QLabel *label_10;
    QLineEdit *lnameEdit;
    QLabel *nameError;
    QLineEdit *phoneEdit;
    QLabel *label_6;
    QLabel *contactError;
    QLineEdit *emailEdit;
    QLabel *emailError;
    QLabel *emailLabel;
    QLabel *label_9;
    QLineEdit *homeEdit;
    QPushButton *saveChangesButton;
    QPushButton *CancelButton;
    QLabel *errorLabel;

    void setupUi(QWidget *editProfilen)
    {
        if (editProfilen->objectName().isEmpty())
            editProfilen->setObjectName(QStringLiteral("editProfilen"));
        editProfilen->resize(1030, 595);
        topLabel = new QLabel(editProfilen);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        topLabel->setGeometry(QRect(270, 30, 171, 31));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        topLabel->setFont(font);
        topLabel->setStyleSheet(QStringLiteral("color:white;"));
        label_3 = new QLabel(editProfilen);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 130, 121, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        firstnameEdit = new QLineEdit(editProfilen);
        firstnameEdit->setObjectName(QStringLiteral("firstnameEdit"));
        firstnameEdit->setGeometry(QRect(400, 130, 131, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        firstnameEdit->setFont(font2);
        label_10 = new QLabel(editProfilen);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(540, 140, 101, 21));
        label_10->setFont(font1);
        label_10->setStyleSheet(QStringLiteral("color:white;"));
        lnameEdit = new QLineEdit(editProfilen);
        lnameEdit->setObjectName(QStringLiteral("lnameEdit"));
        lnameEdit->setGeometry(QRect(640, 130, 121, 31));
        lnameEdit->setFont(font2);
        nameError = new QLabel(editProfilen);
        nameError->setObjectName(QStringLiteral("nameError"));
        nameError->setGeometry(QRect(770, 130, 481, 31));
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
        nameError->setFont(font1);
        nameError->setStyleSheet(QStringLiteral("color:white;"));
        phoneEdit = new QLineEdit(editProfilen);
        phoneEdit->setObjectName(QStringLiteral("phoneEdit"));
        phoneEdit->setGeometry(QRect(400, 190, 361, 41));
        phoneEdit->setFont(font2);
        label_6 = new QLabel(editProfilen);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(220, 200, 171, 20));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color:white;"));
        contactError = new QLabel(editProfilen);
        contactError->setObjectName(QStringLiteral("contactError"));
        contactError->setGeometry(QRect(770, 200, 381, 31));
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
        contactError->setFont(font1);
        contactError->setStyleSheet(QStringLiteral("color:white;"));
        emailEdit = new QLineEdit(editProfilen);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));
        emailEdit->setGeometry(QRect(400, 270, 361, 41));
        emailEdit->setFont(font2);
        emailError = new QLabel(editProfilen);
        emailError->setObjectName(QStringLiteral("emailError"));
        emailError->setGeometry(QRect(780, 280, 421, 31));
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
        emailError->setPalette(palette2);
        emailError->setFont(font1);
        emailError->setStyleSheet(QStringLiteral("color:white;"));
        emailLabel = new QLabel(editProfilen);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        emailLabel->setGeometry(QRect(240, 280, 151, 20));
        emailLabel->setFont(font1);
        emailLabel->setStyleSheet(QStringLiteral("color:white;"));
        label_9 = new QLabel(editProfilen);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(240, 360, 161, 20));
        label_9->setFont(font1);
        label_9->setStyleSheet(QStringLiteral("color:white;"));
        homeEdit = new QLineEdit(editProfilen);
        homeEdit->setObjectName(QStringLiteral("homeEdit"));
        homeEdit->setGeometry(QRect(400, 350, 361, 41));
        homeEdit->setFont(font2);
        saveChangesButton = new QPushButton(editProfilen);
        saveChangesButton->setObjectName(QStringLiteral("saveChangesButton"));
        saveChangesButton->setGeometry(QRect(390, 430, 181, 51));
        saveChangesButton->setFont(font1);
        saveChangesButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        CancelButton = new QPushButton(editProfilen);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(630, 430, 121, 51));
        CancelButton->setFont(font1);
        CancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        errorLabel = new QLabel(editProfilen);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(300, 500, 541, 71));
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
        errorLabel->setFont(font1);
        errorLabel->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(editProfilen);
        QObject::connect(saveChangesButton, SIGNAL(clicked()), editProfilen, SLOT(saveChangesClicked()));
        QObject::connect(CancelButton, SIGNAL(clicked()), editProfilen, SLOT(CancelButtonClicked()));

        QMetaObject::connectSlotsByName(editProfilen);
    } // setupUi

    void retranslateUi(QWidget *editProfilen)
    {
        editProfilen->setWindowTitle(QApplication::translate("editProfilen", "editProfilen", 0));
        topLabel->setText(QString());
        label_3->setText(QApplication::translate("editProfilen", "First Name:", 0));
        label_10->setText(QApplication::translate("editProfilen", "Last Name:", 0));
        nameError->setText(QString());
        label_6->setText(QApplication::translate("editProfilen", "Contact Number:", 0));
        contactError->setText(QString());
        emailError->setText(QString());
        emailLabel->setText(QApplication::translate("editProfilen", "Email Address:", 0));
        label_9->setText(QApplication::translate("editProfilen", "Home Address:", 0));
        saveChangesButton->setText(QApplication::translate("editProfilen", "SAVE CHANGES", 0));
        CancelButton->setText(QApplication::translate("editProfilen", "CANCEL", 0));
        errorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editProfilen: public Ui_editProfilen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILEN_H
