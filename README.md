# Examen blanc

## Exercice 1:

1) Ecrire une fonction qui prend un caractère \( c \) en paramètre et renvoie 1 si c'est une espace et -1 si non

2) Ecrivez une fonction qui remplace les espaces d'une chaîne de charactères par des points, en n'oubliant pas d'utiliser la fonction de la question 1.

## Exercice 2:

On considère la structure suivante :

| typedef: struct Citoyen(    |
|---|
| char cin[30] ;    |
| char nom [30] ;    |
| char prenom[30];    |
| int age;    |
| struct Citoyen* osuiv;    |
| ) Citoyen ;    |

Les fonctions à rédiger sont les suivantes:

1) Une fonction **citoyen* ajouter_debut** (Citoyen * head) permettant d’ajouter un citoyen crée au début de la liste chainée en initialisant les element du citoyen.

1) Une fonction **citoyen* ajouter_fin** (Citoyen * head) permettant d’ajouter un citoyen crée à la fin de la liste chainée en initialisant les element du citoyen.

3) Une fonction **void Afficher** (Citoyen * head) qui affiche tous les citoyen.

4) Une fonction **int Adultes** (Citoyen * head,int x) qui retourne le nombres des citoyen ayant un age supérieur au argument x.
