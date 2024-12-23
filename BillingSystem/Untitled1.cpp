#include <stdio.h>
#include <string.h>

struct list {
    int id;
    char itemName[30];
    int price;
};

// Function to display the bill
void display(struct list l[], int size, char cName[], char cAddress[]) {
    int total = 0;
    printf("\n\n\n\n");
    printf("\t Neluni Store \n");
    printf("\t ------------  \n");
    printf("\n");
    printf("Name : %s \t Address : %s \n", cName, cAddress);
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("Id : %d\t", l[i].id);
        printf("Name : %s\t", l[i].itemName);
        printf("Price : %d\n", l[i].price);
        printf("------------------------------------------------\n");
        total += l[i].price;
    }
    printf("\t\tTotal : %d\n", total);
    printf("\n\n");
    printf("\t Thanks for Visiting  \n");
    printf("\n\n");
}

int main() {
    printf("Hello ..........\n");
    char Name[30];
    char Address[30];
    int totalItems;

    printf("Enter your name : \t");
    scanf("%s", &Name);  

    printf("Enter your address : \t");
    scanf("%s", &Address);  // Removed '&'

    printf("Enter total items : \t");
    scanf("%d", &totalItems);
    printf("\n");

    // Struct array
    struct list l[totalItems];

    // Insert items
    for (int i = 0; i < totalItems; i++) {
        l[i].id = i + 1;
        printf("Enter %d item name  :\t", i + 1);
        scanf("%s", l[i].itemName);  // Removed '&'
        printf("Enter price  : \t");
        scanf("%d", &l[i].price);
    }

    // Call display function
    display(l, totalItems, Name, Address);
}

