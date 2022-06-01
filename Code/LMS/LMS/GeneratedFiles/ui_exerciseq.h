/********************************************************************************
** Form generated from reading UI file 'exerciseq.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERCISEQ_H
#define UI_EXERCISEQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exerciseQ
{
public:
    QLabel *label;
    QLabel *qLabel;
    QLabel *aLabel;
    QPushButton *nextButton;
    QPushButton *cancelButton;
    QPushButton *backButton;
    QLabel *msg;
    QLabel *qNo;
    QLabel *label_2;

    void setupUi(QWidget *exerciseQ)
    {
        if (exerciseQ->objectName().isEmpty())
            exerciseQ->setObjectName(QStringLiteral("exerciseQ"));
        exerciseQ->resize(1211, 672);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        exerciseQ->setFont(font);
        label = new QLabel(exerciseQ);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 50, 301, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(28);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white;"));
        qLabel = new QLabel(exerciseQ);
        qLabel->setObjectName(QStringLiteral("qLabel"));
        qLabel->setGeometry(QRect(350, 90, 671, 111));
        QFont font2;
        font2.setPointSize(14);
        qLabel->setFont(font2);
        qLabel->setStyleSheet(QStringLiteral("color:white;"));
        qLabel->setWordWrap(true);
        aLabel = new QLabel(exerciseQ);
        aLabel->setObjectName(QStringLiteral("aLabel"));
        aLabel->setGeometry(QRect(410, 270, 631, 201));
        aLabel->setFont(font2);
        aLabel->setStyleSheet(QStringLiteral("color:white;"));
        aLabel->setWordWrap(true);
        nextButton = new QPushButton(exerciseQ);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(550, 510, 101, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        nextButton->setFont(font3);
        nextButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        cancelButton = new QPushButton(exerciseQ);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(690, 510, 111, 41));
        cancelButton->setFont(font3);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        backButton = new QPushButton(exerciseQ);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(420, 510, 111, 41));
        backButton->setFont(font3);
        backButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        msg = new QLabel(exerciseQ);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(430, 590, 511, 51));
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
        msg->setPalette(palette);
        msg->setFont(font3);
        msg->setStyleSheet(QStringLiteral("color:white;"));
        qNo = new QLabel(exerciseQ);
        qNo->setObjectName(QStringLiteral("qNo"));
        qNo->setGeometry(QRect(540, 50, 41, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Comic Sans MS"));
        font4.setPointSize(28);
        font4.setBold(true);
        font4.setWeight(75);
        qNo->setFont(font4);
        qNo->setStyleSheet(QStringLiteral("color:white;"));
        label_2 = new QLabel(exerciseQ);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 220, 131, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Comic Sans MS"));
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setWeight(75);
        label_2->setFont(font5);
        label_2->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(exerciseQ);
        QObject::connect(backButton, SIGNAL(clicked()), exerciseQ, SLOT(backClicked()));
        QObject::connect(cancelButton, SIGNAL(clicked()), exerciseQ, SLOT(cancelClicked()));
        QObject::connect(nextButton, SIGNAL(clicked()), exerciseQ, SLOT(nextClicked()));

        QMetaObject::connectSlotsByName(exerciseQ);
    } // setupUi

    void retranslateUi(QWidget *exerciseQ)
    {
        exerciseQ->setWindowTitle(QApplication::translate("exerciseQ", "exerciseQ", 0));
        label->setText(QApplication::translate("exerciseQ", "QUESTION NO:", 0));
        qLabel->setText(QString());
        aLabel->setText(QString());
        nextButton->setText(QApplication::translate("exerciseQ", "NEXT", 0));
        cancelButton->setText(QApplication::translate("exerciseQ", "CANCEL", 0));
        backButton->setText(QApplication::translate("exerciseQ", "BACK", 0));
        msg->setText(QString());
        qNo->setText(QString());
        label_2->setText(QApplication::translate("exerciseQ", "ANSWER:", 0));
    } // retranslateUi

};

namespace Ui {
    class exerciseQ: public Ui_exerciseQ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCISEQ_H
