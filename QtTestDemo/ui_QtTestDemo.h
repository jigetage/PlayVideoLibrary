/********************************************************************************
** Form generated from reading UI file 'QtTestDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTESTDEMO_H
#define UI_QTTESTDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtTestDemoClass
{
public:
    QLabel *video_main;
    QLabel *video_side;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStart;
    QPushButton *btnStartMain;
    QPushButton *btnStartLeft;
    QPushButton *btnStop;

    void setupUi(QDialog *QtTestDemoClass)
    {
        if (QtTestDemoClass->objectName().isEmpty())
            QtTestDemoClass->setObjectName(QStringLiteral("QtTestDemoClass"));
        QtTestDemoClass->resize(600, 600);
        video_main = new QLabel(QtTestDemoClass);
        video_main->setObjectName(QStringLiteral("video_main"));
        video_main->setGeometry(QRect(50, 50, 500, 400));
        video_main->setStyleSheet(QStringLiteral("background-color: green;"));
        video_side = new QLabel(QtTestDemoClass);
        video_side->setObjectName(QStringLiteral("video_side"));
        video_side->setGeometry(QRect(50, 50, 500, 400));
        video_side->setStyleSheet(QStringLiteral("background-color: green;"));
        widget = new QWidget(QtTestDemoClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 510, 471, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnStart = new QPushButton(widget);
        btnStart->setObjectName(QStringLiteral("btnStart"));

        horizontalLayout->addWidget(btnStart);

        btnStartMain = new QPushButton(widget);
        btnStartMain->setObjectName(QStringLiteral("btnStartMain"));

        horizontalLayout->addWidget(btnStartMain);

        btnStartLeft = new QPushButton(widget);
        btnStartLeft->setObjectName(QStringLiteral("btnStartLeft"));

        horizontalLayout->addWidget(btnStartLeft);

        btnStop = new QPushButton(widget);
        btnStop->setObjectName(QStringLiteral("btnStop"));

        horizontalLayout->addWidget(btnStop);

        btnStart->raise();
        btnStop->raise();
        video_side->raise();
        btnStartMain->raise();
        btnStartLeft->raise();
        video_main->raise();

        retranslateUi(QtTestDemoClass);

        QMetaObject::connectSlotsByName(QtTestDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QtTestDemoClass)
    {
        QtTestDemoClass->setWindowTitle(QApplication::translate("QtTestDemoClass", "QtTestDemo", Q_NULLPTR));
        video_main->setText(QString());
        video_side->setText(QString());
        btnStart->setText(QApplication::translate("QtTestDemoClass", "startAll", Q_NULLPTR));
        btnStartMain->setText(QApplication::translate("QtTestDemoClass", "startMain", Q_NULLPTR));
        btnStartLeft->setText(QApplication::translate("QtTestDemoClass", "startLeft", Q_NULLPTR));
        btnStop->setText(QApplication::translate("QtTestDemoClass", "stopAll", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtTestDemoClass: public Ui_QtTestDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTESTDEMO_H
