#include "net/server.h"
#include <QCoreApplication>

int main( int argc, char** argv )
{
  QCoreApplication app(argc, argv);

  QString project = "<TODO>";
  int port = 1235;

  QGSServer server( port, project );

  return app.exec();
}
