#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

private slots:
  void on_start_btn_clicked();

  void on_lineEdit_returnPressed();

  void on_lineEdit_2_returnPressed();

  void on_lineEdit_3_returnPressed();

  void on_lineEdit_q3_returnPressed();

  void on_lineEdit_q4_returnPressed();

  void on_lineEdit_q5_returnPressed();

  void on_lineEdit_s1_returnPressed();

  void on_lineEdit_s2_returnPressed();

  void on_lineEdit_s3_returnPressed();

  void on_lineEdit_s4_returnPressed();

  void on_lineEdit_s5_returnPressed();

  void on_lineEdit_q1_returnPressed();

  void on_lineEdit_q2_returnPressed();

  void on_lineEdit_textChanged(const QString &arg1);

  void on_pushButton_clicked();

private:
  Ui::MainWindow* ui;
  int i = 0;
  void animateAndClear(QWidget* widget);
};
#endif  // MAINWINDOW_H
