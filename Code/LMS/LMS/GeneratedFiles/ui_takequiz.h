/********************************************************************************
** Form generated from reading UI file 'takequiz.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKEQUIZ_H
#define UI_TAKEQUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_takeQuiz
{
public:
    QTreeWidget *treeWidget;
    QLabel *msgLabel;
    QPushButton *selectButton;
    QPushButton *cancelButton;
    QLabel *label;

    void setupUi(QWidget *takeQuiz)
    {
        if (takeQuiz->objectName().isEmpty())
            takeQuiz->setObjectName(QStringLiteral("takeQuiz"));
        takeQuiz->resize(1145, 673);
        treeWidget = new QTreeWidget(takeQuiz);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(220, 120, 761, 371));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        treeWidget->setFont(font);
        msgLabel = new QLabel(takeQuiz);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setGeometry(QRect(310, 600, 451, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        msgLabel->setFont(font1);
        msgLabel->setStyleSheet(QStringLiteral("color:white;"));
        selectButton = new QPushButton(takeQuiz);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(360, 520, 151, 51));
        selectButton->setFont(font1);
        selectButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        cancelButton = new QPushButton(takeQuiz);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(540, 520, 141, 51));
        cancelButton->setFont(font1);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        label = new QLabel(takeQuiz);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 40, 501, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Colonna MT"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(takeQuiz);
        QObject::connect(cancelButton, SIGNAL(clicked()), takeQuiz, SLOT(CancelButtonClicked()));
        QObject::connect(selectButton, SIGNAL(clicked()), takeQuiz, SLOT(SelectButtonClicked()));

        QMetaObject::connectSlotsByName(takeQuiz);
    } // setupUi

    void retranslateUi(QWidget *takeQuiz)
    {
        takeQuiz->setWindowTitle(QApplication::translate("takeQuiz", "takeQuiz", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("takeQuiz", "No of Questions", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("takeQuiz", "Test Topic", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("takeQuiz", "Test Name", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("takeQuiz", "Course Name", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("takeQuiz", "Course Code", 0));
        msgLabel->setText(QString());
        selectButton->setText(QApplication::translate("takeQuiz", "SELECT", 0));
        cancelButton->setText(QApplication::translate("takeQuiz", "CANCEL", 0));
        label->setText(QApplication::translate("takeQuiz", "SELECT TEST TO TAKE QUIZ", 0));
    } // retranslateUi

};

namespace Ui {
    class takeQuiz: public Ui_takeQuiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKEQUIZ_H
