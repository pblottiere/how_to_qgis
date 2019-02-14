#include <qgsapplication.h>
#include <qgsmapcanvas.h>

int main( int argc, char *argv[] )
{
  QgsApplication app(argc, argv, true);
  app.setPrefixPath("/usr/local", true);
  app.init();
  app.initQgis();

  QgsMapCanvas canvas;
  canvas.show();

  int rc = app.exec();
  QgsApplication::exitQgis();

  return rc;
}
