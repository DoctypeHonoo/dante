<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174786017-22a6cf6e-9dd4-462f-bd44-f7b5af03167d.png" />
</p>
<h1 align="center">
   Dante's Star
</h1>

---

## Motivation : 

Le Lemin est un projet de milieu d'année à Epitech à réaliser en duo, dont le principe est de créer un générateur et un solveur de labyrinthe.

---

## Description :

Le but de ce projet est de générer des labyrinthes (dans un temps imparti), les résoudre (dans un temps imparti) et afficher la solution.
Le projet va donc être séparé en deux majeurs parties, en premier la création des labyrinthes, et en deuxième leur résolution. 

---

## Fonctions Autorisées : 

- Fonctions système
- libC

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/dante.git
$ cd dante
$ make
```
Les binaires se trouveront alors dans leur dossiers respectifs, et il vous suffira de les lancer comme ceci : 
```bash
$ ./generator/generator x y [perfect]
$ ./solver fichier
```
Pour le générateur, les x et y corresponde à la taille qu'aura le labyrinthe, et si perfect est ajouter en dernier paramètre, alors le labyrinthe n'aura qu'une seul et unique solution.
Pour le solveur il suffit de donner un fichier contenant un labyrinthe créé par le generateur.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174789493-da2506b8-2dc9-4906-8013-61e1f6a96a81.png">
  <img src="https://user-images.githubusercontent.com/91092610/174789673-22d3fc90-8805-4a1a-897e-938168f02e99.png">
</p>

---

## Comment l'utiliser ? : 

Notre lemin possède un système de parsing complet mais il ne possède malheureusement pas encore l'algorithme qui va permettre de calculer l'itinéraire des fourmis.

<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174785200-495420df-b660-46d6-821c-bf4df6e19674.png">
</p>
