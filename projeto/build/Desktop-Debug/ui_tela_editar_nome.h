/********************************************************************************
** Form generated from reading UI file 'tela_editar_nome.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_EDITAR_NOME_H
#define UI_TELA_EDITAR_NOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela_editar_nome
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_id_editar;
    QLineEdit *lineEdit_nome_editar;
    QLineEdit *lineEdit_sabor_editar;
    QPushButton *pushButton_editar;

    void setupUi(QDialog *tela_editar_nome)
    {
        if (tela_editar_nome->objectName().isEmpty())
            tela_editar_nome->setObjectName(QString::fromUtf8("tela_editar_nome"));
        tela_editar_nome->resize(244, 251);
        groupBox = new QGroupBox(tela_editar_nome);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 221));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 49, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 49, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 120, 49, 16));
        lineEdit_id_editar = new QLineEdit(groupBox);
        lineEdit_id_editar->setObjectName(QString::fromUtf8("lineEdit_id_editar"));
        lineEdit_id_editar->setGeometry(QRect(90, 40, 113, 22));
        lineEdit_nome_editar = new QLineEdit(groupBox);
        lineEdit_nome_editar->setObjectName(QString::fromUtf8("lineEdit_nome_editar"));
        lineEdit_nome_editar->setGeometry(QRect(90, 80, 113, 22));
        lineEdit_sabor_editar = new QLineEdit(groupBox);
        lineEdit_sabor_editar->setObjectName(QString::fromUtf8("lineEdit_sabor_editar"));
        lineEdit_sabor_editar->setGeometry(QRect(90, 120, 113, 22));
        pushButton_editar = new QPushButton(groupBox);
        pushButton_editar->setObjectName(QString::fromUtf8("pushButton_editar"));
        pushButton_editar->setGeometry(QRect(10, 170, 191, 31));

        retranslateUi(tela_editar_nome);

        QMetaObject::connectSlotsByName(tela_editar_nome);
    } // setupUi

    void retranslateUi(QDialog *tela_editar_nome)
    {
        tela_editar_nome->setWindowTitle(QCoreApplication::translate("tela_editar_nome", "Editar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("tela_editar_nome", "Editar", nullptr));
        label->setText(QCoreApplication::translate("tela_editar_nome", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("tela_editar_nome", "Nome", nullptr));
        label_3->setText(QCoreApplication::translate("tela_editar_nome", "Sabor", nullptr));
        pushButton_editar->setText(QCoreApplication::translate("tela_editar_nome", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_editar_nome: public Ui_tela_editar_nome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_EDITAR_NOME_H
