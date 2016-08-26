Exercice 1 : Installation de l'environnement sous Windows 8
===========================================================


Environnement QGIS : OSGeo4W
----------------------------

**Étape 1** - Télécharger OSGeo4W ici : https://www.qgis.org/fr/site/forusers/download.html

**Étape 2** - Faire l'installation **Express Desktop Install**.

**Étape 3** - Lancer QGIS pour vérifier le bon fonctionnement

**Étape 4** - Lancer le shell OSGeo puis l'interpréteur python et :

``` python
>>> import sys
>>> sys.executable
'C:\\OSGeo4W64\\bin\\python.exe'
>> import qgis
```

Éditeur : Eclipse
-----------------

**Étape 1** - Télécharger/Installer Java http://www.oracle.com/technetwork/java/javase/downloads/jdk8-downloads-2133151.html

**Étape 2** - Télécharger/Installer Eclipse https://eclipse.org


Support Python avec autocomplétion : plugins Eclipse Aptana / PyDev
-------------------------------------------------------------------

**Étape 1** - *Panneau de Configuration* -> *Système et Sécurité* -> *Système* -> *Paramètres systèmes avancés*.
Cliquer sur *Variables d'environnement* et ajouter les variables d'environnements suivantes à votre profil :
- PATH : *C:\OSGeo4W64\bin;C:\OSGeo4W64\apps\Python27;C:\OSGeo4W64\apps\Python27\Scripts;C:\OSGeo4W64\apps\qgis\python;C:\OSGeo4W64\apps\qgis\bin*
- PYTHONHOME : *C:\OSGeo4W64\apps\Python27*
- PYTHONPATH : *C:\OSGeo4W64\apps\qgis\python*

Note : utiliser simplement *C:\OSGeo4W* sur les systèmes 32 bits.

**Étape 2** - Lancer une invite de commande puis lancer l'interpréteur python et

``` python
>>> import sys
>>> sys.executable
'C:\\OSGeo4W64\\bin\\python.exe'
>> import qgis
```

**Étape 3** - Ouvrir Eclipse et *Help* -> *Install New Software..* et copier
l'URL suivante dans *Work with:* : http://preview.appcelerator.com/aptana/studio3/standalone/update/beta/.
Continuer l'installation.

**Étape 4** - Installer PyDev avec les même étapes que précédemment mais avec
l'URL suivante : http://pydev.org/updates

**Étape 5** - Aller dans *Window* -> *Preferences* -> *PyDev* -> *Interpreters* -> *Python Interpreters*.
Puis cliquer sur *New* et ajouter un interpréteur nommé *osgeo* et selectionner
l'interpréteur Python de OSGeo4W *C:\OSGeo4W\bin\python*.

**Étape 6** - Sélectionner l'onglet *Forced Builtins* et cliquer sur *New*.
Ajouter *qgis*. Faire de même avec *PyQT4*.

**Étape 7** - Ajouter la variable d'environnement PATH (même que celle du système)
via l'onglet *Environment*


Support de la formation
-----------------------

À travers Eclipse :

**Étape 1** - Cloner le dépôt Github en cliquant sur *File* -> *Import* -> *Git* -> *Projects from Git* -> *Clone URI*.
Indiquer l'URL *https://github.com/pblottiere/how_to_qgis*. Puis cliquer sur *Next*, etc.

Note : sans Eclipse à la Unix => utiliser git + gitbash


Références
----------


http://docs.qgis.org/testing/en/docs/pyqgis_developer_cookbook/ide_debugging.html


http://stackoverflow.com/questions/21065690/aptana-error-pydev-port-not-bound-found-port-1
