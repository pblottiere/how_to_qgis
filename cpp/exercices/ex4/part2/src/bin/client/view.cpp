#include "view.h"

RemoteView::RemoteView()
  : QMainWindow()
{
  QWidget *w = new QWidget();
  this->setCentralWidget(w);
}
