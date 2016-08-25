Python (1)
==========

**C'est quoi ?**

* un langage de programmation interprété
* multi-plateformes
* typage dynamique fort
* gestion automatique de la mémoire
* première version publiée en 1991 par Guido Van Rossum

.. image:: imgs/gvr.jpg
  :width: 150pt
  :align: center

Python (2)
==========

|
**Console Python**

* permet d'explorer la syntaxe
* d'avoir de l'aide sur les commandes python
* de debugger des programmes simples

.. code-block:: bash

  $ python
  Python 2.7.3 (default, Mar 13 2014, 11:03:55)
  [GCC 4.7.2] on linux2
  Type "help", "copyright", "credits" or "license" for more information.
  >>> 1 + 1
  2
  >>> help


Python (3)
==========

**Installer Python (version 2.7)**

|
Sous une distribution Linux Debian-based :

.. code-block:: bash

  # installer le gestionnaire de paquets python
  sudo apt-get install python-pip
  # mise à jour du gestionnaire de paquets
  sudo pip install -U pip
  # installation de ipython
  sudo pip install ipython

|
Sous Windows & MacOSX :

=> Distribution Anaconda  `<http://continuum.io/downloads>`_


Python (4)
==========

|
**Éditeurs**

- Eclipse - pydev
- notepad++
- pycharm
- sublimetext
- emacs
- vi(m)

|
`<https://wiki.python.org/moin/PythonEditors>`_


Python (5)
==========

|

**DÉCOUVERTE DE L'ENVIRONNEMENT**

|

.. image:: imgs/exo.png
  :width: 200pt
  :align: center


Python (6)
==========

**Syntaxe générale - l'indentation**

L'indentation délimite les blocs de code

.. code-block:: python

    for num in range(2):
    ....if num == 0:
    ........print 'one'
    ....else:
    ........print 'two'

    def myfunc(arg):
    ....return arg

    print myfunc('Starting')

Ne pas mixer espaces et tabulations (convention : **4 espaces**)

L’interpréteur Python s’appuie sur l’indentation pour déterminer la structure du code


Python (7)
==========

**Syntaxe générale - les commentaires**

Avec **#** :

.. code-block:: python

   # this is the first comment
   SPAM = 1  # and this is the second comment
   STRING = "# This is not a comment."

Ou **"""** :

.. code-block:: python

    """
    i will
    print
    some stuff now
    """
    print "stuff"

Les **"""** sont le plus souvent utilisé pour les *docstring*.


Python (8)
==========

**Syntaxe générale - les variables**

|
Variable : association entre un symbol et une valeur

|
En Python : une variable est une référence à un objet en mémoire qui n'a pas
besoin d'être typé (typage dynamique).

.. code-block:: python

    >>> a = 1
    >>> b = 2
    >>> a
    1
    >>> a = 'un'
    >>> a
    'un'


Python (9)
==========

|
**Instruction**

* Expression : évaluation et retour du résultat
* Affectation : evaluation et stockage du résultat dans une variable

|
.. code-block:: python

   >>> # Ceci est une expression
   >>> 2+7
   9
   >>> # Ceci est une affectation
   >>> var = 2+7


Python (10)
===========

**Tout est objet**

En Python, tout est objet : chaînes, entiers, booléens, etc...

Les fonctionnalités applicables à chaque objet y sont directement attachées.

.. code-block:: python

    >>> a = 'chaine'
    >>> dir(a)
    [...
    'capitalize',
    'center',
    'count',
    'encode',
    'endswith',
    'expandtabs',
    'find',
    'format',
    ...
    'isnumeric',
    'isprintable',
    'isspace',
    'istitle']


Python (11)
===========

|
**Les types simples**

.. code-block:: python

    # integer
    a = 1

    # float
    b = 2.

    # long
    c = g = 1301L

    # complex
    d = 2 + 3j

    # boolean
    e = a == b

    [type(v) for v in a, b, c, d, e]
    [int, float, long, complex, bool]



Python (12)
===========

**Chaînes de caractères**

Concaténer :

