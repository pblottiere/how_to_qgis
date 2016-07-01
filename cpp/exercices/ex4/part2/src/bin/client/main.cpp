#include "net/client.h"
#include <QApplication>
#include "view.h"

int main( int argc, char** argv )
{
  QApplication app( argc, argv );

  QGSClient client;
  client.connectToServer( "localhost", 1235 );

  RemoteView view;
  view.show();

  return app.exec();
}
