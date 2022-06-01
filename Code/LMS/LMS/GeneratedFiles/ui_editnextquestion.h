/********************************************************************************
** Form generated from reading UI file 'editnextquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITNEXTQUESTION_H
#define UI_EDITNEXTQUESTION_H

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

class Ui_editNextQuestion
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *statementEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *optionA;
    QLineEdit *optionB;
    QLineEdit *optionC;
    QLineEdit *optionD;
    QComboBox *correct;
    QLabel *msgLabel;
    QPushButton *editButton;
    QPushButton *nextButton;
    QPushButton *cancelButton;
    QPushButton *deleteButton;
    QPushButton *backButton;
    QLabel *qNo;

    void setupUi(QWidget *editNextQuestion)
    {
        if (editNextQuestion->objectName().isEmpty())
            editNextQuestion->setObjectName(QStringLiteral("editNextQuestion"));
        editNextQuestion->resize(925, 703);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        editNextQuestion->setFont(font);
        label = new QLabel(editNextQuestion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 50, 211, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Colonna MT"));
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label_2 = new QLabel(editNextQuestion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 130, 201, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color:white;"));
        statementEdit = new QLineEdit(editNextQuestion);
        statementEdit->setObjectName(QStringLiteral("statementEdit"));
        statementEdit->setGeometry(QRect(370, 180, 571, 61));
        QFont font3;
        font3.setPointSize(12);
        statementEdit->setFont(font3);
        label_3 = new QLabel(editNextQuestion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(420, 260, 131, 16));
        QFont font4;
        font4.setFamily(QStringLiteral("Comic Sans MS"));
        font4.setPointSize(13);
        font4.setBold(true);
        font4.setWeight(75);
        label_3->setFont(font4);
        label_3->setStyleSheet(QStringLiteral("color:white;"));
        label_4 = new QLabel(editNextQuestion);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(610, 260, 121, 16));
        label_4->setFont(font4);
        label_4->setStyleSheet(QStringLiteral("color:white;"));
        label_5 = new QLabel(editNextQuestion);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(420, 330, 121, 16));
        label_5->setFont(font4);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        label_6 = new QLabel(editNextQuestion);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(620, 330, 141, 16));
        label_6->setFont(font4);
        label_6->setStyleSheet(QStringLiteral("color:white;"));
        label_7 = new QLabel(editNextQuestion);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(380, 420, 191, 20));
        label_7->setFont(font2);
        label_7->setStyleSheet(QStringLiteral("color:white;"));
        optionA = new QLineEdit(editNextQuestion);
        optionA->setObjectName(QStringLiteral("optionA"));
        optionA->setGeometry(QRect(420, 280, 141, 31));
        optionA->setFont(font3);
        optionB = new QLineEdit(editNextQuestion);
        optionB->setObjectName(QStringLiteral("optionB"));
        optionB->setGeometry(QRect(610, 280, 131, 31));
        optionB->setFont(font3);
        optionC = new QLineEdit(editNextQuestion);
        optionC->setObjectName(QStringLiteral("optionC"));
        optionC->setGeometry(QRect(420, 350, 141, 31));
        optionC->setFont(font3);
        optionD = new QLineEdit(editNextQuestion);
        optionD->setObjectName(QStringLiteral("optionD"));
        optionD->setGeometry(QRect(610, 350, 131, 31));
        optionD->setFont(font3);
        correct = new QComboBox(editNextQuestion);
        correct->setObjectName(QStringLiteral("correct"));
        correct->setGeometry(QRect(600, 420, 141, 41));
        correct->setFont(font2);
        correct->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        msgLabel = new QLabel(editNextQuestion);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setGeometry(QRect(360, 600, 421, 51));
        QFont font5;
        font5.setPointSize(14);
        msgLabel->setFont(font5);
        msgLabel->setStyleSheet(QStringLiteral("color:white;"));
        editButton = new QPushButton(editNextQuestion);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(450, 480, 101, 71));
        editButton->setFont(font2);
        editButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        nextButton = new QPushButton(editNextQuestion);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(570, 480, 101, 71));
        nextButton->setFont(font2);
        nextButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        cancelButton = new QPushButton(editNextQuestion);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(820, 480, 91, 71));
        cancelButton->setFont(font2);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        deleteButton = new QPushButton(editNextQuestion);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(220, 480, 211, 71));
        deleteButton->setFont(font2);
        deleteButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        backButton = new QPushButton(editNextQuestion);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(700, 480, 91, 71));
        backButton->setFont(font2);
        backButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        qNo = new QLabel(editNextQuestion);
        qNo->setObjectName(QStringLiteral("qNo"));
        qNo->setGeometry(QRect(540, 50, 71, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Colonna MT"));
        font6.setPointSize(28);
        qNo->setFont(font6);
        qNo->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(editNextQuestion);
        QObject::connect(deleteButton, SIGNAL(clicked()), editNextQuestion, SLOT(deleteClicked()));
        QObject::connect(editButton, SIGNAL(clicked()), editNextQuestion, SLOT(editClicked()));
        QObject::connect(nextButton, SIGNAL(clicked()), editNextQuestion, SLOT(nextClicked()));
        QObject::connect(backButton, SIGNAL(clicked()), editNextQuestion, SLOT(backClicked()));
        QObject::connect(cancelButton, SIGNAL(clicked()), editNextQuestion, SLOT(cancelClicked()));

        QMetaObject::connectSlotsByName(editNextQuestion);
    } // setupUi

    void retranslateUi(QWidget *editNextQuestion)
    {
        editNextQuestion->setWindowTitle(QApplication::translate("editNextQuestion", "editNextQuestion", 0));
        label->setText(QApplication::translate("editNextQuestion", "Question No", 0));
        label_2->setText(QApplication::translate("editNextQuestion", "Edit Statement", 0));
        label_3->setText(QApplication::translate("editNextQuestion", "Edit Option A ", 0));
        label_4->setText(QApplication::translate("editNextQuestion", "Edit Option B", 0));
        label_5->setText(QApplication::translate("editNextQuestion", "Edit Option C", 0));
        label_6->setText(QApplication::translate("editNextQuestion", "Edit Option D", 0));
        label_7->setText(QApplication::translate("editNextQuestion", "Edit Correct Option", 0));
        correct->clear();
        correct->insertItems(0, QStringList()
         << QApplication::translate("editNextQuestion", "Option A", 0)
         << QApplication::translate("editNextQuestion", "Option B", 0)
         << QApplication::translate("editNextQuestion", "Option C", 0)
         << QApplication::translate("editNextQuestion", "Option D", 0)
        );
        msgLabel->setText(QString());
        editButton->setText(QApplication::translate("editNextQuestion", "EDIT", 0));
        nextButton->setText(QApplication::translate("editNextQuestion", "NEXT", 0));
        cancelButton->setText(QApplication::translate("editNextQuestion", "CANCEL", 0));
        deleteButton->setText(QApplication::translate("editNextQuestion", "DELETE THIS\n"
"QUESTION", 0));
        backButton->setText(QApplication::translate("editNextQuestion", "BACK", 0));
        qNo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editNextQuestion: public Ui_editNextQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITNEXTQUESTION_H
