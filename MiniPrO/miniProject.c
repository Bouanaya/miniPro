#include <stdio.h>
#include "Function.h"
#include <string.h>


 

int main() {
    int choice;
    do {
        //menu principal
   printf(" _________________________________________________________________\n");
   printf("| -----------------------------------------------------------     |\n");
   printf("| |         BIENVENUE A VOTRE STOCK DE LIVRES                |    |\n");
   printf("| -----------------------------------------------------------     |\n");
   printf("|                                                                 |\n");
   printf("| |--------------[Voici le menu principal]-----------------|      |\n");
   printf("|_1). Ajouter un livre au stock.:                                 |\n");
   printf("|_2). Afficher tous les livres disponibles. :                     |\n");
   printf("|_3). Mettre à jour la quantite d'un livre. :                     |\n");
   printf("|_4). Supprimer un livre du stock. :                              |\n");
   printf("|_5). Afficher le nombre total de livres en stock.:               |\n");
   printf("|_6). Rechercher un livre . :                                     |\n");
   printf("|_7). Quitter :                                                   |\n");
   printf("|_________________________________________________________________|\n");
   printf("\n");
   printf("Utilisez les nombres pour choisir votre choix :\n");
   printf("\n");
   printf("Choisissez une option : ");
   scanf("%d",&choice);
        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: updateQuantity(); break;
            case 4: deleteBook(); break;
            case 5: totalBooks(); break;
            case 6: break;
            default: printf("Option invalide!\n");
        }
    } while (choice != 6);
    return 0;
}
