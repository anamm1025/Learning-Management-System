/********************************************************************************
** Form generated from reading UI file 'viewteachers.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWTEACHERS_H
#define UI_VIEWTEACHERS_H

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

class Ui_ViewTeachers
{
public:
    QTreeWidget *treeWidget;
    QPushButton *DeleteButton;
    QPushButton *pushButton;
    QLabel *errorLabel;
    QLabel *errorLabel2;
    QLabel *label;

    void setupUi(QWidget *ViewTeachers)
    {
        if (ViewTeachers->objectName().isEmpty())
            ViewTeachers->setObjectName(QStringLiteral("ViewTeachers"));
        ViewTeachers->resize(1273, 837);
        treeWidget = new QTreeWidget(ViewTeachers);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(290, 100, 721, 411));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        treeWidget->setFont(font);
        treeWidget->setStyleSheet(QStringLiteral(""));
        DeleteButton = new QPushButton(ViewTeachers);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setGeometry(QRect(590, 560, 251, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        DeleteButton->setFont(font1);
        DeleteButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        pushButton = new QPushButton(ViewTeachers);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(860, 560, 141, 61));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        errorLabel = new QLabel(ViewTeachers);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(360, 640, 521, 81));
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
        errorLabel->setFont(font1);
        errorLabel->setStyleSheet(QStringLiteral("color:white;"));
        errorLabel->setTextFormat(Qt::RichText);
        errorLabel2 = new QLabel(ViewTeachers);
        errorLabel2->setObjectName(QStringLiteral("errorLabel2"));
        errorLabel2->setGeometry(QRect(600, 720, 331, 81));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        errorLabel2->setPalette(palette1);
        errorLabel2->setFont(font1);
        errorLabel2->setStyleSheet(QStringLiteral("color:white;"));
        errorLabel2->setTextFormat(Qt::RichText);
        label = new QLabel(ViewTeachers);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 30, 471, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Colonna MT"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(ViewTeachers);
        QObject::connect(DeleteButton, SIGNAL(clicked()), ViewTeachers, SLOT(dropTeacherClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), ViewTeachers, SLOT(CancelbuttonClicked()));

        QMetaObject::connectSlotsByName(ViewTeachers);
    } // setupUi

    void retranslateUi(QWidget *ViewTeachers)
    {
        ViewTeachers->setWindowTitle(QApplication::translate("ViewTeachers", "ViewTeachers", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("ViewTeachers", "Contact", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("ViewTeachers", "Email", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("ViewTeachers", "Gender", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("ViewTeachers", "DOB", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("ViewTeachers", "Last Name", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("ViewTeachers", "First Name", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("ViewTeachers", "Username", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("ViewTeachers", "ID", 0));
        DeleteButton->setText(QApplication::translate("ViewTeachers", "DROP THE TEACHER", 0));
        pushButton->setText(QApplication::translate("ViewTeachers", "CANCEL", 0));
        errorLabel->setText(QString());
        errorLabel2->setText(QString());
        label->setText(QApplication::translate("ViewTeachers", "TEACHERS IN THE SYSTEM", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewTeachers: public Ui_ViewTeachers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWTEACHERS_H
