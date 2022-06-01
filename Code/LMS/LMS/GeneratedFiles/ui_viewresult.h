/********************************************************************************
** Form generated from reading UI file 'viewresult.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWRESULT_H
#define UI_VIEWRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewResult
{
public:
    QLabel *username;
    QLabel *label;
    QLabel *correctAnswers;
    QLabel *wrongAnswers;
    QLabel *unanswered;
    QPushButton *pushButton;
    QPushButton *ViewDetailedResult;
    QPushButton *takeExerciseButton;

    void setupUi(QWidget *viewResult)
    {
        if (viewResult->objectName().isEmpty())
            viewResult->setObjectName(QStringLiteral("viewResult"));
        viewResult->resize(1100, 610);
        username = new QLabel(viewResult);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(290, 20, 141, 51));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        username->setFont(font);
        username->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(viewResult);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 90, 261, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label->setAlignment(Qt::AlignCenter);
        correctAnswers = new QLabel(viewResult);
        correctAnswers->setObjectName(QStringLiteral("correctAnswers"));
        correctAnswers->setGeometry(QRect(350, 200, 511, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        correctAnswers->setFont(font2);
        correctAnswers->setStyleSheet(QStringLiteral("color:white;"));
        correctAnswers->setAlignment(Qt::AlignCenter);
        wrongAnswers = new QLabel(viewResult);
        wrongAnswers->setObjectName(QStringLiteral("wrongAnswers"));
        wrongAnswers->setGeometry(QRect(350, 270, 511, 41));
        wrongAnswers->setFont(font2);
        wrongAnswers->setStyleSheet(QStringLiteral("color:white;"));
        wrongAnswers->setAlignment(Qt::AlignCenter);
        unanswered = new QLabel(viewResult);
        unanswered->setObjectName(QStringLiteral("unanswered"));
        unanswered->setGeometry(QRect(350, 340, 511, 41));
        unanswered->setFont(font2);
        unanswered->setStyleSheet(QStringLiteral("color:white;"));
        unanswered->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(viewResult);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(780, 450, 121, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        ViewDetailedResult = new QPushButton(viewResult);
        ViewDetailedResult->setObjectName(QStringLiteral("ViewDetailedResult"));
        ViewDetailedResult->setGeometry(QRect(480, 450, 271, 61));
        ViewDetailedResult->setFont(font3);
        ViewDetailedResult->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        takeExerciseButton = new QPushButton(viewResult);
        takeExerciseButton->setObjectName(QStringLiteral("takeExerciseButton"));
        takeExerciseButton->setGeometry(QRect(270, 450, 191, 61));
        takeExerciseButton->setFont(font3);
        takeExerciseButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));

        retranslateUi(viewResult);
        QObject::connect(pushButton, SIGNAL(clicked()), viewResult, SLOT(CancelButtonClicked()));
        QObject::connect(ViewDetailedResult, SIGNAL(clicked()), viewResult, SLOT(viewDetailedresultClicked()));
        QObject::connect(takeExerciseButton, SIGNAL(clicked()), viewResult, SLOT(TakeExercisesClicked()));

        QMetaObject::connectSlotsByName(viewResult);
    } // setupUi

    void retranslateUi(QWidget *viewResult)
    {
        viewResult->setWindowTitle(QApplication::translate("viewResult", "viewResult", 0));
        username->setText(QString());
        label->setText(QApplication::translate("viewResult", "RESULT:", 0));
        correctAnswers->setText(QApplication::translate("viewResult", "Correct Answers:", 0));
        wrongAnswers->setText(QApplication::translate("viewResult", "Wrong Answers:", 0));
        unanswered->setText(QApplication::translate("viewResult", "UnAnswered Questions:", 0));
        pushButton->setText(QApplication::translate("viewResult", "CANCEL", 0));
        ViewDetailedResult->setText(QApplication::translate("viewResult", "VIEW DETAILED RESULT", 0));
        takeExerciseButton->setText(QApplication::translate("viewResult", "TAKE EXERCISES", 0));
    } // retranslateUi

};

namespace Ui {
    class viewResult: public Ui_viewResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRESULT_H
