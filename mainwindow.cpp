#include "mainwindow.h"

#include <QSystemTrayIcon>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , trayIcon(new QSystemTrayIcon(this))
{
  auto appIcon = QIcon(":/icons/pi.ico");
  this->trayIcon->setIcon(appIcon);
}
