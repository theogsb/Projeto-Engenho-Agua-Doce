#include "tela_editar_nome.h"
#include "ui_tela_editar_nome.h"
#include "mainwindow.h"
#include <QMessageBox>

tela_editar_nome::tela_editar_nome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_editar_nome)
{
    ui->setupUi(this);
}

tela_editar_nome::~tela_editar_nome()
{
    delete ui;
}

void tela_editar_nome::on_pushButton_editar_clicked()
{
    // recupera a conexao
    QSqlDatabase db = QSqlDatabase::database();

    // check no banco de dados
    if (!db.isOpen()) {
        QMessageBox::warning(this, "Erro", "Banco de dados não está aberto");
        return;
    } else {
        qDebug() << "Conexao com o banco de dados mantida....";
    }

    QString id_editar = ui->lineEdit_id_editar->text();
    QString nome_editado = ui->lineEdit_nome_editar->text();
    QString sabor_editado = ui->lineEdit_sabor_editar->text();

    // printa as variaveis para confirmar visualmente os inputs
    qDebug() << id_editar;
    qDebug() << nome_editado;
    qDebug() << sabor_editado;

    // cria a query
    QSqlQuery query;

    query.prepare("UPDATE produtos SET nome = :nome, sabor = :sabor WHERE id = :id");

    query.bindValue(":id", id_editar.toInt());
    query.bindValue(":nome", nome_editado);
    query.bindValue(":sabor", sabor_editado);

    // executa a query e verifica se houve erro
    if (!query.exec()) {
        qDebug() << "Erro ao atualizar produto:" << query.lastError().text();
        QMessageBox::critical(this, "Erro", "Falha ao atualizar o produto!");
    } else {
        QMessageBox::information(this, "Sucesso", "Produto atualizado com sucesso");
        qDebug() << "Produto ID:" << id_editar << " atualizado para Nome:" << nome_editado << " e Sabor:" << sabor_editado;

        // Limpa os campos após a operação
        ui->lineEdit_id_editar->clear();
        ui->lineEdit_nome_editar->clear();
        ui->lineEdit_sabor_editar->clear();
    }
}

