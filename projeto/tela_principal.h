#ifndef TELA_PRINCIPAL_H
#define TELA_PRINCIPAL_H

#include <QDialog>
#include "tela_cadastro.h"
#include "tela_adicionar.h"
#include "tela_retirar.h"
#include "tela_editar_nome.h"

namespace Ui {
class tela_principal;
}

class tela_principal : public QDialog
{
    Q_OBJECT

public:
    explicit tela_principal(QWidget *parent = nullptr);
    ~tela_principal();

private slots:
    void on_pushButton_cadastrar_clicked();

    void on_pushButton_adicionar_clicked();

    void on_pushButton_retirar_clicked();

    void on_pushButton_atualizar_tabela_clicked();

    void on_pushButton_editar_clicked();

private:
    Ui::tela_principal *ui;
    tela_cadastro *tela3; // ponteiro para tela de cadastro
    tela_adicionar *tela4; // ponteiro para tela de adicionar
    tela_retirar *tela5; // ponteiro tela de retirar
    tela_editar_nome *tela6; // ponteiro tela editar
};

#endif // TELA_PRINCIPAL_H
