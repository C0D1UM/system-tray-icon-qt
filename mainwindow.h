#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QSystemTrayIcon;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = 0);

private:
  QSystemTrayIcon* trayIcon;
};
