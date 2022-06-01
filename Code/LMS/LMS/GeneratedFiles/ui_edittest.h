/********************************************************************************
** Form generated from reading UI file 'edittest.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTEST_H
#define UI_EDITTEST_H

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

class Ui_editTest
{
public:
    QTreeWidget *treeWidget;
    QPushButton *selectButton;
    QPushButton *cancelButton;
    QLabel *msgLabel;
    QLabel *label;

    void setupUi(QWidget *editTest)
    {
        if (editTest->objectName().isEmpty())
            editTest->setObjectName(QStringLiteral("editTest"));
        editTest->resize(1097, 717);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        editTest->setFont(font);
        treeWidget = new QTreeWidget(editTest);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(350, 140, 631, 381));
        treeWidget->setFont(font);
        selectButton = new QPushButton(editTest);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(490, 550, 121, 51));
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
        cancelButton = new QPushButton(editTest);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(690, 550, 121, 51));
        cancelButton->setFont(font1);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        msgLabel = new QLabel(editTest);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setGeometry(QRect(400, 630, 451, 51));
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
        msgLabel->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(editTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 60, 471, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Colonna MT"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(editTest);
        QObject::connect(selectButton, SIGNAL(clicked()), editTest, SLOT(selectClicked()));
        QObject::connect(cancelButton, SIGNAL(clicked()), editTest, SLOT(cancelClicked()));

        QMetaObject::connectSlotsByName(editTest);
    } // setupUi

    void retranslateUi(QWidget *editTest)
    {
        editTest->setWindowTitle(QApplication::translate("editTest", "editTest", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("editTest", "No of Questions", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("editTest", "Test Topic", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("editTest", "Test Name", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("editTest", "Course Name", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("editTest", "Course Code", 0));
        selectButton->setText(QApplication::translate("editTest", "SELECT", 0));
        cancelButton->setText(QApplication::translate("editTest", "CANCEL", 0));
        msgLabel->setText(QString());
        label->setText(QApplication::translate("editTest", "   SELECT TEST TO EDIT", 0));
    } // retranslateUi

};

namespace Ui {
    class editTest: public Ui_editTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTEST_H
