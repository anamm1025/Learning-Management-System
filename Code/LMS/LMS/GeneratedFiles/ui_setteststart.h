/********************************************************************************
** Form generated from reading UI file 'setteststart.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTESTSTART_H
#define UI_SETTESTSTART_H

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

class Ui_setTestStart
{
public:
    QLineEdit *topicEdit;
    QLineEdit *testNameEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *uniqueNameLabel;
    QLineEdit *statementEdit;
    QLineEdit *OptionA;
    QLineEdit *optionB;
    QLineEdit *optionC;
    QLineEdit *optionD;
    QComboBox *correctOption;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *addButton;
    QPushButton *nextButton;
    QPushButton *cancelButton;
    QLabel *errorLabel;
    QLabel *label_3;

    void setupUi(QWidget *setTestStart)
    {
        if (setTestStart->objectName().isEmpty())
            setTestStart->setObjectName(QStringLiteral("setTestStart"));
        setTestStart->resize(1225, 636);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        setTestStart->setFont(font);
        topicEdit = new QLineEdit(setTestStart);
        topicEdit->setObjectName(QStringLiteral("topicEdit"));
        topicEdit->setGeometry(QRect(340, 60, 161, 41));
        QFont font1;
        font1.setPointSize(12);
        topicEdit->setFont(font1);
        testNameEdit = new QLineEdit(setTestStart);
        testNameEdit->setObjectName(QStringLiteral("testNameEdit"));
        testNameEdit->setGeometry(QRect(550, 60, 151, 41));
        testNameEdit->setFont(font1);
        label = new QLabel(setTestStart);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 25, 101, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label_2 = new QLabel(setTestStart);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(550, 30, 181, 16));
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color:white;"));
        uniqueNameLabel = new QLabel(setTestStart);
        uniqueNameLabel->setObjectName(QStringLiteral("uniqueNameLabel"));
        uniqueNameLabel->setGeometry(QRect(360, 110, 411, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(14);
        uniqueNameLabel->setFont(font3);
        uniqueNameLabel->setStyleSheet(QStringLiteral("color:white;"));
        statementEdit = new QLineEdit(setTestStart);
        statementEdit->setObjectName(QStringLiteral("statementEdit"));
        statementEdit->setGeometry(QRect(340, 220, 481, 71));
        statementEdit->setFont(font1);
        OptionA = new QLineEdit(setTestStart);
        OptionA->setObjectName(QStringLiteral("OptionA"));
        OptionA->setGeometry(QRect(360, 340, 171, 41));
        OptionA->setFont(font1);
        optionB = new QLineEdit(setTestStart);
        optionB->setObjectName(QStringLiteral("optionB"));
        optionB->setGeometry(QRect(570, 340, 181, 41));
        optionB->setFont(font1);
        optionC = new QLineEdit(setTestStart);
        optionC->setObjectName(QStringLiteral("optionC"));
        optionC->setGeometry(QRect(360, 410, 171, 41));
        optionC->setFont(font1);
        optionD = new QLineEdit(setTestStart);
        optionD->setObjectName(QStringLiteral("optionD"));
        optionD->setGeometry(QRect(570, 410, 181, 41));
        optionD->setFont(font1);
        correctOption = new QComboBox(setTestStart);
        correctOption->setObjectName(QStringLiteral("correctOption"));
        correctOption->setGeometry(QRect(530, 470, 121, 41));
        correctOption->setFont(font2);
        correctOption->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        label_4 = new QLabel(setTestStart);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 310, 111, 21));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color:white;"));
        label_5 = new QLabel(setTestStart);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(570, 315, 91, 21));
        label_5->setFont(font2);
        label_5->setStyleSheet(QStringLiteral("color:white;"));
        label_6 = new QLabel(setTestStart);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 385, 101, 21));
        label_6->setFont(font2);
        label_6->setStyleSheet(QStringLiteral("color:white;"));
        label_7 = new QLabel(setTestStart);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(570, 385, 81, 21));
        label_7->setFont(font2);
        label_7->setStyleSheet(QStringLiteral("color:white;"));
        label_8 = new QLabel(setTestStart);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(300, 480, 231, 31));
        label_8->setFont(font2);
        label_8->setStyleSheet(QStringLiteral("color:white;"));
        label_9 = new QLabel(setTestStart);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(350, 190, 171, 16));
        label_9->setFont(font2);
        label_9->setStyleSheet(QStringLiteral("color:white;"));
        addButton = new QPushButton(setTestStart);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(360, 550, 111, 41));
        addButton->setFont(font2);
        addButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        nextButton = new QPushButton(setTestStart);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(510, 550, 101, 41));
        nextButton->setFont(font2);
        nextButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        cancelButton = new QPushButton(setTestStart);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(660, 550, 111, 41));
        cancelButton->setFont(font2);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        errorLabel = new QLabel(setTestStart);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(250, 600, 591, 31));
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
        errorLabel->setPalette(palette);
        errorLabel->setFont(font3);
        errorLabel->setStyleSheet(QStringLiteral("color:white;"));
        label_3 = new QLabel(setTestStart);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(470, 150, 211, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Comic Sans MS"));
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        label_3->setFont(font4);
        label_3->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(setTestStart);
        QObject::connect(addButton, SIGNAL(clicked()), setTestStart, SLOT(addClicked()));
        QObject::connect(nextButton, SIGNAL(clicked()), setTestStart, SLOT(nextClicked()));
        QObject::connect(cancelButton, SIGNAL(clicked()), setTestStart, SLOT(cancelClicked()));

        QMetaObject::connectSlotsByName(setTestStart);
    } // setupUi

    void retranslateUi(QWidget *setTestStart)
    {
        setTestStart->setWindowTitle(QApplication::translate("setTestStart", "setTestStart", 0));
        label->setText(QApplication::translate("setTestStart", "Enter topic", 0));
        label_2->setText(QApplication::translate("setTestStart", "Enter Test Name", 0));
        uniqueNameLabel->setText(QString());
        correctOption->clear();
        correctOption->insertItems(0, QStringList()
         << QApplication::translate("setTestStart", "Option A", 0)
         << QApplication::translate("setTestStart", "Option B", 0)
         << QApplication::translate("setTestStart", "Option C", 0)
         << QApplication::translate("setTestStart", "Option D", 0)
        );
        label_4->setText(QApplication::translate("setTestStart", "Option A", 0));
        label_5->setText(QApplication::translate("setTestStart", "Option B", 0));
        label_6->setText(QApplication::translate("setTestStart", "Option C", 0));
        label_7->setText(QApplication::translate("setTestStart", "Option D", 0));
        label_8->setText(QApplication::translate("setTestStart", "Choose Correct Option", 0));
        label_9->setText(QApplication::translate("setTestStart", "Enter Statement", 0));
        addButton->setText(QApplication::translate("setTestStart", "ADD", 0));
        nextButton->setText(QApplication::translate("setTestStart", "NEXT", 0));
        cancelButton->setText(QApplication::translate("setTestStart", "CANCEL", 0));
        errorLabel->setText(QString());
        label_3->setText(QApplication::translate("setTestStart", "Question No 1", 0));
    } // retranslateUi

};

namespace Ui {
    class setTestStart: public Ui_setTestStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTESTSTART_H
