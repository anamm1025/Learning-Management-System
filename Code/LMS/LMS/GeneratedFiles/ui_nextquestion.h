/********************************************************************************
** Form generated from reading UI file 'nextquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXTQUESTION_H
#define UI_NEXTQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nextQuestion
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *correct;
    QLineEdit *optionA;
    QLineEdit *optionC;
    QLineEdit *optionB;
    QLineEdit *optionD;
    QLineEdit *statementEdit;
    QPushButton *addButton;
    QPushButton *nextbutton;
    QPushButton *cancelButton;
    QLabel *qNoLabel;
    QLabel *msgLabel;

    void setupUi(QWidget *nextQuestion)
    {
        if (nextQuestion->objectName().isEmpty())
            nextQuestion->setObjectName(QStringLiteral("nextQuestion"));
        nextQuestion->resize(1201, 604);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        nextQuestion->setFont(font);
        label = new QLabel(nextQuestion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 105, 151, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label_2 = new QLabel(nextQuestion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(500, 39, 241, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Colonna MT"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color:white;"));
        label_3 = new QLabel(nextQuestion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 225, 101, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        label_4 = new QLabel(nextQuestion);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(660, 225, 101, 21));
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("color:white;"));
        label_5 = new QLabel(nextQuestion);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(430, 310, 101, 16));
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        label_6 = new QLabel(nextQuestion);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(660, 310, 101, 31));
        label_6->setFont(font3);
        label_6->setStyleSheet(QStringLiteral("color:white;"));
        label_7 = new QLabel(nextQuestion);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(440, 420, 161, 20));
        label_7->setFont(font3);
        label_7->setStyleSheet(QStringLiteral("color:white;"));
        correct = new QComboBox(nextQuestion);
        correct->setObjectName(QStringLiteral("correct"));
        correct->setGeometry(QRect(620, 410, 151, 31));
        correct->setFont(font3);
        correct->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        optionA = new QLineEdit(nextQuestion);
        optionA->setObjectName(QStringLiteral("optionA"));
        optionA->setGeometry(QRect(430, 250, 181, 41));
        QFont font4;
        font4.setPointSize(12);
        optionA->setFont(font4);
        optionC = new QLineEdit(nextQuestion);
        optionC->setObjectName(QStringLiteral("optionC"));
        optionC->setGeometry(QRect(430, 340, 181, 41));
        optionC->setFont(font4);
        optionB = new QLineEdit(nextQuestion);
        optionB->setObjectName(QStringLiteral("optionB"));
        optionB->setGeometry(QRect(660, 250, 181, 41));
        optionB->setFont(font4);
        optionD = new QLineEdit(nextQuestion);
        optionD->setObjectName(QStringLiteral("optionD"));
        optionD->setGeometry(QRect(660, 340, 181, 41));
        optionD->setFont(font4);
        statementEdit = new QLineEdit(nextQuestion);
        statementEdit->setObjectName(QStringLiteral("statementEdit"));
        statementEdit->setGeometry(QRect(430, 150, 611, 61));
        statementEdit->setFont(font4);
        addButton = new QPushButton(nextQuestion);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(470, 480, 101, 41));
        addButton->setFont(font3);
        addButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        nextbutton = new QPushButton(nextQuestion);
        nextbutton->setObjectName(QStringLiteral("nextbutton"));
        nextbutton->setGeometry(QRect(610, 480, 101, 41));
        nextbutton->setFont(font3);
        nextbutton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        cancelButton = new QPushButton(nextQuestion);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(750, 480, 111, 41));
        cancelButton->setFont(font3);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        qNoLabel = new QLabel(nextQuestion);
        qNoLabel->setObjectName(QStringLiteral("qNoLabel"));
        qNoLabel->setGeometry(QRect(750, 40, 101, 41));
        qNoLabel->setFont(font2);
        qNoLabel->setStyleSheet(QStringLiteral("color:white;"));
        msgLabel = new QLabel(nextQuestion);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setGeometry(QRect(440, 540, 421, 41));
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
        msgLabel->setFont(font3);
        msgLabel->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(nextQuestion);
        QObject::connect(addButton, SIGNAL(clicked()), nextQuestion, SLOT(addClicked()));
        QObject::connect(cancelButton, SIGNAL(clicked()), nextQuestion, SLOT(cancelClicked()));
        QObject::connect(nextbutton, SIGNAL(clicked()), nextQuestion, SLOT(nextClicked()));

        QMetaObject::connectSlotsByName(nextQuestion);
    } // setupUi

    void retranslateUi(QWidget *nextQuestion)
    {
        nextQuestion->setWindowTitle(QApplication::translate("nextQuestion", "nextQuestion", 0));
        label->setText(QApplication::translate("nextQuestion", "Statement", 0));
        label_2->setText(QApplication::translate("nextQuestion", "Question No: ", 0));
        label_3->setText(QApplication::translate("nextQuestion", "Option A", 0));
        label_4->setText(QApplication::translate("nextQuestion", "Option B", 0));
        label_5->setText(QApplication::translate("nextQuestion", "Option C", 0));
        label_6->setText(QApplication::translate("nextQuestion", "Option D", 0));
        label_7->setText(QApplication::translate("nextQuestion", "Correct Option", 0));
        correct->clear();
        correct->insertItems(0, QStringList()
         << QApplication::translate("nextQuestion", "Option A", 0)
         << QApplication::translate("nextQuestion", "Option B", 0)
         << QApplication::translate("nextQuestion", "Option C", 0)
         << QApplication::translate("nextQuestion", "Option D", 0)
        );
        addButton->setText(QApplication::translate("nextQuestion", "ADD", 0));
        nextbutton->setText(QApplication::translate("nextQuestion", "NEXT", 0));
        cancelButton->setText(QApplication::translate("nextQuestion", "CANCEL", 0));
        qNoLabel->setText(QString());
        msgLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class nextQuestion: public Ui_nextQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXTQUESTION_H
