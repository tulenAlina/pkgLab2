/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pbChoice;
    QListView *listView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbName;
    QLabel *setName;
    QLabel *lbDepth;
    QLabel *setDepth;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbSize;
    QLabel *setSize;
    QLabel *lbCompr;
    QLabel *setCom;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbResolution;
    QLabel *setRes;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 0, 781, 541));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        QFont font;
        font.setFamilies({QString::fromUtf8("Cascadia Code")});
        font.setPointSize(8);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        pbChoice = new QPushButton(widget);
        pbChoice->setObjectName("pbChoice");

        horizontalLayout->addWidget(pbChoice);


        verticalLayout->addLayout(horizontalLayout);

        listView = new QListView(widget);
        listView->setObjectName("listView");

        verticalLayout->addWidget(listView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lbName = new QLabel(widget);
        lbName->setObjectName("lbName");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cascadia Code")});
        font1.setPointSize(11);
        lbName->setFont(font1);

        horizontalLayout_2->addWidget(lbName);

        setName = new QLabel(widget);
        setName->setObjectName("setName");
        setName->setFont(font1);
        setName->setWordWrap(true);

        horizontalLayout_2->addWidget(setName);

        lbDepth = new QLabel(widget);
        lbDepth->setObjectName("lbDepth");
        lbDepth->setFont(font1);

        horizontalLayout_2->addWidget(lbDepth);

        setDepth = new QLabel(widget);
        setDepth->setObjectName("setDepth");
        setDepth->setFont(font1);

        horizontalLayout_2->addWidget(setDepth);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lbSize = new QLabel(widget);
        lbSize->setObjectName("lbSize");
        lbSize->setFont(font1);

        horizontalLayout_3->addWidget(lbSize);

        setSize = new QLabel(widget);
        setSize->setObjectName("setSize");
        setSize->setFont(font1);

        horizontalLayout_3->addWidget(setSize);

        lbCompr = new QLabel(widget);
        lbCompr->setObjectName("lbCompr");
        lbCompr->setFont(font1);

        horizontalLayout_3->addWidget(lbCompr);

        setCom = new QLabel(widget);
        setCom->setObjectName("setCom");
        setCom->setFont(font1);

        horizontalLayout_3->addWidget(setCom);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lbResolution = new QLabel(widget);
        lbResolution->setObjectName("lbResolution");
        lbResolution->setFont(font1);

        horizontalLayout_4->addWidget(lbResolution);

        setRes = new QLabel(widget);
        setRes->setObjectName("setRes");
        setRes->setFont(font1);

        horizontalLayout_4->addWidget(setRes);

        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pbChoice->setText(QString());
        lbName->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        setName->setText(QString());
        lbDepth->setText(QCoreApplication::translate("MainWindow", "\320\223\320\273\321\203\320\261\320\270\320\275\320\260 \321\206\320\262\320\265\321\202\320\260:", nullptr));
        setDepth->setText(QString());
        lbSize->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200:", nullptr));
        setSize->setText(QString());
        lbCompr->setText(QCoreApplication::translate("MainWindow", "\320\241\320\266\320\260\321\202\320\270\320\265:", nullptr));
        setCom->setText(QString());
        lbResolution->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\320\265:", nullptr));
        setRes->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
