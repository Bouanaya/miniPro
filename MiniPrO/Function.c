#include <stdio.h>
#include "Function.h"
#include <string.h>


#define MAX_BOOKS 100

typedef struct {
    char title[50];
    char author[50];
    float price;
    int quantity;
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount < MAX_BOOKS) {
        printf("Titre du livre: ");
        scanf(" %[^\n]", library[bookCount].title);
        printf("Auteur du livre: ");
        scanf(" %[^\n]", library[bookCount].author);
        printf("Prix du livre: ");
        scanf("%f", &library[bookCount].price);
        printf("Quantite en stock: ");
        scanf("%d", &library[bookCount].quantity);
        bookCount++;
    } else {
        printf("Stock plein!\n");
    }
}

void displayBooks() {
    for (int i = 0; i < bookCount; i++) {
        printf("Titre: %s\n Auteur: %s\n Prix: %.2f\n Quantite: %d\n", library[i].title, library[i].author, library[i].price, library[i].quantity);
    }
}

void updateQuantity() {
    char title[30];
    printf("Titre du livre à mettre à jour: ");
    scanf(" %[^\n]", title);
    for (int i = 0; i < bookCount; i++) {
        
        if (strcmp(library[i].title, title) == 0) {
            printf("Nouvelle quantite: ");
            scanf("%d", &library[i].quantity);
            return ;
        }
      
    }
    printf("Livre non trouve!\n");
}

void deleteBook() {
    char title[30];
    printf("Titre du livre à supprimer: ");
    scanf(" %[^\n]", title);
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, title) == 0) {
            for (int j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];
            }
            bookCount--;
            return;
        }
    }
    printf("Livre non trouve!\n");
}

void totalBooks() {
    int total = 0;
    for (int i = 0; i < bookCount; i++) {
        total += library[i].quantity;
    }
    printf("Nombre total de livres en stock: %d\n", total);
}