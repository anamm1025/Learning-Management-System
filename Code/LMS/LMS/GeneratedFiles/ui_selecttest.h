/********************************************************************************
** Form generated from reading UI file 'selecttest.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTTEST_H
#define UI_SELECTTEST_H

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

class Ui_selectTest
{
public:
    QTreeWidget *treeWidget;
    QPushButton *dropButton;
    QPushButton *backButton;
    QLabel *msgLabel;
    QLabel *label;

    void setupUi(QWidget *selectTest)
    {
        if (selectTest->objectName().isEmpty())
            selectTest->setObjectName(QStringLiteral("selectTest"));
        selectTest->resize(1119, 705);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        selectTest->setFont(font);
        treeWidget = new QTreeWidget(selectTest);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(220, 150, 681, 351));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        treeWidget->setFont(font1);
        dropButton = new QPushButton(selectTest);
        dropButton->setObjectName(QStringLiteral("dropButton"));
        dropButton->setGeometry(QRect(390, 550, 131, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        dropButton->setFont(font2);
        dropButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        backButton = new QPushButton(selectTest);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(600, 550, 121, 41));
        backButton->setFont(font2);
        backButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        msgLabel = new QLabel(selectTest);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setGeometry(QRect(330, 630, 481, 51));
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
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(14);
        msgLabel->setFont(font3);
        msgLabel->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(selectTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 50, 451, 71));
        QFont font4;
        font4.setFamily(QStringLiteral("Colonna MT"));
        font4.setPointSize(28);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        label->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(selectTest);
        QObject::connect(dropButton, SIGNAL(clicked()), selectTest, SLOT(dropClicked()));
        QObject::connect(backButton, SIGNAL(clicked()), selectTest, SLOT(backClicked()));

        QMetaObject::connectSlotsByName(selectTest);
    } // setupUi

    void retranslateUi(QWidget *selectTest)
    {
        selectTest->setWindowTitle(QApplication::translate("selectTest", "selectTest", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("selectTest", "No Of Question", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("selectTest", "Test Topic", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("selectTest", "Test Name", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("selectTest", "Course Name", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("selectTest", "Course Code", 0));
        dropButton->setText(QApplication::translate("selectTest", "DROP", 0));
        backButton->setText(QApplication::translate("selectTest", "BACK", 0));
        msgLabel->setText(QString());
        label->setText(QApplication::translate("selectTest", "   SELECT TEST TO DROP", 0));
    } // retranslateUi

};

namespace Ui {
    class selectTest: public Ui_selectTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTTEST_H
