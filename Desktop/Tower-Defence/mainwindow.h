#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QList>
#include<QPushButton>
#include<QPainter>
#include<QPixmap>
#include<QPaintEvent>
#include"towerposition.h"
#include"object.h"
#include"monsterway.h"
#include"monster.h"
#include"tower.h"
#include"gamescene.h"
class Monster;
class Tower;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent*);

private:
    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
