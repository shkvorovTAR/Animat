#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>

#include <QGraphicsItemGroup>

#include <QTimer>
#include <QtMath>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void drawAxes();
    QPoint drawCircle(QPoint center, qreal radius, qreal angle, QColor color);

    void stopAnimation();

private slots:
    void on_doubleSpinBox_valueChanged(double arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_Start_CW_clicked();

    void on_pushButton_Start_CCW_clicked();

    void on_pushButton_Stop_clicked();

    void timerTick();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QTimer *timer;
    int angle;
    bool dirCW;
    void startAnimation();
};

#endif // MAINWINDOW_H
