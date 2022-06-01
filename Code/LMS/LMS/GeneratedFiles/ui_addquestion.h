/********************************************************************************
** Form generated from reading UI file 'addquestion.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDQUESTION_H
#define UI_ADDQUESTION_H

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

class Ui_addQuestion
{
public:
    QTreeWidget *treeWidget;
    QPushButton *selectButton;
    QPushButton *cancelButton;
    QLabel *msgLabel;
    QLabel *label;

    void setupUi(QWidget *addQuestion)
    {
        if (addQuestion->objectName().isEmpty())
            addQuestion->setObjectName(QStringLiteral("addQuestion"));
        addQuestion->resize(951, 627);
        addQuestion->setStyleSheet(QStringLiteral(""));
        treeWidget = new QTreeWidget(addQuestion);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(140, 110, 781, 321));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        treeWidget->setFont(font);
        treeWidget->setStyleSheet(QLatin1String("border-image:none;\n"
"color:black;\n"
"\n"
""));
        selectButton = new QPushButton(addQuestion);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(320, 460, 141, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        selectButton->setFont(font1);
        selectButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        cancelButton = new QPushButton(addQuestion);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(560, 460, 141, 51));
        cancelButton->setFont(font1);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        msgLabel = new QLabel(addQuestion);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setGeometry(QRect(270, 540, 501, 71));
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
        msgLabel->setFont(font1);
        msgLabel->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;"));
        label = new QLabel(addQuestion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 60, 631, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Colonna MT"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"\n"
""));

        retranslateUi(addQuestion);
        QObject::connect(selectButton, SIGNAL(clicked()), addQuestion, SLOT(selectClicked()));
        QObject::connect(cancelButton, SIGNAL(clicked()), addQuestion, SLOT(cancelClicked()));

        QMetaObject::connectSlotsByName(addQuestion);
    } // setupUi

    void retranslateUi(QWidget *addQuestion)
    {
        addQuestion->setWindowTitle(QApplication::translate("addQuestion", "addQuestion", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("addQuestion", "No Of Question", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("addQuestion", "Test Topic", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("addQuestion", "Test Name", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("addQuestion", "Course Name", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("addQuestion", "Course Code", 0));
        selectButton->setText(QApplication::translate("addQuestion", "SELECT", 0));
        cancelButton->setText(QApplication::translate("addQuestion", "CANCEL", 0));
        msgLabel->setText(QString());
        label->setText(QApplication::translate("addQuestion", "SELECT COURSE TO ADD QUESTION", 0));
    } // retranslateUi

};

namespace Ui {
    class addQuestion: public Ui_addQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDQUESTION_H
