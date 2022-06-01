/********************************************************************************
** Form generated from reading UI file 'teacherprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERPROFILE_H
#define UI_TEACHERPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherProfile
{
public:
    QLabel *topLabel;
    QPushButton *setTestButton;
    QComboBox *optionComboBox;
    QPushButton *editTestButton;
    QPushButton *deleteTestButton;
    QPushButton *addQuestionButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *fname;
    QLabel *lname;
    QLabel *contact;
    QLabel *email;
    QLabel *address;

    void setupUi(QWidget *TeacherProfile)
    {
        if (TeacherProfile->objectName().isEmpty())
            TeacherProfile->setObjectName(QStringLiteral("TeacherProfile"));
        TeacherProfile->resize(986, 672);
        topLabel = new QLabel(TeacherProfile);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        topLabel->setGeometry(QRect(240, 30, 411, 51));
        QFont font;
        font.setFamily(QStringLiteral("Colonna MT"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        topLabel->setFont(font);
        topLabel->setStyleSheet(QStringLiteral("color:white;"));
        topLabel->setAlignment(Qt::AlignCenter);
        setTestButton = new QPushButton(TeacherProfile);
        setTestButton->setObjectName(QStringLiteral("setTestButton"));
        setTestButton->setGeometry(QRect(40, 220, 231, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        setTestButton->setFont(font1);
        setTestButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        optionComboBox = new QComboBox(TeacherProfile);
        optionComboBox->setObjectName(QStringLiteral("optionComboBox"));
        optionComboBox->setGeometry(QRect(40, 140, 231, 51));
        optionComboBox->setFont(font1);
        optionComboBox->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        editTestButton = new QPushButton(TeacherProfile);
        editTestButton->setObjectName(QStringLiteral("editTestButton"));
        editTestButton->setGeometry(QRect(40, 380, 231, 51));
        editTestButton->setFont(font1);
        editTestButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        deleteTestButton = new QPushButton(TeacherProfile);
        deleteTestButton->setObjectName(QStringLiteral("deleteTestButton"));
        deleteTestButton->setGeometry(QRect(40, 460, 231, 61));
        deleteTestButton->setFont(font1);
        deleteTestButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        addQuestionButton = new QPushButton(TeacherProfile);
        addQuestionButton->setObjectName(QStringLiteral("addQuestionButton"));
        addQuestionButton->setGeometry(QRect(40, 290, 231, 51));
        addQuestionButton->setFont(font1);
        addQuestionButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        label = new QLabel(TeacherProfile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 170, 151, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label_2 = new QLabel(TeacherProfile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(480, 250, 161, 31));
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color:white;"));
        label_3 = new QLabel(TeacherProfile);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(480, 320, 131, 21));
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        label_4 = new QLabel(TeacherProfile);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 400, 161, 21));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color:white;"));
        label_5 = new QLabel(TeacherProfile);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(480, 460, 121, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        fname = new QLabel(TeacherProfile);
        fname->setObjectName(QStringLiteral("fname"));
        fname->setGeometry(QRect(720, 170, 111, 31));
        fname->setFont(font2);
        fname->setStyleSheet(QStringLiteral("color:white;"));
        lname = new QLabel(TeacherProfile);
        lname->setObjectName(QStringLiteral("lname"));
        lname->setGeometry(QRect(720, 240, 121, 41));
        lname->setFont(font2);
        lname->setStyleSheet(QStringLiteral("color:white;"));
        contact = new QLabel(TeacherProfile);
        contact->setObjectName(QStringLiteral("contact"));
        contact->setGeometry(QRect(720, 320, 191, 41));
        contact->setFont(font2);
        contact->setStyleSheet(QStringLiteral("color:white;"));
        email = new QLabel(TeacherProfile);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(720, 400, 271, 41));
        email->setFont(font2);
        email->setStyleSheet(QStringLiteral("color:white;"));
        address = new QLabel(TeacherProfile);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(700, 480, 261, 31));
        address->setFont(font2);
        address->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(TeacherProfile);
        QObject::connect(optionComboBox, SIGNAL(currentIndexChanged(int)), TeacherProfile, SLOT(optionsComboBox()));
        QObject::connect(setTestButton, SIGNAL(clicked()), TeacherProfile, SLOT(setTestClicked()));
        QObject::connect(addQuestionButton, SIGNAL(clicked()), TeacherProfile, SLOT(addQuestionClicked()));
        QObject::connect(editTestButton, SIGNAL(clicked()), TeacherProfile, SLOT(editTestClicked()));
        QObject::connect(deleteTestButton, SIGNAL(clicked()), TeacherProfile, SLOT(deleteTestClicked()));

        QMetaObject::connectSlotsByName(TeacherProfile);
    } // setupUi

    void retranslateUi(QWidget *TeacherProfile)
    {
        TeacherProfile->setWindowTitle(QApplication::translate("TeacherProfile", "TeacherProfile", 0));
        topLabel->setText(QString());
        setTestButton->setText(QApplication::translate("TeacherProfile", "SET TEST", 0));
        optionComboBox->clear();
        optionComboBox->insertItems(0, QStringList()
         << QApplication::translate("TeacherProfile", "      OPTIONS", 0)
         << QApplication::translate("TeacherProfile", "EDIT PROFILE", 0)
         << QApplication::translate("TeacherProfile", "CHANGE PASSWORD", 0)
         << QApplication::translate("TeacherProfile", "LOG OUT", 0)
        );
        editTestButton->setText(QApplication::translate("TeacherProfile", "EDIT TEST", 0));
        deleteTestButton->setText(QApplication::translate("TeacherProfile", "DELETE TEST", 0));
        addQuestionButton->setText(QApplication::translate("TeacherProfile", "ADD QUESTION", 0));
        label->setText(QApplication::translate("TeacherProfile", "FIRST NAME", 0));
        label_2->setText(QApplication::translate("TeacherProfile", "LAST NAME", 0));
        label_3->setText(QApplication::translate("TeacherProfile", "CONTACT", 0));
        label_4->setText(QApplication::translate("TeacherProfile", "EMAIL", 0));
        label_5->setText(QApplication::translate("TeacherProfile", "ADDRESS", 0));
        fname->setText(QString());
        lname->setText(QString());
        contact->setText(QString());
        email->setText(QString());
        address->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TeacherProfile: public Ui_TeacherProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERPROFILE_H
