/********************************************************************************
** Form generated from reading UI file 'viewpreviousresults.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPREVIOUSRESULTS_H
#define UI_VIEWPREVIOUSRESULTS_H

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

class Ui_viewPreviousResults
{
public:
    QTreeWidget *treeWidget;
    QLabel *username;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *viewPreviousResults)
    {
        if (viewPreviousResults->objectName().isEmpty())
            viewPreviousResults->setObjectName(QStringLiteral("viewPreviousResults"));
        viewPreviousResults->resize(1234, 653);
        treeWidget = new QTreeWidget(viewPreviousResults);
        treeWidget->headerItem()->setText(5, QString());
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(300, 140, 571, 411));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        treeWidget->setFont(font);
        username = new QLabel(viewPreviousResults);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(40, 30, 141, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        username->setFont(font1);
        username->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(viewPreviousResults);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 40, 401, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Colonna MT"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:white;"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(viewPreviousResults);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(760, 590, 121, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));

        retranslateUi(viewPreviousResults);
        QObject::connect(pushButton, SIGNAL(clicked()), viewPreviousResults, SLOT(BackButtonClicked()));

        QMetaObject::connectSlotsByName(viewPreviousResults);
    } // setupUi

    void retranslateUi(QWidget *viewPreviousResults)
    {
        viewPreviousResults->setWindowTitle(QApplication::translate("viewPreviousResults", "viewPreviousResults", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("viewPreviousResults", "Wrong Answers", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("viewPreviousResults", "Correct Answers", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("viewPreviousResults", "Course Code", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("viewPreviousResults", "Test Name", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("viewPreviousResults", "ID", 0));
        username->setText(QString());
        label->setText(QApplication::translate("viewPreviousResults", "PREVIOUS RESULTS:", 0));
        pushButton->setText(QApplication::translate("viewPreviousResults", "BACK", 0));
    } // retranslateUi

};

namespace Ui {
    class viewPreviousResults: public Ui_viewPreviousResults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPREVIOUSRESULTS_H
