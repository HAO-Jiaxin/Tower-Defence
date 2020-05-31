#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include<QMouseEvent>
#include <QTimer>
#include"mybutton.h"
#include"gamescene.h"
using namespace std;
#include<iostream>
MainWindow::MainWindow(QWidget *parent):
     QMainWindow(parent),
    ui(new Ui::MainWindow)

{

    ui->setupUi(this);
    //点击开始按钮

    MyButton *startButton=new MyButton(":/picture/start.png");
    startButton->setParent(this);
    startButton->move(350,500);
    GameScene *scene=new GameScene;
    connect(startButton,&MyButton::clicked,this,[=](){
        this->hide();
        scene->show();
    });
    //返回主界面按钮
    connect(scene,&GameScene::chooseBack,this,[=](){
        scene->hide();
        this->show();
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent*){
    QPainter painter(this);
    QPixmap mainbackground(":/picture/mainbg.png");
    painter.drawPixmap(0,0,1130,800,mainbackground);
}



