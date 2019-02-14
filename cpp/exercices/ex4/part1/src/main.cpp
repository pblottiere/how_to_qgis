#include <QApplication>
#include <qgsapplication.h>
#include <qgsmapcanvas.h>

int main( int argc, char *argv[] )
{
  QApplication app(argc, argv);

  QgsApplication::setPrefixPath("/usr/local", true);
  QgsApplication::initQgis();

  //QgsMapCanvas canvas;
  //canvas.show();

  //int rc = app.exec();
  //QgsApplication::exitQgis();

  return 0;
}
