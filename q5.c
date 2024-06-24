#include <stdio.h>


struct House {
    int room_quantity;
    int established_year;
    char city[50];
};

int main() {
    int n;

    printf("Enter the number of houses: ");
    scanf("%d", &n);

    struct House houses[n];

    for(int i = 0; i < n; i++) {
        printf("Enter details for house %d:\n", i + 1);

        printf("Number of rooms: ");
        scanf("%d", &houses[i].room_quantity);

        printf("Established year: ");
        scanf("%d", &houses[i].established_year);

        printf("City: ");
        scanf("%s", houses[i].city); 
        printf("\n");
    }

    printf("Details of houses:\n");
    for(int i = 0; i < n; i++) {
        printf("House %d:\n", i + 1);
        printf("Number of rooms: %d\n", houses[i].room_quantity);
        printf("Established year: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city);
        printf("\n");
    }

    return 0;
}