.. code-block:: python

    # Éviter d'utiliser
    a = ch1 + ch2 + ch3

    # la seule méthode à utiliser
    a = '...'.join((ch1, ch2, ch3))

Formater :

.. code-block:: python

    # formatage de chaînes
    '%s%s' % ('os', 'landia')

    # nouvelle méthode
    '{}{}'.format('os', 'landia')


Python (13)
===========

**list et tuple**

*list* : séquence d'objets ordonnés modifiable

*tuple* : séquence d'objets ordonnés NON modifiable

.. code-block:: python

    t = (1, 2., 3+1j, True)

    # ajout d'un élément
    l = list(t)
    l.append('toto')

    # slice = [start:end:step]
    l[2]  # accès direct à un élément

    # extraction de sous liste
    l[2:]  # extraction de sous listes

    l[::2]  # extraire les éléments par pas de 2

    # concaténer des listes
    l += [2, 3, 4]  # concaténer des listes


Python (14)
===========

**Compréhension de liste**

|
Permet de construire des listes de façon concise ET optimisée

.. code-block:: python

    # manière traditionnelle
    l = []
    for num in range(10):
        if num % 2 == 0:
            l.append(num ** 2)

    # list comprehension
    # [expression for element in liste if predicat]
    l = [num ** 2 for num in range(10)]

    # même chose avec prédicat
    l = [num ** 2 for num in range(10) if num % 2 == 0]


Python (15)
===========

**set et frozenset**

|
*set* : conteneurs d'objets uniques non ordonnés modifiable

*frozenset* : conteneurs d'objets uniques non ordonnés NON modifiable

.. code-block:: python

    s1 = {'a', 'b', 'c', 'd', 'e'}

    s2 = {'a', 'b', 'f'}

    s1 | s2  # union

    s1 - s2  # différence

    s1 & s2  # intersection

    s1.add('t')  # ajout d'élément


Python (16)
===========

**dict**

Conteneurs qui associent une valeur à une clé

.. code-block:: python

    d = {'a': 1, 'b': 2., 'c': 3+1j, 'd': t}
    d['a']
    d['e'] = 999  # insertion d'une pair clé valeur

    # dict comprehension
    {'%s' % num: num for num in range(10)}

    # mixer des dictionnaires
    first = {'env': 'snap', 'domain': 'osl.com'}
    second = {'env': 'prod', 'domain': 'osl.com'}
    first.update(second)
    first

    # savoir si une clé est dans le dictionnaire ?
    if 'env' in first:
        print 'Found it!'


Python (17)
===========

**Logique**

.. code-block:: python

    # Intersection
    x and y

    # Union:
    x or y

    # Négation:
    not x

Toute expression valant False, 0, None ou tout type complexe vide sera
convertie en False dans une expression logique.

.. code-block:: python

  a = None
  bool(a)


Python (18)
===========

|
**Les structures de contrôle - if**

|
.. code-block:: python

    if x < 0:
        print 'X est négatif'
    elif x == 0:
        print 'X est nul'
    elif x > 0:
        print 'X est positif'
    else:
        print 'Hum...'


Python (19)
===========


**Structure de contrôle - for**

|
Parcourt les éléments d'une séquence :

.. code-block:: python

    a = ['cat', 'window', 'defenestrate']
    for x in a:
        print x, len(x)

|
Parcourt avec un index :

.. code-block:: python

    a = ['cat', 'window', 'defenestrate']
    for i in range(len(a)):
        print a[i], len(a[i])


Python (20)
===========


**Structure de contrôle - for**

Avec *enumerate* :

.. code-block:: python

    a = ['cat', 'window', 'defenestrate']
    for i, x in enumerate(a):
       print i, x, len(x)

Avec les *list comprehension*:

.. code-block:: python

    [2**i for i in range(10)]

Avec les *dict* :

.. code-block:: python

  a = {"couleur": "bleu", "annee": 1985, "immatriculation": "1337BB34"}
  for k, v in a.iteritems():
     print k, v


Python (21)
===========

|
**Structure de contrôle - while**

