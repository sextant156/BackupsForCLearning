class CustomPolygonItem : public QGraphicsPolygonItem
{
public:
    CustomPolygonItem(const QPolygonF& polygon, QGraphicsItem* parent = nullptr)
        : QGraphicsPolygonItem(polygon, parent)
    {
        // 设置三角形的笔刷和边框颜色
        setBrush(Qt::blue);
        setPen(QPen(Qt::black));
        // 启用鼠标悬停事件处理
        setAcceptHoverEvents(true);
    }
    int index;
protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override
    {
        // 将边框颜色更改为绿色
        setPen(QPen(Qt::green));
        MainWindow* mainWindow = qobject_cast<MainWindow*>(scene()->views().first()->window());
        if (mainWindow)
        {
            mainWindow->updateSelectedTableRow(index);
        }
        // 调用基类实现以确保其他事件处理正常工作
        QGraphicsPolygonItem::hoverEnterEvent(event);
    }
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override
    {
        // 将边框颜色恢复为黑色
        setPen(QPen(Qt::black));

        MainWindow* mainWindow = qobject_cast<MainWindow*>(scene()->views().first()->window());
        if (mainWindow)
        {
            mainWindow->clearSelectedTableRow();
        }
        // 调用基类实现以确保其他事件处理正常工作
        QGraphicsPolygonItem::hoverLeaveEvent(event);
    }

};

void MainWindow::updateSelectedTableRow(int selectedIndex)
{
    // 清除之前的选择
    ui->tableWidget->clearSelection();

    // 选择整行中的所有单元格
    for (int col = 0; col < 3; col++)
    {
        ui->tableWidget->setRangeSelected(QTableWidgetSelectionRange(selectedIndex, col, selectedIndex, col), true);
    }
}

void MainWindow::clearSelectedTableRow()
{
    // 清除表格中的选中状态
    ui->tableWidget->clearSelection();
}