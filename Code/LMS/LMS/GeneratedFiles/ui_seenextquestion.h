/********************************************************************************
** Form generated from reading UI file 'seenextquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEENEXTQUESTION_H
#define UI_SEENEXTQUESTION_H

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

class Ui_seeNextQuestion
{
public:
    QLabel *label_7;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *correct;
    QPushButton *nextButton;
    QLabel *label_6;
    QLabel *msgLabel;
    QLabel *label_5;
    QPushButton *cancelButton;
    QLabel *statementLabel;
    QLabel *optionA;
    QLabel *optionB;
    QLabel *optionC;
    QLabel *optionD;
    QLabel *username;
    QPushButton *submitTest;

    void setupUi(QWidget *seeNextQuestion)
    {
        if (seeNextQuestion->objectName().isEmpty())
            seeNextQuestion->setObjectName(QStringLiteral("seeNextQuestion"));
        seeNextQuestion->resize(1186, 614);
        label_7 = new QLabel(seeNextQuestion);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(220, 440, 211, 31));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(seeNextQuestion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(490, 80, 261, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Colonna MT"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label_3 = new QLabel(seeNextQuestion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 250, 101, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        label_4 = new QLabel(seeNextQuestion);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 300, 101, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color:white;"));
        correct = new QComboBox(seeNextQuestion);
        correct->setObjectName(QStringLiteral("correct"));
        correct->setGeometry(QRect(460, 450, 131, 31));
        correct->setFont(font);
        correct->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        nextButton = new QPushButton(seeNextQuestion);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(420, 530, 131, 41));
        nextButton->setFont(font);
        nextButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        label_6 = new QLabel(seeNextQuestion);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 400, 91, 16));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color:white;"));
        msgLabel = new QLabel(seeNextQuestion);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setGeometry(QRect(340, 580, 401, 61));
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
        msgLabel->setPalette(palette);
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        msgLabel->setFont(font2);
        msgLabel->setStyleSheet(QStringLiteral("color:white;"));
        msgLabel->setWordWrap(true);
        label_5 = new QLabel(seeNextQuestion);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(330, 350, 101, 20));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        cancelButton = new QPushButton(seeNextQuestion);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(570, 530, 131, 41));
        cancelButton->setFont(font);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        statementLabel = new QLabel(seeNextQuestion);
        statementLabel->setObjectName(QStringLiteral("statementLabel"));
        statementLabel->setGeometry(QRect(270, 120, 801, 91));
        statementLabel->setFont(font);
        statementLabel->setStyleSheet(QStringLiteral("color:white;"));
        statementLabel->setWordWrap(true);
        optionA = new QLabel(seeNextQuestion);
        optionA->setObjectName(QStringLiteral("optionA"));
        optionA->setGeometry(QRect(420, 230, 581, 61));
        optionA->setFont(font);
        optionA->setStyleSheet(QStringLiteral("color:white;"));
        optionA->setWordWrap(true);
        optionB = new QLabel(seeNextQuestion);
        optionB->setObjectName(QStringLiteral("optionB"));
        optionB->setGeometry(QRect(420, 290, 581, 41));
        optionB->setFont(font);
        optionB->setStyleSheet(QStringLiteral("color:white;"));
        optionB->setWordWrap(true);
        optionC = new QLabel(seeNextQuestion);
        optionC->setObjectName(QStringLiteral("optionC"));
        optionC->setGeometry(QRect(420, 340, 581, 41));
        optionC->setFont(font);
        optionC->setStyleSheet(QStringLiteral("color:white;"));
        optionC->setWordWrap(true);
        optionD = new QLabel(seeNextQuestion);
        optionD->setObjectName(QStringLiteral("optionD"));
        optionD->setGeometry(QRect(420, 390, 581, 41));
        optionD->setFont(font);
        optionD->setStyleSheet(QStringLiteral("color:white;"));
        optionD->setWordWrap(true);
        username = new QLabel(seeNextQuestion);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(80, 30, 141, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        username->setFont(font3);
        username->setStyleSheet(QStringLiteral("color:white;"));
        submitTest = new QPushButton(seeNextQuestion);
        submitTest->setObjectName(QStringLiteral("submitTest"));
        submitTest->setGeometry(QRect(710, 530, 161, 41));
        submitTest->setFont(font);
        submitTest->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));

        retranslateUi(seeNextQuestion);
        QObject::connect(cancelButton, SIGNAL(clicked()), seeNextQuestion, SLOT(QuitButtonClicked()));
        QObject::connect(nextButton, SIGNAL(clicked()), seeNextQuestion, SLOT(NextButtonClicked()));
        QObject::connect(submitTest, SIGNAL(clicked()), seeNextQuestion, SLOT(submitTestClicked()));

        QMetaObject::connectSlotsByName(seeNextQuestion);
    } // setupUi

    void retranslateUi(QWidget *seeNextQuestion)
    {
        seeNextQuestion->setWindowTitle(QApplication::translate("seeNextQuestion", "seeNextQuestion", 0));
        label_7->setText(QApplication::translate("seeNextQuestion", "ChooseCorrect Option:", 0));
        label->setText(QApplication::translate("seeNextQuestion", "Question No", 0));
        label_3->setText(QApplication::translate("seeNextQuestion", "Option A :", 0));
        label_4->setText(QApplication::translate("seeNextQuestion", "Option B:", 0));
        correct->clear();
        correct->insertItems(0, QStringList()
         << QApplication::translate("seeNextQuestion", "Select", 0)
         << QApplication::translate("seeNextQuestion", "Option A", 0)
         << QApplication::translate("seeNextQuestion", "Option B", 0)
         << QApplication::translate("seeNextQuestion", "Option C", 0)
         << QApplication::translate("seeNextQuestion", "Option D", 0)
        );
        nextButton->setText(QApplication::translate("seeNextQuestion", "NEXT", 0));
        label_6->setText(QApplication::translate("seeNextQuestion", "Option D:", 0));
        msgLabel->setText(QString());
        label_5->setText(QApplication::translate("seeNextQuestion", "Option C:", 0));
        cancelButton->setText(QApplication::translate("seeNextQuestion", "QUIT TEST", 0));
        statementLabel->setText(QString());
        optionA->setText(QString());
        optionB->setText(QString());
        optionC->setText(QString());
        optionD->setText(QString());
        username->setText(QString());
        submitTest->setText(QApplication::translate("seeNextQuestion", "SUBMIT TEST", 0));
    } // retranslateUi

};

namespace Ui {
    class seeNextQuestion: public Ui_seeNextQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEENEXTQUESTION_H
