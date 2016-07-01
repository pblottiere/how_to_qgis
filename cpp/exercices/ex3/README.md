Exercice 3 : QT
===============

Partie 3.1
----------

- slots/signaux
- QApplication
- widgets QTextEdit / QPushButton
- layout

````
> cd exercices/ex3/part1
> mkdir build && cd build
> cmake .. && make
> ./src/bin/hello
````

**Question 1** : Rajouter un QPushButton dans le layout.

**Question 2** : Cabler les slots/signaux pour qu'un click sur le bouton ferme l'application.

Partie 3.2
----------

- linguist
- CMake pour QT
- Q_OBJECT
- signaux/slots
- tests unitaires

````
> cd exercices/ex3/part2
> mkdir build && cd build
> cmake .. && make
> ./src/bin/memo ~/memo.txt fr
````

**Question 1** : Utiliser linguist pour éditer le fichier texts_jp.ts.

**Question 2** : Ajouter le support de la langue japonaise pour l'application.

**Question 3** : Créer un outil permettant de lire/sauvegarder un fichier. Suivre l'architecture MVC mise en place.
