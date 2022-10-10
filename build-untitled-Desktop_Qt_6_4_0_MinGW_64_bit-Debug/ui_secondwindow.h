/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_strategy;
    QComboBox *comboBox_4;
    QComboBox *comboBox_2;
    QComboBox *comboBox_gap;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName("SecondWindow");
        SecondWindow->resize(832, 439);
        pushButton = new QPushButton(SecondWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 220, 181, 80));
        pushButton->setMinimumSize(QSize(0, 80));
        pushButton->setMaximumSize(QSize(400, 16777215));
        widget = new QWidget(SecondWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(45, 130, 741, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_strategy = new QComboBox(widget);
        comboBox_strategy->setObjectName("comboBox_strategy");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_strategy->sizePolicy().hasHeightForWidth());
        comboBox_strategy->setSizePolicy(sizePolicy);
        comboBox_strategy->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(comboBox_strategy);

        comboBox_4 = new QComboBox(widget);
        comboBox_4->setObjectName("comboBox_4");
        sizePolicy.setHeightForWidth(comboBox_4->sizePolicy().hasHeightForWidth());
        comboBox_4->setSizePolicy(sizePolicy);
        comboBox_4->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(comboBox_4);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName("comboBox_2");
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);
        comboBox_2->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(comboBox_2);

        comboBox_gap = new QComboBox(widget);
        comboBox_gap->setObjectName("comboBox_gap");
        sizePolicy.setHeightForWidth(comboBox_gap->sizePolicy().hasHeightForWidth());
        comboBox_gap->setSizePolicy(sizePolicy);
        comboBox_gap->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(comboBox_gap);


        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("SecondWindow", "Add Strategy", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("SecondWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
