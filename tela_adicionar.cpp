#include "tela_adicionar.h"
#include "ui_tela_adicionar.h"
#include <QMessageBox>
#include "mainwindow.h"

tela_adicionar::tela_adicionar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_adicionar)
{
    ui->setupUi(this);
}


tela_adicionar::~tela_adicionar()
{
    delete ui;
}


void tela_adicionar::on_pushButton_adicionar_quantidade_clicked()
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

    // armazena as entradas das lineedits
    QString id = ui->lineEdit_id_adicionar->text();
    QString quantidadeAdicionada = ui->lineEdit_quantidade_adicionar->text();

    // printa os inputs para confirmacao do registro
    qDebug() << id;
    qDebug() << quantidadeAdicionada;

    // cria a query
    QSqlQuery query;

    query.prepare("UPDATE produtos SET quantidade = quantidade + :quantidadeAdicionada WHERE id = :id");

    query.bindValue(":id", id.toInt());
    query.bindValue(":quantidadeAdicionada", quantidadeAdicionada.toInt());

    // executa a query
    if (!query.exec()) {
        qDebug() << "Erro ao adicionar quantidade: " << query.lastError().text();
        QMessageBox::critical(this, "Erro", "Falha ao adicionar quantidade ao produto!");
    } else {
        QMessageBox::information(this, "Sucesso", "Quantidade adicionada com sucesso!");
        qDebug() << "Quantidade adicionada ao produto ID: " << id << " + " << quantidadeAdicionada;

        // Limpa os campos após a operação
        ui->lineEdit_id_adicionar->clear();
        ui->lineEdit_quantidade_adicionar->clear();
    }
}

