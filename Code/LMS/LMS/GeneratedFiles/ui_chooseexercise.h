/********************************************************************************
** Form generated from reading UI file 'chooseexercise.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEEXERCISE_H
#define UI_CHOOSEEXERCISE_H

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

class Ui_chooseExercise
{
public:
    QTreeWidget *coursePanel;
    QPushButton *selectButton;
    QPushButton *cancelButton;
    QLabel *errorLabel;
    QLabel *label;

    void setupUi(QWidget *chooseExercise)
    {
        if (chooseExercise->objectName().isEmpty())
            chooseExercise->setObjectName(QStringLiteral("chooseExercise"));
        chooseExercise->resize(936, 722);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        chooseExercise->setFont(font);
        coursePanel = new QTreeWidget(chooseExercise);
        coursePanel->setObjectName(QStringLiteral("coursePanel"));
        coursePanel->setGeometry(QRect(260, 110, 611, 421));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        coursePanel->setFont(font1);
        selectButton = new QPushButton(chooseExercise);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(440, 570, 141, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        selectButton->setFont(font2);
        selectButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        cancelButton = new QPushButton(chooseExercise);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(640, 570, 131, 51));
        cancelButton->setFont(font2);
        cancelButton->setStyleSheet(QLatin1String("border-image:none;\n"
"color:white;\n"
"background-color:inherit;\n"
"border:3px solid white;"));
        errorLabel = new QLabel(chooseExercise);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(360, 660, 491, 31));
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
        QFont font3;
        font3.setPointSize(14);
        errorLabel->setFont(font3);
        errorLabel->setStyleSheet(QStringLiteral("color:white;"));
        label = new QLabel(chooseExercise);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 40, 531, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Colonna MT"));
        font4.setPointSize(28);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        label->setStyleSheet(QStringLiteral("color:white;"));

        retranslateUi(chooseExercise);
        QObject::connect(selectButton, SIGNAL(clicked()), chooseExercise, SLOT(selectClicked()));
        QObject::connect(cancelButton, SIGNAL(clicked()), chooseExercise, SLOT(cancelClicked()));

        QMetaObject::connectSlotsByName(chooseExercise);
    } // setupUi

    void retranslateUi(QWidget *chooseExercise)
    {
        chooseExercise->setWindowTitle(QApplication::translate("chooseExercise", "chooseExercise", 0));
        QTreeWidgetItem *___qtreewidgetitem = coursePanel->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("chooseExercise", "No of Questions", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("chooseExercise", "Topic", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("chooseExercise", "course", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("chooseExercise", "ID", 0));
        selectButton->setText(QApplication::translate("chooseExercise", "SELECT", 0));
        cancelButton->setText(QApplication::translate("chooseExercise", "CANCEL", 0));
        errorLabel->setText(QString());
        label->setText(QApplication::translate("chooseExercise", "CHOOSE EXERCISE TO READ", 0));
    } // retranslateUi

};

namespace Ui {
    class chooseExercise: public Ui_chooseExercise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEEXERCISE_H
