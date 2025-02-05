/********************************************************************************
** Form generated from reading UI file 'tela_adicionar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_ADICIONAR_H
#define UI_TELA_ADICIONAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela_adicionar
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *lineEdit_id_adicionar;
    QLineEdit *lineEdit_quantidade_adicionar;
    QPushButton *pushButton_adicionar_quantidade;

    void setupUi(QDialog *tela_adicionar)
    {
        if (tela_adicionar->objectName().isEmpty())
            tela_adicionar->setObjectName(QString::fromUtf8("tela_adicionar"));
        tela_adicionar->resize(240, 320);
        groupBox = new QGroupBox(tela_adicionar);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 221, 291));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 49, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 49, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 71, 16));
        lineEdit_id_adicionar = new QLineEdit(groupBox);
        lineEdit_id_adicionar->setObjectName(QString::fromUtf8("lineEdit_id_adicionar"));
        lineEdit_id_adicionar->setGeometry(QRect(90, 70, 113, 22));
        lineEdit_quantidade_adicionar = new QLineEdit(groupBox);
        lineEdit_quantidade_adicionar->setObjectName(QString::fromUtf8("lineEdit_quantidade_adicionar"));
        lineEdit_quantidade_adicionar->setGeometry(QRect(90, 100, 113, 22));
        pushButton_adicionar_quantidade = new QPushButton(groupBox);
        pushButton_adicionar_quantidade->setObjectName(QString::fromUtf8("pushButton_adicionar_quantidade"));
        pushButton_adicionar_quantidade->setGeometry(QRect(10, 180, 191, 31));

        retranslateUi(tela_adicionar);

        QMetaObject::connectSlotsByName(tela_adicionar);
    } // setupUi

    void retranslateUi(QDialog *tela_adicionar)
    {
        tela_adicionar->setWindowTitle(QCoreApplication::translate("tela_adicionar", "Tela de Adicionar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("tela_adicionar", "Adicionar", nullptr));
        label->setText(QCoreApplication::translate("tela_adicionar", "ID", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("tela_adicionar", "Quantidade", nullptr));
        pushButton_adicionar_quantidade->setText(QCoreApplication::translate("tela_adicionar", "Adicionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_adicionar: public Ui_tela_adicionar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_ADICIONAR_H
