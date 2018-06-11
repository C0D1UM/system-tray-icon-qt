#include <QDebug>
#include <QMessageBox>

#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , trayIcon(new QSystemTrayIcon(this))
{
  auto appIcon = QIcon(":/icons/pi.ico");
  this->trayIcon->setIcon(appIcon);
  this->trayIcon->show();     // Note: without explicitly calling show(), QSystemTrayIcon::activated signal will never be emitted!

  connect(trayIcon, &QSystemTrayIcon::activated, this, &MainWindow::iconActivated);
}

void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason_)
{
  switch (reason_) {
  case QSystemTrayIcon::Trigger:
    this->trayIcon->showMessage("Hello", "You clicked me!");
    break;
  default:
    ;
  }
}
