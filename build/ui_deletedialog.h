/********************************************************************************
** Form generated from reading UI file 'deletedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDIALOG_H
#define UI_DELETEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *deleteDialog)
    {
        if (deleteDialog->objectName().isEmpty())
            deleteDialog->setObjectName(QString::fromUtf8("deleteDialog"));
        deleteDialog->resize(689, 475);
        buttonBox = new QDialogButtonBox(deleteDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(300, 410, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(deleteDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 130, 361, 51));
        lineEdit->setClearButtonEnabled(true);
        comboBox = new QComboBox(deleteDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(430, 130, 31, 51));
        pushButton = new QPushButton(deleteDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 130, 131, 51));

        retranslateUi(deleteDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, deleteDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, deleteDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(deleteDialog);
    } // setupUi

    void retranslateUi(QDialog *deleteDialog)
    {
        deleteDialog->setWindowTitle(QCoreApplication::translate("deleteDialog", "Dialog", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("deleteDialog", "Type here to Search...", nullptr));
        pushButton->setText(QCoreApplication::translate("deleteDialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteDialog: public Ui_deleteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDIALOG_H
