SET(SOURCES
  server.cpp
  client.cpp)

INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})
INCLUDE_DIRECTORIES(${QGIS_INCLUDE_DIR})
INCLUDE_DIRECTORIES(${QT_INCLUDE_DIR}/QtXml)

ADD_LIBRARY(net SHARED ${SOURCES})
TARGET_LINK_LIBRARIES(net ${QT_LIBRARIES})
TARGET_LINK_LIBRARIES(net qgis_core)
TARGET_LINK_LIBRARIES(net qgis_gui)
TARGET_LINK_LIBRARIES(net qgis_app)
