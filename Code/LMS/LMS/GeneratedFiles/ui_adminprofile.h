/********************************************************************************
** Form generated from reading UI file 'adminprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPROFILE_H
#define UI_ADMINPROFILE_H

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

class Ui_AdminProfile
{
public:
    QLabel *label;
    QPushButton *AddTeacherButton;
    QComboBox *optionComboBox;
    QPushButton *viewTeacherButton;
    QPushButton *DropTeacherButton;
    QPushButton *DropStudentButton;
    QPushButton *DropTeacherButton_3;
    QPushButton *addCourseButton;
    QPushButton *dropCourseButton;
    QPushButton *setTestButton;
    QPushButton *deleteTestButton;
    QPushButton *addQuestionButton;
    QPushButton *editTestButton;
    QLabel *lname;
    QLabel *address;
    QLabel *label_2;
    QLabel *fname;
    QLabel *contact;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *email;

    void setupUi(QWidget *AdminProfile)
    {
        if (AdminProfile->objectName().isEmpty())
            AdminProfile->setObjectName(QStringLiteral("AdminProfile"));
        AdminProfile->resize(1204, 592);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        AdminProfile->setFont(font);
        label = new QLabel(AdminProfile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 50, 491, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label->setAlignment(Qt::AlignCenter);
        AddTeacherButton = new QPushButton(AdminProfile);
        AddTeacherButton->setObjectName(QStringLiteral("AddTeacherButton"));
        AddTeacherButton->setGeometry(QRect(50, 140, 191, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        AddTeacherButton->setFont(font2);
        AddTeacherButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        optionComboBox = new QComboBox(AdminProfile);
        optionComboBox->setObjectName(QStringLiteral("optionComboBox"));
        optionComboBox->setGeometry(QRect(260, 140, 221, 51));
        optionComboBox->setFont(font2);
        optionComboBox->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        viewTeacherButton = new QPushButton(AdminProfile);
        viewTeacherButton->setObjectName(QStringLiteral("viewTeacherButton"));
        viewTeacherButton->setGeometry(QRect(260, 380, 221, 51));
        viewTeacherButton->setFont(font2);
        viewTeacherButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        DropTeacherButton = new QPushButton(AdminProfile);
        DropTeacherButton->setObjectName(QStringLiteral("DropTeacherButton"));
        DropTeacherButton->setGeometry(QRect(50, 200, 191, 51));
        DropTeacherButton->setFont(font2);
        DropTeacherButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        DropStudentButton = new QPushButton(AdminProfile);
        DropStudentButton->setObjectName(QStringLiteral("DropStudentButton"));
        DropStudentButton->setGeometry(QRect(50, 260, 191, 51));
        DropStudentButton->setFont(font2);
        DropStudentButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        DropTeacherButton_3 = new QPushButton(AdminProfile);
        DropTeacherButton_3->setObjectName(QStringLiteral("DropTeacherButton_3"));
        DropTeacherButton_3->setGeometry(QRect(260, 440, 221, 51));
        DropTeacherButton_3->setFont(font2);
        DropTeacherButton_3->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        addCourseButton = new QPushButton(AdminProfile);
        addCourseButton->setObjectName(QStringLiteral("addCourseButton"));
        addCourseButton->setGeometry(QRect(50, 320, 191, 51));
        addCourseButton->setFont(font2);
        addCourseButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        dropCourseButton = new QPushButton(AdminProfile);
        dropCourseButton->setObjectName(QStringLiteral("dropCourseButton"));
        dropCourseButton->setGeometry(QRect(50, 380, 191, 51));
        dropCourseButton->setFont(font2);
        dropCourseButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        setTestButton = new QPushButton(AdminProfile);
        setTestButton->setObjectName(QStringLiteral("setTestButton"));
        setTestButton->setGeometry(QRect(50, 440, 191, 51));
        setTestButton->setFont(font2);
        setTestButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        deleteTestButton = new QPushButton(AdminProfile);
        deleteTestButton->setObjectName(QStringLiteral("deleteTestButton"));
        deleteTestButton->setGeometry(QRect(260, 200, 221, 51));
        deleteTestButton->setFont(font2);
        deleteTestButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        addQuestionButton = new QPushButton(AdminProfile);
        addQuestionButton->setObjectName(QStringLiteral("addQuestionButton"));
        addQuestionButton->setGeometry(QRect(260, 260, 221, 51));
        addQuestionButton->setFont(font2);
        addQuestionButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        editTestButton = new QPushButton(AdminProfile);
        editTestButton->setObjectName(QStringLiteral("editTestButton"));
        editTestButton->setGeometry(QRect(260, 320, 221, 51));
        editTestButton->setFont(font2);
        editTestButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        lname = new QLabel(AdminProfile);
        lname->setObjectName(QStringLiteral("lname"));
        lname->setGeometry(QRect(750, 220, 271, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        lname->setFont(font3);
        lname->setStyleSheet(QStringLiteral("color:white;"));
        address = new QLabel(AdminProfile);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(720, 450, 281, 31));
        address->setFont(font3);
        address->setStyleSheet(QStringLiteral("color:white;"));
        label_2 = new QLabel(AdminProfile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 150, 151, 20));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);
        label_2->setStyleSheet(QStringLiteral("color:white;"));
        fname = new QLabel(AdminProfile);
        fname->setObjectName(QStringLiteral("fname"));
        fname->setGeometry(QRect(760, 150, 281, 31));
        fname->setFont(font3);
        fname->setStyleSheet(QStringLiteral("color:white;"));
        contact = new QLabel(AdminProfile);
        contact->setObjectName(QStringLiteral("contact"));
        contact->setGeometry(QRect(720, 300, 281, 21));
        contact->setFont(font3);
        contact->setStyleSheet(QStringLiteral("color:white;"));
        label_5 = new QLabel(AdminProfile);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(600, 380, 101, 20));
        label_5->setFont(font4);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        label_6 = new QLabel(AdminProfile);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(600, 460, 131, 20));
        label_6->setFont(font4);
        label_6->setStyleSheet(QStringLiteral("color:white;"));
        label_3 = new QLabel(AdminProfile);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(600, 220, 141, 20));
        label_3->setFont(font4);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        label_4 = new QLabel(AdminProfile);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(600, 300, 131, 20));
        label_4->setFont(font4);
        label_4->setStyleSheet(QStringLiteral("color:white;"));
        email = new QLabel(AdminProfile);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(700, 370, 271, 31));
        email->setFont(font3);
        email->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(AdminProfile);
        QObject::connect(editTestButton, SIGNAL(clicked()), AdminProfile, SLOT(editTestClicked()));
        QObject::connect(optionComboBox, SIGNAL(currentIndexChanged(int)), AdminProfile, SLOT(optionsChanged()));
        QObject::connect(AddTeacherButton, SIGNAL(clicked()), AdminProfile, SLOT(AddTeacherButtonClicked()));
        QObject::connect(DropTeacherButton_3, SIGNAL(clicked()), AdminProfile, SLOT(viewStudentsClicked()));
        QObject::connect(deleteTestButton, SIGNAL(clicked()), AdminProfile, SLOT(deleteTestClicked()));
        QObject::connect(viewTeacherButton, SIGNAL(clicked()), AdminProfile, SLOT(viewTeacherClicked()));
        QObject::connect(dropCourseButton, SIGNAL(clicked()), AdminProfile, SLOT(dropCourseClicked()));
        QObject::connect(addCourseButton, SIGNAL(clicked()), AdminProfile, SLOT(addCourseClicked()));
        QObject::connect(addQuestionButton, SIGNAL(clicked()), AdminProfile, SLOT(addQuestionClicked()));
        QObject::connect(DropStudentButton, SIGNAL(clicked()), AdminProfile, SLOT(viewStudentsClicked()));
        QObject::connect(setTestButton, SIGNAL(clicked()), AdminProfile, SLOT(setTestClicked()));
        QObject::connect(DropTeacherButton, SIGNAL(clicked()), AdminProfile, SLOT(viewTeacherClicked()));

        QMetaObject::connectSlotsByName(AdminProfile);
    } // setupUi

    void retranslateUi(QWidget *AdminProfile)
    {
        AdminProfile->setWindowTitle(QApplication::translate("AdminProfile", "AdminProfile", 0));
        label->setText(QApplication::translate("AdminProfile", "WELCOME ", 0));
        AddTeacherButton->setText(QApplication::translate("AdminProfile", "ADD TEACHER", 0));
        optionComboBox->clear();
        optionComboBox->insertItems(0, QStringList()
         << QApplication::translate("AdminProfile", "     SETTINGS", 0)
         << QApplication::translate("AdminProfile", "EDIT PROFILE", 0)
         << QApplication::translate("AdminProfile", "CHANGE PASSWORD", 0)
         << QApplication::translate("AdminProfile", "LOG OUT", 0)
        );
        viewTeacherButton->setText(QApplication::translate("AdminProfile", "VIEW TEACHERS", 0));
        DropTeacherButton->setText(QApplication::translate("AdminProfile", "DROP A TEACHER", 0));
        DropStudentButton->setText(QApplication::translate("AdminProfile", "DROP A STUDENT", 0));
        DropTeacherButton_3->setText(QApplication::translate("AdminProfile", "VIEW STUDENTS", 0));
        addCourseButton->setText(QApplication::translate("AdminProfile", "ADD COURSE", 0));
        dropCourseButton->setText(QApplication::translate("AdminProfile", "DROP COURSE", 0));
        setTestButton->setText(QApplication::translate("AdminProfile", "SET TEST", 0));
        deleteTestButton->setText(QApplication::translate("AdminProfile", "DELETE TEST", 0));
        addQuestionButton->setText(QApplication::translate("AdminProfile", "ADD QUESTION", 0));
        editTestButton->setText(QApplication::translate("AdminProfile", "EDIT TEST", 0));
        lname->setText(QString());
        address->setText(QString());
        label_2->setText(QApplication::translate("AdminProfile", "FIRST NAME:", 0));
        fname->setText(QString());
        contact->setText(QString());
        label_5->setText(QApplication::translate("AdminProfile", "EMAIL:", 0));
        label_6->setText(QApplication::translate("AdminProfile", "ADDRESS:", 0));
        label_3->setText(QApplication::translate("AdminProfile", "LAST NAME:", 0));
        label_4->setText(QApplication::translate("AdminProfile", "CONTACT:", 0));
        email->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminProfile: public Ui_AdminProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPROFILE_H
