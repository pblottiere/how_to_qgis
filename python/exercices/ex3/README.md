Exercice 3 : PyQt
=================


Partie 1
--------

- QtDesigner
- les bases de PyQt
- Utiliser l'éditeur QGIS


**Étape 1** - Utilisez QtDesigner pour créer une fenêtre avec 2 boutons *OK* et *Cancel*

**Étape 2** - Utilisez **pyuic** pour compiler le .ui venant de QtDesigner

**Étape 3** - Utilisez l'**Éditeur QGIS** disponible en cliquant sur l'icône correspondante dans la console Python pour utiliser la class Python générée par **pyuic** et afficher la fenêtre. Par exemple si **pyuic** m'a généré le fichier *myfile_ui.py*:

```` python
# -*- coding: utf-8 -*-

from PyQt4 import QtGui
from myfile_ui import Ui_MyDialog

class MyDialog(QtGui.QDialog, Ui_Dialog):

    def __init__(self):
        QtGui.QDialog.__init__(self)
        self.setupUi(self)

d = MyDialog()
d.show()
````

Note : ne pas oublier d'indiquer au PYTHONPATH de l'interpréteur Python où se trouve le fichier *myfile_ui.py* :

```` python
>>> import sys
>>> sys.path.append("C:/Users/Paul/devel")
````

**Étape 4** - Connectez les boutons pour afficher "OK" et "Cancel" lors du clic


Partie 2
--------

- PyQt
- QThread

Objectif : créer une fenêtre permettant de sélectionner bano.csv, de projeter les données et d'indiquer l'évolution grâce à une barre de progression

TODO
