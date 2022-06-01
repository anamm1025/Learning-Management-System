/********************************************************************************
** Form generated from reading UI file 'studentprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPROFILE_H
#define UI_STUDENTPROFILE_H

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

class Ui_StudentProfile
{
public:
    QLabel *label;
    QComboBox *optionComboBox;
    QPushButton *takeQuizButton;
    QPushButton *previousResults;
    QPushButton *takeExerciseButton;
    QLabel *label_4;
    QLabel *contact;
    QLabel *address;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *lname;
    QLabel *label_5;
    QLabel *email;
    QLabel *label_2;
    QLabel *fname;

    void setupUi(QWidget *StudentProfile)
    {
        if (StudentProfile->objectName().isEmpty())
            StudentProfile->setObjectName(QStringLiteral("StudentProfile"));
        StudentProfile->resize(1266, 596);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        StudentProfile->setFont(font);
        label = new QLabel(StudentProfile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 30, 491, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Colonna MT"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label->setAlignment(Qt::AlignCenter);
        optionComboBox = new QComboBox(StudentProfile);
        optionComboBox->setObjectName(QStringLiteral("optionComboBox"));
        optionComboBox->setGeometry(QRect(30, 400, 221, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        optionComboBox->setFont(font2);
        optionComboBox->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        takeQuizButton = new QPushButton(StudentProfile);
        takeQuizButton->setObjectName(QStringLiteral("takeQuizButton"));
        takeQuizButton->setGeometry(QRect(30, 120, 221, 61));
        takeQuizButton->setFont(font2);
        takeQuizButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        previousResults = new QPushButton(StudentProfile);
        previousResults->setObjectName(QStringLiteral("previousResults"));
        previousResults->setGeometry(QRect(30, 300, 221, 61));
        previousResults->setFont(font2);
        previousResults->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        takeExerciseButton = new QPushButton(StudentProfile);
        takeExerciseButton->setObjectName(QStringLiteral("takeExerciseButton"));
        takeExerciseButton->setGeometry(QRect(30, 200, 221, 61));
        takeExerciseButton->setFont(font2);
        takeExerciseButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        label_4 = new QLabel(StudentProfile);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(415, 270, 141, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(14);
        font3.setItalic(false);
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("color:white;"));
        contact = new QLabel(StudentProfile);
        contact->setObjectName(QStringLiteral("contact"));
        contact->setGeometry(QRect(655, 270, 361, 31));
        contact->setFont(font2);
        contact->setStyleSheet(QStringLiteral("color:white;"));
        address = new QLabel(StudentProfile);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(665, 420, 401, 31));
        address->setFont(font2);
        address->setStyleSheet(QStringLiteral("color:white;"));
        label_6 = new QLabel(StudentProfile);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(415, 420, 141, 20));
        label_6->setFont(font3);
        label_6->setStyleSheet(QStringLiteral("color:white;"));
        label_3 = new QLabel(StudentProfile);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(415, 200, 151, 20));
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        lname = new QLabel(StudentProfile);
        lname->setObjectName(QStringLiteral("lname"));
        lname->setGeometry(QRect(655, 200, 371, 31));
        lname->setFont(font2);
        lname->setStyleSheet(QStringLiteral("color:white;"));
        label_5 = new QLabel(StudentProfile);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(415, 340, 141, 20));
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        email = new QLabel(StudentProfile);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(655, 340, 331, 41));
        email->setFont(font2);
        email->setStyleSheet(QStringLiteral("color:white;"));
        label_2 = new QLabel(StudentProfile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(410, 130, 161, 21));
        label_2->setFont(font3);
        label_2->setStyleSheet(QStringLiteral("color:white;"));
        fname = new QLabel(StudentProfile);
        fname->setObjectName(QStringLiteral("fname"));
        fname->setGeometry(QRect(655, 130, 381, 31));
        fname->setFont(font2);
        fname->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(StudentProfile);
        QObject::connect(optionComboBox, SIGNAL(currentIndexChanged(int)), StudentProfile, SLOT(optionsButtonClicked()));
        QObject::connect(takeQuizButton, SIGNAL(clicked()), StudentProfile, SLOT(TakeQuizClicked()));
        QObject::connect(previousResults, SIGNAL(clicked()), StudentProfile, SLOT(PreviousResultClicked()));
        QObject::connect(takeExerciseButton, SIGNAL(clicked()), StudentProfile, SLOT(takeExerciseClicked()));

        QMetaObject::connectSlotsByName(StudentProfile);
    } // setupUi

    void retranslateUi(QWidget *StudentProfile)
    {
        StudentProfile->setWindowTitle(QApplication::translate("StudentProfile", "StudentProfile", 0));
        label->setText(QApplication::translate("StudentProfile", "WELCOME ", 0));
        optionComboBox->clear();
        optionComboBox->insertItems(0, QStringList()
         << QApplication::translate("StudentProfile", "       OPTIONS", 0)
         << QApplication::translate("StudentProfile", "EDIT PROFILE", 0)
         << QApplication::translate("StudentProfile", "CHANGE PASSWORD", 0)
         << QApplication::translate("StudentProfile", "LOG OUT", 0)
        );
        takeQuizButton->setText(QApplication::translate("StudentProfile", "TAKE QUIZ", 0));
        previousResults->setText(QApplication::translate("StudentProfile", "VIEW PREVIOUS\n"
" RESULTS", 0));
        takeExerciseButton->setText(QApplication::translate("StudentProfile", "TAKE EXERCISES", 0));
        label_4->setText(QApplication::translate("StudentProfile", "Contact:", 0));
        contact->setText(QString());
        address->setText(QString());
        label_6->setText(QApplication::translate("StudentProfile", "Address:", 0));
        label_3->setText(QApplication::translate("StudentProfile", "Last Name:", 0));
        lname->setText(QString());
        label_5->setText(QApplication::translate("StudentProfile", "Email:", 0));
        email->setText(QString());
        label_2->setText(QApplication::translate("StudentProfile", "First Name:", 0));
        fname->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StudentProfile: public Ui_StudentProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPROFILE_H
