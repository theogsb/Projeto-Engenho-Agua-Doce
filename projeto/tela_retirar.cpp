#include "tela_retirar.h"
#include "ui_tela_retirar.h"
#include "mainwindow.h"
#include <QMessageBox>

tela_retirar::tela_retirar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_retirar)
{
    ui->setupUi(this);
}

tela_retirar::~tela_retirar()
{
    delete ui;
}

void tela_retirar::on_pushButton_retirar_quantidade_clicked()
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

    // armazena as entradasd da lineedit
    QString id = ui->lineEdit_id_retirar->text();
    QString quantidadeRetirada = ui->lineEdit_quantidade_retirar->text();

    // printa os inputs para confirmação
    qDebug() << id;
    qDebug() << quantidadeRetirada;

    // cria a query
    QSqlQuery query;

    query.prepare("UPDATE produtos SET quantidade = quantidade - :quantidadeAdicionada WHERE id = :id");

    query.bindValue(":id", id.toInt());
    query.bindValue(":quantidadeAdicionada", quantidadeRetirada.toInt());

    // executa a query
    if (!query.exec()) {
        qDebug() << "Erro ao retirarr quantidade: " << query.lastError().text();
        QMessageBox::critical(this, "Erro", "Falha ao retirar quantidade ao produto!");
    } else {
        QMessageBox::information(this, "Sucesso", "Quantidade retirada com sucesso!");
        qDebug() << "Quantidade retirada ao produto ID: " << id << " + " << quantidadeRetirada;

        // Limpa os campos após a operação
        ui->lineEdit_id_retirar->clear();
        ui->lineEdit_quantidade_retirar->clear();
    }
}

