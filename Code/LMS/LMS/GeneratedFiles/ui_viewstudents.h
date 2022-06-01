/********************************************************************************
** Form generated from reading UI file 'viewstudents.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSTUDENTS_H
#define UI_VIEWSTUDENTS_H

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

class Ui_viewStudents
{
public:
    QPushButton *pushButton;
    QLabel *errorLabel2;
    QTreeWidget *treeWidget;
    QPushButton *DeleteButton;
    QLabel *errorLabel;
    QLabel *label;

    void setupUi(QWidget *viewStudents)
    {
        if (viewStudents->objectName().isEmpty())
            viewStudents->setObjectName(QStringLiteral("viewStudents"));
        viewStudents->resize(1204, 756);
        pushButton = new QPushButton(viewStudents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(760, 580, 101, 61));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        errorLabel2 = new QLabel(viewStudents);
        errorLabel2->setObjectName(QStringLiteral("errorLabel2"));
        errorLabel2->setGeometry(QRect(360, 270, 331, 81));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        errorLabel2->setPalette(palette);
        errorLabel2->setFont(font);
        errorLabel2->setTextFormat(Qt::RichText);
        treeWidget = new QTreeWidget(viewStudents);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(190, 120, 721, 411));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        treeWidget->setFont(font1);
        DeleteButton = new QPushButton(viewStudents);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setGeometry(QRect(550, 580, 191, 61));
        DeleteButton->setFont(font);
        DeleteButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        errorLabel = new QLabel(viewStudents);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(280, 660, 331, 81));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        errorLabel->setPalette(palette1);
        errorLabel->setFont(font);
        errorLabel->setStyleSheet(QStringLiteral("color:white;"));
        errorLabel->setTextFormat(Qt::RichText);
        label = new QLabel(viewStudents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 40, 501, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Colonna MT"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(viewStudents);
        QObject::connect(pushButton, SIGNAL(clicked()), viewStudents, SLOT(CancelButton()));
        QObject::connect(DeleteButton, SIGNAL(clicked()), viewStudents, SLOT(DropStudentClicked()));

        QMetaObject::connectSlotsByName(viewStudents);
    } // setupUi

    void retranslateUi(QWidget *viewStudents)
    {
        viewStudents->setWindowTitle(QApplication::translate("viewStudents", "viewStudents", 0));
        pushButton->setText(QApplication::translate("viewStudents", "CANCEL", 0));
        errorLabel2->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("viewStudents", "Contact", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("viewStudents", "Email", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("viewStudents", "Gender", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("viewStudents", "DOB", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("viewStudents", "Last Name", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("viewStudents", "First Name", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("viewStudents", "Username", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("viewStudents", "ID", 0));
        DeleteButton->setText(QApplication::translate("viewStudents", "DROP STUDENT", 0));
        errorLabel->setText(QString());
        label->setText(QApplication::translate("viewStudents", "STUDENTS IN THE SYSTEM", 0));
    } // retranslateUi

};

namespace Ui {
    class viewStudents: public Ui_viewStudents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSTUDENTS_H
