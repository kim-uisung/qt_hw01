#include "./ui_mainwindow.h"
#include "mainwindow.h"
#include <QPropertyAnimation>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  QIcon icon(":/image/images/icon.png");
  setWindowIcon(icon);

  ui->lineEdit->setInputMask("000");

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::animateAndClear(QWidget* widget)
{
    QPropertyAnimation* animation = new QPropertyAnimation(widget, "pos");
    animation->setDuration(500);
    animation->setStartValue(widget->pos());
    animation->setEndValue(widget->pos() + QPoint(100, 0));

    connect(animation, &QPropertyAnimation::finished, widget, [widget]() {
        QLineEdit* lineEdit = qobject_cast<QLineEdit*>(widget);
        if (lineEdit) {
            lineEdit->clear();
        }
    });

    animation->start(QAbstractAnimation::DeleteWhenStopped);
}



void MainWindow::on_start_btn_clicked()
{
    if (i == 1) {
        animateAndClear(ui->lineEdit_q5);
        animateAndClear(ui->lineEdit_s1);
    } else if (i == 2) {
        animateAndClear(ui->lineEdit_q4);
        animateAndClear(ui->lineEdit_s2);
    } else if (i == 3) {
        animateAndClear(ui->lineEdit_q3);
        animateAndClear(ui->lineEdit_s3);
    } else if (i == 4) {
        animateAndClear(ui->lineEdit_q2);
        animateAndClear(ui->lineEdit_s4);
    } else if (i == 5) {
        animateAndClear(ui->lineEdit_q1);
        animateAndClear(ui->lineEdit_s5);
    }

    i--;
    if (i < 0) i = 0;
}


void MainWindow::on_lineEdit_returnPressed()
{
    while(i<5){
        i++;
        if(i == 1){
            ui->lineEdit_q1->setText(ui->lineEdit->text());
            ui->lineEdit_s1->setText(ui->lineEdit->text());
            break;
        }
        else if(i == 2){
            ui->lineEdit_q2->setText(ui->lineEdit->text());
            ui->lineEdit_s2->setText(ui->lineEdit->text());
            break;
        }
        else if(i == 3) {
            ui->lineEdit_q3->setText(ui->lineEdit->text());
            ui->lineEdit_s3->setText(ui->lineEdit->text());
            break;
        }
        else if(i == 4) {
            ui->lineEdit_q4->setText(ui->lineEdit->text());
            ui->lineEdit_s4->setText(ui->lineEdit->text());
            break;
        }
        else if(i == 5) {
            ui->lineEdit_q5->setText(ui->lineEdit->text());
            ui->lineEdit_s5->setText(ui->lineEdit->text());
            break;
        }
    }
}


void MainWindow::on_lineEdit_q1_returnPressed()
{

}


void MainWindow::on_lineEdit_q2_returnPressed()
{

}


void MainWindow::on_lineEdit_q3_returnPressed()
{

}


void MainWindow::on_lineEdit_q4_returnPressed()
{

}


void MainWindow::on_lineEdit_q5_returnPressed()
{

}


void MainWindow::on_lineEdit_s1_returnPressed()
{

}


void MainWindow::on_lineEdit_s2_returnPressed()
{

}


void MainWindow::on_lineEdit_s3_returnPressed()
{

}


void MainWindow::on_lineEdit_s4_returnPressed()
{

}


void MainWindow::on_lineEdit_s5_returnPressed()
{

}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}


void MainWindow::on_pushButton_clicked()
{
    this->close();
}

