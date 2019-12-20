```
GIRARD Gaëlle & REILAND Valentine            L3 CMI UNIVERSITE DE STRASBOURG
BLESCH Eve & CERDAN Baptiste                                   Novembre 2019    
STEINMETZ Thomas & BACH Jeremy
```

# Projet d'IHM S5 automne : **Timebomb**
[Sujet du projet](https://osr-etudiant.unistra.fr/~nmallet/Projet-IHM-L3S5P-19-20/scope_statement.html) <br>
<a href='manuel_utlisateur.pdf'>Manuel utilisateur</a><br>       
La dernière version de notre projet est sur la branche **finale** de notre dépot git -> https://git.unistra.fr/ggirard/ihm-timebomb/tree/finale

## Pré-requis

Pour assurer le bon fonctionnement de notre jeu, il vous faudra :
* Une version de Qt supérieure ou égale à la version **4.8.1** (basé sur **Qt 5.12.2** GCC 8.3.0).
* Une **connexion internet** si vous souhaitez jouer en multijoueur.

## Compilation et exécution du jeu

Pour jouer uniquement en **local** (sur un ordinateur) :  
* Soit vous exécutez le script en écrivant la ligne de commande **bash ./jouerenlocal.sh** dans votre terminal (assurez vous bien d'être à la racine de ce projet) <br>

* Ou alors vous suivez ces différentes étapes :
1. Rendez-vous dans le dossier **Code > timebomb**
2. Exécutez la commande **make**
3. Si une erreur se produit lors de la compilation, effacez le fichier **Makefile** puis ouvrez un terminal dans ce dossier afin d'entrer la commande **qmake** (cette dernière génèrera un autre makefile) puis recommencez la phase **2**
4. Exécutez la commande **./timebomb**
5. Amusez-vous

Pour jouer également en **ligne** (sur plusieurs ordinateurs):
* Soit vous exécutez le script en écrivant la ligne de commande **bash ./jouerenligne.sh** dans votre terminal (assurez vous bien d'être à la racine de ce projet)  

* Ou alors vous suivez ces différentes étapes :
1. Rendez-vous dans le dossier **Code > timebomb >> server**
2. Exécutez la commande **make**
3. Si une erreur se produit lors de la compilation, effacez le fichier **Makefile** puis ouvrez un terminal dans ce dossier afin d'entrer la commande **qmake** (cette dernière génèrera un autre makefile) puis recommencez la phase **2**
4. Exécutez la commande **./timebomb**
5. Rendez-vous dans le dossier **Code > timebomb >> server**
6. Exécutez la commande **make**
7. Si une erreur se produit lors de la compilation, effacez le fichier **Makefile** puis ouvrez un terminal dans ce dossier afin d'entrer la commande **qmake** (cette dernière génèrera un autre makefile) puis recommencez à partir de la phase **6**
8. Exécutez la commande **./timebomb**
9. Amusez-vous
