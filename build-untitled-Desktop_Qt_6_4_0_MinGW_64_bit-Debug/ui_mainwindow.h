/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addStrategyBtn;
    QLineEdit *lineEdit;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    QPushButton *saveBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_nifty50;
    QLineEdit *nifty50ValueLedt;
    QSpacerItem *horizontalSpacer;
    QLabel *label_niftybank;
    QLineEdit *niftybankValueLedt;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_indiavix;
    QLineEdit *indiavixValueLedt;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tradeDetail;
    QWidget *tradeSummary;
    QWidget *contractPositions;
    QWidget *strategyPositions;
    QWidget *strategyPositionspDetails;
    QWidget *strategyParameters;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1650, 911);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(12, 2, 1621, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addStrategyBtn = new QPushButton(layoutWidget);
        addStrategyBtn->setObjectName("addStrategyBtn");

        horizontalLayout->addWidget(addStrategyBtn);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        startBtn = new QPushButton(layoutWidget);
        startBtn->setObjectName("startBtn");

        horizontalLayout->addWidget(startBtn);

        stopBtn = new QPushButton(layoutWidget);
        stopBtn->setObjectName("stopBtn");

        horizontalLayout->addWidget(stopBtn);

        saveBtn = new QPushButton(layoutWidget);
        saveBtn->setObjectName("saveBtn");

        horizontalLayout->addWidget(saveBtn);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(340, 40, 981, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_nifty50 = new QLabel(layoutWidget1);
        label_nifty50->setObjectName("label_nifty50");

        horizontalLayout_2->addWidget(label_nifty50);

        nifty50ValueLedt = new QLineEdit(layoutWidget1);
        nifty50ValueLedt->setObjectName("nifty50ValueLedt");

        horizontalLayout_2->addWidget(nifty50ValueLedt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_niftybank = new QLabel(layoutWidget1);
        label_niftybank->setObjectName("label_niftybank");

        horizontalLayout_2->addWidget(label_niftybank);

        niftybankValueLedt = new QLineEdit(layoutWidget1);
        niftybankValueLedt->setObjectName("niftybankValueLedt");

        horizontalLayout_2->addWidget(niftybankValueLedt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_indiavix = new QLabel(layoutWidget1);
        label_indiavix->setObjectName("label_indiavix");

        horizontalLayout_2->addWidget(label_indiavix);

        indiavixValueLedt = new QLineEdit(layoutWidget1);
        indiavixValueLedt->setObjectName("indiavixValueLedt");

        horizontalLayout_2->addWidget(indiavixValueLedt);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(7, 88, 1631, 761));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(layoutWidget2);
        if (tableWidget->columnCount() < 19)
            tableWidget->setColumnCount(19);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(18, __qtablewidgetitem18);
        tableWidget->setObjectName("tableWidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMinimumSize(QSize(0, 300));

        verticalLayout->addWidget(tableWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabWidget = new QTabWidget(layoutWidget2);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMinimumSize(QSize(0, 250));
        tradeDetail = new QWidget();
        tradeDetail->setObjectName("tradeDetail");
        tabWidget->addTab(tradeDetail, QString());
        tradeSummary = new QWidget();
        tradeSummary->setObjectName("tradeSummary");
        tabWidget->addTab(tradeSummary, QString());
        contractPositions = new QWidget();
        contractPositions->setObjectName("contractPositions");
        tabWidget->addTab(contractPositions, QString());
        strategyPositions = new QWidget();
        strategyPositions->setObjectName("strategyPositions");
        tabWidget->addTab(strategyPositions, QString());
        strategyPositionspDetails = new QWidget();
        strategyPositionspDetails->setObjectName("strategyPositionspDetails");
        tabWidget->addTab(strategyPositionspDetails, QString());
        strategyParameters = new QWidget();
        strategyParameters->setObjectName("strategyParameters");
        tabWidget->addTab(strategyParameters, QString());

        verticalLayout->addWidget(tabWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        textEdit = new QTextEdit(layoutWidget2);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1650, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addStrategyBtn->setText(QCoreApplication::translate("MainWindow", "ADD Strategy", nullptr));
        startBtn->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stopBtn->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        saveBtn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label_nifty50->setText(QCoreApplication::translate("MainWindow", "Nifty 50", nullptr));
        label_niftybank->setText(QCoreApplication::translate("MainWindow", "Nifty Bank", nullptr));
        label_indiavix->setText(QCoreApplication::translate("MainWindow", "India VIX", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "FUT", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "QTY", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "SPD", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "MSP", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "TOQ", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "DNQ", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "ASP", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "PRT", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "QTY", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "SPD", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "MSP", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "TOQ", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "DNQ", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "ASP", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "PRT", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "BRK", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "NQT", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->horizontalHeaderItem(18);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "ACT", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tradeDetail), QCoreApplication::translate("MainWindow", "Trades Detail", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tradeSummary), QCoreApplication::translate("MainWindow", "Trades Summary", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(contractPositions), QCoreApplication::translate("MainWindow", "Contract Positons", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(strategyPositions), QCoreApplication::translate("MainWindow", "Strategy Positions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(strategyPositionspDetails), QCoreApplication::translate("MainWindow", "Strategy Positions Details", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(strategyParameters), QCoreApplication::translate("MainWindow", "Strategy Parameters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
