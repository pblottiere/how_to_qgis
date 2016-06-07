Exercice 4 : QGIS standalone
============================

Partie 4.1
----------

- QgsApplication (init/exit)
- QgsMapCanvas
- mise en place d'une application QGIS standalone

````
> cd exercices/ex4/part1
> mkdir build && cd build
> cmake .. && make
[100%] Building CXX object src/CMakeFiles/standalone.dir/main.cpp.o
/home/blottiere/devel/train/qgis_cpp/exercices/ex4/part1/src/main.cpp:2:28: fatal error: qgsapplication.h: No such file or directory
 #include <qgsapplication.h>
                            ^
compilation terminated.
````

**Question 1** : Récupérer le script FindQGIS.cmake dans le projet QGIS et l'utiliser dans notre contexte pour compiler notre application QGIS standalone.

Partie 4.2
----------
