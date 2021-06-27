/********************************************************************************
** Form generated from reading UI file 'viewdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWDIALOG_H
#define UI_VIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewDialog
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QFrame *line;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *listWidget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name;
    QLabel *label_price;
    QLabel *label_desc;

    void setupUi(QDialog *viewDialog)
    {
        if (viewDialog->objectName().isEmpty())
            viewDialog->setObjectName(QString::fromUtf8("viewDialog"));
        viewDialog->resize(733, 498);
        scrollArea = new QScrollArea(viewDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(60, 120, 601, 331));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 599, 329));
        line = new QFrame(scrollAreaWidgetContents_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 40, 601, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(scrollAreaWidgetContents_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 581, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        listWidget = new QListWidget(scrollAreaWidgetContents_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 60, 581, 261));
        scrollArea->setWidget(scrollAreaWidgetContents_2);
        layoutWidget1 = new QWidget(viewDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(427, 60, 235, 36));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        layoutWidget2 = new QWidget(viewDialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 30, 581, 21));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(layoutWidget2);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        horizontalLayout_2->addWidget(label_name);

        label_price = new QLabel(layoutWidget2);
        label_price->setObjectName(QString::fromUtf8("label_price"));

        horizontalLayout_2->addWidget(label_price);

        label_desc = new QLabel(layoutWidget2);
        label_desc->setObjectName(QString::fromUtf8("label_desc"));

        horizontalLayout_2->addWidget(label_desc);


        retranslateUi(viewDialog);

        QMetaObject::connectSlotsByName(viewDialog);
    } // setupUi

    void retranslateUi(QDialog *viewDialog)
    {
        viewDialog->setWindowTitle(QCoreApplication::translate("viewDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("viewDialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("viewDialog", "Price", nullptr));
        label_3->setText(QCoreApplication::translate("viewDialog", "Shelf No.", nullptr));
        pushButton->setText(QCoreApplication::translate("viewDialog", "View All", nullptr));
        pushButton_2->setText(QCoreApplication::translate("viewDialog", "Exit", nullptr));
        label_name->setText(QString());
        label_price->setText(QString());
        label_desc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewDialog: public Ui_viewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWDIALOG_H
