<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174786017-22a6cf6e-9dd4-462f-bd44-f7b5af03167d.png" />
</p>
<h1 align="center">
   Dante's Star
</h1>

---

## Motivation : 

Le Lemin est un projet de milieu d'année à Epitech à réaliser à 4, dont le principe est de créer un algorithme qui va calculer la manière la plus rapide pour que des fourmis arrive d'une certaine zone de la fourmilière à une autre, sachant qu'elles ne peuvent pas être plus d'une dans une "pièce" de la foumilière en même temps.

---

## Description :
qu
La fourmilière est donc représenté avec des pièces, connecté entre elles par des tunnels. Si deux pièces sont relié par un tunnel, alors une fourmi peut naviguer entre celles-ci.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174772818-a1645ccd-dd43-405d-9115-6b88a4f94210.png">
</p>
Le programme va tout d'abord prendre un fichier contenant plusieurs informations en paramètre, et va l'analyser afin de ne garder que ce qu'il souhaite : 
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174781673-d3e96357-fca7-47b4-8070-3cd3afe871a2.png">
</p>
Dans cette exemple, le premier chiffre correspond au nombre de fourmi, les lignes commençant par un "#" sont des commentaires, celles commençant par "##" sont les pièces de départ et d'arrivée. Pour finir les ligne avec trois chiffres sont les pièces (le premier chiffre correspond au nom de la piece et les deux suivants sont sa position) et les lignes contenant un "-" sont les tunnels qui indique les passages entre les pièces (les chiffres avant et après le "-" sont les noms des pièces).

Après cela, le but du programme va donc être d'afficher les données recupérées dans un certain ordre, suivis de tout les mouvements nécessaires afin que les fourmis atteignent leur destination.

<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174784133-95516d73-df2e-4450-bf3d-541f4dc39b25.png">
</p>

---

## Fonctions Autorisées : 

- read, write, malloc, free, getline

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/lemin.git
$ cd lemin
$ make
```
Le binaire se trouvera alors à la racine du projet, et il vous suffira de le lancer comme ceci : 
```bash
$ ./lem_in [fichier]
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174784855-25ca060b-0305-43a5-ae40-384112362879.png">
</p>

---

## Comment l'utiliser ? : 

Notre lemin possède un système de parsing complet mais il ne possède malheureusement pas encore l'algorithme qui va permettre de calculer l'itinéraire des fourmis.

<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174785200-495420df-b660-46d6-821c-bf4df6e19674.png">
</p>
