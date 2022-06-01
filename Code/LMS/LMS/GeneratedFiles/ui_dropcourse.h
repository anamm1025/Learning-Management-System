/********************************************************************************
** Form generated from reading UI file 'dropcourse.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DROPCOURSE_H
#define UI_DROPCOURSE_H

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

class Ui_dropCourse
{
public:
    QTreeWidget *coursePanel;
    QPushButton *dropButton;
    QPushButton *cancelButton;
    QLabel *msgLabel;
    QLabel *label;

    void setupUi(QWidget *dropCourse)
    {
        if (dropCourse->objectName().isEmpty())
            dropCourse->setObjectName(QStringLiteral("dropCourse"));
        dropCourse->resize(898, 594);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        dropCourse->setFont(font);
        coursePanel = new QTreeWidget(dropCourse);
        coursePanel->setObjectName(QStringLiteral("coursePanel"));
        coursePanel->setGeometry(QRect(190, 130, 571, 231));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        coursePanel->setFont(font1);
        coursePanel->setStyleSheet(QStringLiteral("color:black;"));
        dropButton = new QPushButton(dropCourse);
        dropButton->setObjectName(QStringLiteral("dropButton"));
        dropButton->setGeometry(QRect(340, 430, 141, 51));
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
        cancelButton = new QPushButton(dropCourse);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(550, 430, 141, 51));
        cancelButton->setFont(font2);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        msgLabel = new QLabel(dropCourse);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setGeometry(QRect(280, 540, 431, 41));
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
        font3.setPointSize(14);
        msgLabel->setFont(font3);
        msgLabel->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(dropCourse);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 60, 501, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Colonna MT"));
        font4.setPointSize(28);
        label->setFont(font4);
        label->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(dropCourse);
        QObject::connect(dropButton, SIGNAL(clicked()), dropCourse, SLOT(DropButtonClicked()));
        QObject::connect(cancelButton, SIGNAL(clicked()), dropCourse, SLOT(CancelButtonClicked()));

        QMetaObject::connectSlotsByName(dropCourse);
    } // setupUi

    void retranslateUi(QWidget *dropCourse)
    {
        dropCourse->setWindowTitle(QApplication::translate("dropCourse", "dropCourse", 0));
        QTreeWidgetItem *___qtreewidgetitem = coursePanel->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("dropCourse", "Course Name", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("dropCourse", "Course Code", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("dropCourse", "ID", 0));
        dropButton->setText(QApplication::translate("dropCourse", "DROP", 0));
        cancelButton->setText(QApplication::translate("dropCourse", "CANCEL", 0));
        msgLabel->setText(QString());
        label->setText(QApplication::translate("dropCourse", "     SELECT COURSE TO DROP", 0));
    } // retranslateUi

};

namespace Ui {
    class dropCourse: public Ui_dropCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DROPCOURSE_H
