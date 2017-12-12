Exercice 2 : Python
===================


Partie 1
--------

- fonction
- docstring


**Étape 1** - Éditer le fichier *proj.py* et utiliser une fonction de
              reprojection

**Étape 2** - Écrire la docstring associée

**Étape 3** - Utilisez l'interpréteur Python de QGIS pour exécuter le script
              via:

````
>>> import sys
>>> sys.path.append("C:/Users/Paul/git/how_to_qgis/python/exercices/ex2")
>>> import proj
.....
````

**Note**

Pour forcer le rechargement un module dans la console QGIS:

```` python
import mymodule
import imp
imp.reload(mymodule)
````


Partie 2
--------

- read
- yield
- enumerate


**Étape 1** - Compléter la fonction *transform_csv* pour qu'elle affiche les
              coordonnées x et y de toutes les lignes du fichier *bano-75.csv*.

**Étape 2** - Utiliser une fonction de reprojection sur les coordonnées x/y
              extraite dans *transform_csv*.

**Étape 3** - Utiliser un générateur dans *transform_csv* pour renvoyer ces
              coordonnées x/y reprojetées.

**Étape 4** - Utiliser la fonction *transform_csv* pour afficher les
              coordonnées x/y projetées ainsi que le numéro de la ligne
              correspondante.


Partie 3
--------

- class
- property decorator
- membre privé


**Étape 1** - Compléter le getter de la classe *Projector*.

**Étape 2** - Compléter le setter de la classe *Projector* et lever une exception
              si le nom du fichier donné n'existe pas.

**Étape 3** - Compléter la méthode *run* de la classe *Projector* pour qu'elle
              utilise la fonction *transform_csv* sur le fichier *self._filename*.

**Étape 4** - Modifier le code pour qu'en sortie de *run* on obtienne un fichier
              nommé *bano-75_projected.csv* contenant les même champs que
              *bano-75.csv* mais avec les x/y projetés.


Partie 4
--------

- module
- package


**Étape 1** - Créer un package nommé *projector*.

**Étape 2** - Créer un script *run.py* qui utilise la classe *Projector*
              du package *projector*.
