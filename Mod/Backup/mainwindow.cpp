#include <QGraphicsEllipseItem>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#define maxn 10001
#define maxm 100001

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 连接按钮的点击信号到槽函数
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::addButtonClicked);

    // 创建场景和视图
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int cntn = 1;
double xi[maxn];
double yi[maxn];
double disi[maxm];
double Calculate(double x1,double y1,double x2,double y2)
{
    return std::sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
void MainWindow::addButtonClicked()
{
    // 获取输入框中的坐标
    double x = ui->lineEdit->text().toDouble();
    double y = ui->lineEdit_2->text().toDouble();
    xi[cntn] = x;
    yi[cntn] = y;

    // 创建一个黑色的圆点
    QGraphicsEllipseItem *circle = new QGraphicsEllipseItem(x, y, 10, 10);
    circle->setBrush(Qt::blue);

    // 将圆点添加到场景中
    scene->addItem(circle);
}