#include "tela_cadastro.h"
#include "ui_tela_cadastro.h"
#include <QMessageBox>
#include "mainwindow.h"

tela_cadastro::tela_cadastro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela_cadastro)
{
    ui->setupUi(this);
}


tela_cadastro::~tela_cadastro()
{
    delete ui;
}


void tela_cadastro::on_pushButton_cadastrar_produto_clicked()
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

    // armazena em variaveis as entradas das lineedits
    QString id = ui->lineEdit_id->text();
    QString nome = ui->lineEdit_nome->text();
    QString sabor = ui->lineEdit_sabor->text();
    QString quantidade = ui->lineEdit_quantidade->text();

    // printa as variaveis para confirmar visualmente os inputs
    qDebug() << id;
    qDebug() << nome;
    qDebug() << sabor;
    qDebug() << quantidade;

    // cria a query
    QSqlQuery query;
    query.prepare("INSERT INTO produtos (id, nome, sabor, quantidade) VALUES (:id, :nome, :sabor, :quantidade)");

    // substitui os valores pelos inputs
    query.bindValue(":id", id.toInt());
    query.bindValue(":nome", nome);
    query.bindValue(":sabor", sabor);
    query.bindValue(":quantidade", quantidade.toInt());

    // executa a query
    if (!query.exec()) {
        qDebug() << "Erro ao cadastrar produto: " << query.lastError().text();
        QMessageBox::critical(this, "Erro", "Falha ao cadastrar o produto no banco de dados!");
    } else {
        QMessageBox::information(this, "Sucesso", "Produto cadastrado com sucesso!");
        qDebug() << "Produto cadastrado: " << id << nome << sabor << quantidade;

        // limpa os campos
        ui->lineEdit_id->clear();
        ui->lineEdit_nome->clear();
        ui->lineEdit_sabor->clear();
        ui->lineEdit_quantidade->clear();
    }
}