|
Répète ses instructions tant qu'une condition est vraie, c'est à dire jusqu'à
ce que cette même condition soit fausse :

.. code-block:: python

    x = raw_input('Entrez un entier : ')

    while x < 10:
       print 'trop petit...'
       x = raw_input('Entrez un entier : ')


Python (22)
===========

**Fonction - définition**

Ensemble d'instructions auquel on affecte un nom :

.. code-block:: python

    def mult2(x):
        return x*2

|
Signature d'une fonction :

* nom
* types d'arguments
* type de retour


Python (23)
===========

|
**Fonction - appel**

.. code-block:: python

    >>> n = 354
    >>> mult2(n)
    708
    >>> var = mult2(n) + 5

Les arguments peuvent être nommés et optionnels :

.. code-block:: python

    def beethov(notes, play=False):
        if play:
            sonate.play()


Python (24)
===========

**Module - import**

But : organiser son programme en fichiers en vue de réutilisation

Un fichier *.py*  =  un module python

Dans un terminal :

.. code-block:: bash

    $ echo "print 'hello'" > mymodule.py
    $ python mymodule.py
    'Hello'

Dans l'interpréteur :

.. code-block:: python

  >>> import mymodule
  'Hello'


Python (25)
===========

**Module - fonctions**

Si des fonctions sont définies dans un module :

.. code-block:: python

    import random
    random.uniform(0, 5)

On peut importer des objets spécifiques de l'intérieur d'un module :

.. code-block:: python

    from random import uniform
    uniform(0, 5)

On peut réassigner un nom local à une des fonctions du module :

.. code-block:: python

    import random
    u = random.uniform
    u(0, 5)


Python (26)
===========

**Package**

Regroupement de modules

Dans un répertoire nommé suivant le nom du package :

* des modules
* un fichier *__init__.py*

Pour l'utiliser :

.. code-block:: python

  from mypackage.mymodule import myfunction
  myfonction(.......)


Python (27)
===========

**main**

Script exécutable :

.. code-block:: python

  import sys

  if __name__ == "__main__":
      print(len(sys.argv))


Python (28)
===========

**Entrées/Sorties - open**

|
La fonction **open()** prend en premier argument le chemin d'accès au fichier et
en deuxième argument le mode qui peut être :

* *'r'* : pour lire dans le fichier,
* *'w'* : pour écrire à partir du début du fichier (écrase le contenu précédent),
* *'a'* : pour écrire à la fin du fichier (en ajoutant au contenu précédent).

.. code-block:: python

   f = open('/tmp/workfile', 'r')
   f.close()


Python (29)
===========

**Entrées/Sorties - readline**

|
Lire un fichier ligne par ligne:

|
.. code-block:: python

    f = open('/tmp/workfile', 'r')
    for line in f:
       print line

    f.close()


Python (30)
===========

**Entrées/Sorties - write**

|
Pour écrire dans un fichier :

.. code-block:: python

   f = open('/tmp/workfile', 'w')
   f.write('This is a test\n')
   f.close()

|
Note : les opérations autorisées dans le fichier dépendent du mode dans lequel
le fichier est ouvert.


Python (31)
===========

**Les bonnes pratiques**

PEP8 : `<http://www.python.org/dev/peps/pep-0008/>`_

* 4 espaces par niveau d'indentation.
* Pas de tabulations.
* Ne jamais mixer des tabulations et des espaces.
* Un saut de ligne entre les fonctions.
* Deux sauts de ligne entre les classes.
* essayer de garder des lignes de moins de 80 caractères (favorise une lecture verticale du code)
* nommage des variables à 3 lettres minimum pour plus de compréhension
* miniscule avec séparateur '_' pour les méthodes de classe
* MAJUSCULE pour les constantes


Python (32)
===========

|
**Références**


`<https://docs.python.org/2.7/library/index.html>`_

`<http://docs.python-guide.org/en/latest/>`_

|
Dans une console :

.. code-block:: python

    import this

Python (33)
===========

|

**EXERCICE 1**

|

.. image:: imgs/exo.png
  :width: 200pt
  :align: center
