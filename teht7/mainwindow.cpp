#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player1Time = 0;
    player2Time = 0;
    currentPlayer = 1;
    gameTime = 0;
    updateProgressBar(); //progressbarit näyttää alussa 0

    pQTimer = new QTimer(this);
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::timeout); //timerin alustus
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    if(currentPlayer == 1) {
        player1Time--;
        ui->progressBar1->setValue(player1Time); //progressbar vastaa pelaajan 1 aikaa
    } else {
        player2Time--;
        ui->progressBar2->setValue(player2Time); //progressbar vastaa pelaajan 2 aikaa
    }
    if(player1Time <= 0) {
        pQTimer->stop();
        setGameInfoText("PLAYER 2 WINS!!", 26);
    } else if(player2Time <= 0) {
        pQTimer->stop();
        setGameInfoText("PLAYER 1 WINS!!", 26);
    }
}

void MainWindow::on_btnStart_clicked()
{
    if(gameTime == 0) {
    setGameInfoText("Valitse peliaika ensin", 20);
        return; //pitää huolen että peliä ei käynnistetä ennen kuin aika on valittu
    }

    currentPlayer = 1; //pelaaja 1 aina ensimmäisenä vuorossa
    setGameInfoText("Nykyinen pelaaja: 1", 20);
    pQTimer->start(1000);

    ui->btnStart->setEnabled(false); //poistaa start buttonin käytöstä
}


void MainWindow::on_btn120Sec_clicked()
{
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;

    updateProgressBar();
    setGameInfoText("Peliaika: 2 minuuttia", 20);
}


void MainWindow::on_btn5Min_clicked()
{
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime; //pelaajan aika vastaa pelin aikaa

    updateProgressBar();
    setGameInfoText("Peliaika: 5 minuuttia", 20);
}


void MainWindow::on_btnStop_clicked()
{
    pQTimer->stop();
    gameTime = 0;
    setGameInfoText("Valitse uusi peliaika ja paina START GAME", 20);
    updateProgressBar();
    ui->btnStart->setEnabled(true); //ottaa start buttonin takaisin käyttöön
}


void MainWindow::on_btnSwitch1_clicked()
{
    currentPlayer = 2;
    setGameInfoText("Nykyinen pelaaja: 2", 20);
}


void MainWindow::on_btnSwitch2_clicked()
{
    currentPlayer = 1;
    setGameInfoText("Nykyinen pelaaja: 1", 20);
}


void MainWindow::updateProgressBar()
{
    ui->progressBar1->setRange(0, gameTime);
    ui->progressBar2->setRange(0, gameTime);
    ui->progressBar1->setValue(gameTime);
    ui->progressBar2->setValue(gameTime); //progressbar menee pelin ajan mukana
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    ui->label->setText(text);
    QFont font = ui->label->font();
    font.setPointSize(fontSize);
    ui->label->setFont(font); //fontin määritys
}
