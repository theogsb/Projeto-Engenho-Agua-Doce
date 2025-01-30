/********************************************************************************
** Form generated from reading UI file 'tela_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA_PRINCIPAL_H
#define UI_TELA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_tela_principal
{
public:
    QPushButton *pushButton_cadastrar;
    QPushButton *pushButton_adicionar;
    QPushButton *pushButton_retirar;
    QTableView *tableView;
    QPushButton *pushButton_atualizar_tabela;
    QPushButton *pushButton_editar;

    void setupUi(QDialog *tela_principal)
    {
        if (tela_principal->objectName().isEmpty())
            tela_principal->setObjectName(QString::fromUtf8("tela_principal"));
        tela_principal->resize(681, 437);
        pushButton_cadastrar = new QPushButton(tela_principal);
        pushButton_cadastrar->setObjectName(QString::fromUtf8("pushButton_cadastrar"));
        pushButton_cadastrar->setGeometry(QRect(30, 110, 101, 31));
        pushButton_adicionar = new QPushButton(tela_principal);
        pushButton_adicionar->setObjectName(QString::fromUtf8("pushButton_adicionar"));
        pushButton_adicionar->setGeometry(QRect(30, 160, 101, 31));
        pushButton_retirar = new QPushButton(tela_principal);
        pushButton_retirar->setObjectName(QString::fromUtf8("pushButton_retirar"));
        pushButton_retirar->setGeometry(QRect(30, 210, 101, 31));
        tableView = new QTableView(tela_principal);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(165, 21, 491, 381));
        pushButton_atualizar_tabela = new QPushButton(tela_principal);
        pushButton_atualizar_tabela->setObjectName(QString::fromUtf8("pushButton_atualizar_tabela"));
        pushButton_atualizar_tabela->setGeometry(QRect(10, 360, 151, 41));
        pushButton_editar = new QPushButton(tela_principal);
        pushButton_editar->setObjectName(QString::fromUtf8("pushButton_editar"));
        pushButton_editar->setGeometry(QRect(30, 260, 101, 31));

        retranslateUi(tela_principal);

        QMetaObject::connectSlotsByName(tela_principal);
    } // setupUi

    void retranslateUi(QDialog *tela_principal)
    {
        tela_principal->setWindowTitle(QCoreApplication::translate("tela_principal", "Menu Principal", nullptr));
        pushButton_cadastrar->setText(QCoreApplication::translate("tela_principal", "Cadastrar", nullptr));
        pushButton_adicionar->setText(QCoreApplication::translate("tela_principal", "Adicionar", nullptr));
        pushButton_retirar->setText(QCoreApplication::translate("tela_principal", "Retirar", nullptr));
        pushButton_atualizar_tabela->setText(QCoreApplication::translate("tela_principal", "Atualizar Tabela", nullptr));
        pushButton_editar->setText(QCoreApplication::translate("tela_principal", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela_principal: public Ui_tela_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA_PRINCIPAL_H
