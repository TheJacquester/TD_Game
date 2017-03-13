#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Setup ui and layout
    this->setMinimumSize(1680,900);
    this->setWindowTitle("Element_TD");

    player1_buildings_label = new QFrame(this);
    player1_buildings_label->setFrameStyle(QFrame::Panel | QFrame::Raised);
    player1_buildings_label->setLineWidth(2);







}

MainWindow::~MainWindow()
{
    delete ui;
}
