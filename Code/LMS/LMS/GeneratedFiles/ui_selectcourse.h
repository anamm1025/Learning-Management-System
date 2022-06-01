/********************************************************************************
** Form generated from reading UI file 'selectcourse.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCOURSE_H
#define UI_SELECTCOURSE_H

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

class Ui_selectCourse
{
public:
    QTreeWidget *coursePanel;
    QPushButton *cancelButton;
    QPushButton *selectButton;
    QLabel *errorLabel;
    QLabel *label;

    void setupUi(QWidget *selectCourse)
    {
        if (selectCourse->objectName().isEmpty())
            selectCourse->setObjectName(QStringLiteral("selectCourse"));
        selectCourse->resize(1099, 670);
        coursePanel = new QTreeWidget(selectCourse);
        coursePanel->setObjectName(QStringLiteral("coursePanel"));
        coursePanel->setEnabled(true);
        coursePanel->setGeometry(QRect(330, 145, 641, 341));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        coursePanel->setFont(font);
        coursePanel->setFocusPolicy(Qt::StrongFocus);
        coursePanel->setAcceptDrops(false);
        coursePanel->setFrameShape(QFrame::HLine);
        coursePanel->setFrameShadow(QFrame::Sunken);
        coursePanel->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        coursePanel->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        coursePanel->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        coursePanel->setAutoScrollMargin(14);
        coursePanel->header()->setHighlightSections(true);
        cancelButton = new QPushButton(selectCourse);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(710, 540, 141, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        cancelButton->setFont(font1);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        selectButton = new QPushButton(selectCourse);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(520, 540, 121, 51));
        selectButton->setFont(font1);
        selectButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        errorLabel = new QLabel(selectCourse);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(440, 620, 451, 41));
        errorLabel->setFont(font1);
        errorLabel->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(selectCourse);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 40, 391, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Colonna MT"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(selectCourse);
        QObject::connect(selectButton, SIGNAL(clicked()), selectCourse, SLOT(selectCourseClicked()));
        QObject::connect(cancelButton, SIGNAL(clicked()), selectCourse, SLOT(cancelButtonClicked()));

        QMetaObject::connectSlotsByName(selectCourse);
    } // setupUi

    void retranslateUi(QWidget *selectCourse)
    {
        selectCourse->setWindowTitle(QApplication::translate("selectCourse", "selectCourse", 0));
        QTreeWidgetItem *___qtreewidgetitem = coursePanel->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("selectCourse", "Course Name", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("selectCourse", "Course Code", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("selectCourse", "ID", 0));
        cancelButton->setText(QApplication::translate("selectCourse", "CANCEL", 0));
        selectButton->setText(QApplication::translate("selectCourse", "SELECT", 0));
        errorLabel->setText(QString());
        label->setText(QApplication::translate("selectCourse", "   SELECT COURSE", 0));
    } // retranslateUi

};

namespace Ui {
    class selectCourse: public Ui_selectCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCOURSE_H
