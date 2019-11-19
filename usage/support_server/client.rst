Clients (1)
===========
**WEB: LizMap (3Liz)**

|
.. image:: imgs/lizmap.png
  :width: 500pt
  :align: center


Clients (2)
===========
**WEB: QWC2 (QGIS)**

|
.. image:: imgs/qwc2.PNG
  :width: 500pt
  :align: center


Clients (3)
===========
**WEB: custom**

- flux WMS affichée dans une page HTML classique
- OpenLayers, Leaflet, ...

|
.. code-block::

    var map=new OpenLayers.Map(’map’);
    var layer=new OpenLayers.Layer.WMS(
      "Glacier fronts1",
      "http://qgis.sequanux.org/cgi-bin/project/landsat/qgis_mapserv.fcgi",
      {layers: "fronts4", transparent:"true", format:"image/png"},
      {isBaseLayer: false}
    );
    map.setCenter(new OpenLayers.LonLat(12,79),9);
    map.addLayer(layer);


Clients (4)
===========
**Lourd: QGIS Desktop**

|
.. image:: imgs/clientwms.png
  :width: 450pt
  :align: center
