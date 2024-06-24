#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    char role[50];
};

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));
    if (employees == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Role: ");
        scanf("%s", employees[i].role);

        printf("\n");
    }

    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Could not open file for writing\n");
        free(employees);
        return 1;
    }

    for(int i = 0; i < n; i++) {
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", employees[i].name);
        fprintf(file, "Role: %s\n", employees[i].role);
        fprintf(file, "\n");
    }

    fclose(file);

    free(employees);

    printf("Employee details written to data.txt successfully.\n");

    return 0;
}
