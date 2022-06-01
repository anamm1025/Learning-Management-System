/********************************************************************************
** Form generated from reading UI file 'addcourse.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOURSE_H
#define UI_ADDCOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addCourse
{
public:
    QLineEdit *courseNameEdit;
    QLabel *courseNameLabel;
    QPushButton *addCourseButton;
    QLabel *msgLabel;
    QPushButton *cancelButton;
    QLineEdit *courseCodeEdit;
    QLabel *courseCodeLabel;
    QLabel *label;

    void setupUi(QWidget *addCourse)
    {
        if (addCourse->objectName().isEmpty())
            addCourse->setObjectName(QStringLiteral("addCourse"));
        addCourse->resize(1146, 723);
        addCourse->setStyleSheet(QLatin1String("text-align:justify;\n"
"border-image: initial;"));
        courseNameEdit = new QLineEdit(addCourse);
        courseNameEdit->setObjectName(QStringLiteral("courseNameEdit"));
        courseNameEdit->setGeometry(QRect(190, 200, 201, 51));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        courseNameEdit->setFont(font);
        courseNameEdit->setStyleSheet(QStringLiteral("color:black;"));
        courseNameLabel = new QLabel(addCourse);
        courseNameLabel->setObjectName(QStringLiteral("courseNameLabel"));
        courseNameLabel->setGeometry(QRect(200, 150, 191, 31));
        courseNameLabel->setFont(font);
        courseNameLabel->setStyleSheet(QStringLiteral("color:white;"));
        addCourseButton = new QPushButton(addCourse);
        addCourseButton->setObjectName(QStringLiteral("addCourseButton"));
        addCourseButton->setGeometry(QRect(260, 320, 171, 61));
        addCourseButton->setFont(font);
        addCourseButton->setStyleSheet(QLatin1String("border-image:none;\n"
"background-color:black;\n"
"border:3px solid white;\n"
"color:white;"));
        msgLabel = new QLabel(addCourse);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setGeometry(QRect(240, 459, 451, 51));
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
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        msgLabel->setFont(font1);
        msgLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        msgLabel->setStyleSheet(QStringLiteral("color:white;"));
        cancelButton = new QPushButton(addCourse);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(490, 320, 181, 61));
        cancelButton->setFont(font);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"background-color:black;\n"
"border:3px solid white;\n"
"color:white;"));
        courseCodeEdit = new QLineEdit(addCourse);
        courseCodeEdit->setObjectName(QStringLiteral("courseCodeEdit"));
        courseCodeEdit->setGeometry(QRect(500, 200, 221, 51));
        courseCodeEdit->setFont(font);
        courseCodeEdit->setStyleSheet(QStringLiteral("color:black;"));
        courseCodeLabel = new QLabel(addCourse);
        courseCodeLabel->setObjectName(QStringLiteral("courseCodeLabel"));
        courseCodeLabel->setGeometry(QRect(510, 160, 201, 21));
        courseCodeLabel->setFont(font);
        courseCodeLabel->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(addCourse);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 80, 391, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Colonna MT"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(addCourse);
        QObject::connect(cancelButton, SIGNAL(clicked()), addCourse, SLOT(cancelClicked()));
        QObject::connect(addCourseButton, SIGNAL(clicked()), addCourse, SLOT(addCourseClicked()));

        QMetaObject::connectSlotsByName(addCourse);
    } // setupUi

    void retranslateUi(QWidget *addCourse)
    {
        addCourse->setWindowTitle(QApplication::translate("addCourse", "addCourse", 0));
        courseNameEdit->setText(QString());
        courseNameLabel->setText(QApplication::translate("addCourse", "Enter Course Name", 0));
        addCourseButton->setText(QApplication::translate("addCourse", "ADD COURSE", 0));
        msgLabel->setText(QString());
        cancelButton->setText(QApplication::translate("addCourse", "BACK", 0));
        courseCodeEdit->setText(QString());
        courseCodeLabel->setText(QApplication::translate("addCourse", "Enter Course Code", 0));
        label->setText(QApplication::translate("addCourse", "          ADD COURSE", 0));
    } // retranslateUi

};

namespace Ui {
    class addCourse: public Ui_addCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOURSE_H
