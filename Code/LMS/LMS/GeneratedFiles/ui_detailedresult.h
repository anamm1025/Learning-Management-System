/********************************************************************************
** Form generated from reading UI file 'detailedresult.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILEDRESULT_H
#define UI_DETAILEDRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_detailedResult
{
public:
    QLabel *username;
    QLabel *label;
    QLabel *correctAnswers;
    QLabel *wrongAnswers;
    QLabel *unanswered;
    QPushButton *pushButton;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QPushButton *takeExerciseButton;

    void setupUi(QWidget *detailedResult)
    {
        if (detailedResult->objectName().isEmpty())
            detailedResult->setObjectName(QStringLiteral("detailedResult"));
        detailedResult->resize(1055, 749);
        username = new QLabel(detailedResult);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(10, 10, 141, 51));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        username->setFont(font);
        username->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(detailedResult);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 60, 411, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label->setAlignment(Qt::AlignCenter);
        correctAnswers = new QLabel(detailedResult);
        correctAnswers->setObjectName(QStringLiteral("correctAnswers"));
        correctAnswers->setGeometry(QRect(410, 130, 391, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        correctAnswers->setFont(font2);
        correctAnswers->setStyleSheet(QStringLiteral("color:white;"));
        correctAnswers->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        wrongAnswers = new QLabel(detailedResult);
        wrongAnswers->setObjectName(QStringLiteral("wrongAnswers"));
        wrongAnswers->setGeometry(QRect(410, 180, 431, 41));
        wrongAnswers->setFont(font2);
        wrongAnswers->setStyleSheet(QStringLiteral("color:white;"));
        wrongAnswers->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        unanswered = new QLabel(detailedResult);
        unanswered->setObjectName(QStringLiteral("unanswered"));
        unanswered->setGeometry(QRect(410, 230, 421, 41));
        unanswered->setFont(font2);
        unanswered->setStyleSheet(QStringLiteral("color:white;"));
        unanswered->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton = new QPushButton(detailedResult);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(890, 650, 121, 61));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        label_2 = new QLabel(detailedResult);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 340, 431, 31));
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color:white;"));
        textBrowser = new QTextBrowser(detailedResult);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(290, 390, 721, 231));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
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
        textBrowser->setPalette(palette);
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        textBrowser->setFont(font3);
        textBrowser->setStyleSheet(QStringLiteral("color:black;"));
        takeExerciseButton = new QPushButton(detailedResult);
        takeExerciseButton->setObjectName(QStringLiteral("takeExerciseButton"));
        takeExerciseButton->setGeometry(QRect(670, 650, 211, 61));
        takeExerciseButton->setFont(font2);
        takeExerciseButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));

        retranslateUi(detailedResult);
        QObject::connect(pushButton, SIGNAL(clicked()), detailedResult, SLOT(CancelButtonClicked()));
        QObject::connect(takeExerciseButton, SIGNAL(clicked()), detailedResult, SLOT(TakeExercisesClicked()));

        QMetaObject::connectSlotsByName(detailedResult);
    } // setupUi

    void retranslateUi(QWidget *detailedResult)
    {
        detailedResult->setWindowTitle(QApplication::translate("detailedResult", "detailedResult", 0));
        username->setText(QString());
        label->setText(QApplication::translate("detailedResult", "DETAILED RESULT:", 0));
        correctAnswers->setText(QApplication::translate("detailedResult", "Correct Answers:", 0));
        wrongAnswers->setText(QApplication::translate("detailedResult", "Wrong Answers:", 0));
        unanswered->setText(QApplication::translate("detailedResult", "UnAnswered Questions:", 0));
        pushButton->setText(QApplication::translate("detailedResult", "CANCEL", 0));
        label_2->setText(QApplication::translate("detailedResult", "WRONG QUESTIONS AND THEIR CORRECT ANSWERS ARE:", 0));
        textBrowser->setHtml(QApplication::translate("detailedResult", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Comic Sans MS'; font-size:13pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400;\"><br /></p></body></html>", 0));
        takeExerciseButton->setText(QApplication::translate("detailedResult", "TAKE EXERCISES", 0));
    } // retranslateUi

};

namespace Ui {
    class detailedResult: public Ui_detailedResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILEDRESULT_H
