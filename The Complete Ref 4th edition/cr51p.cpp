#include <stdio.h>

struct employee
{
    char name[80];
    int age;
    float wage;
};

int main()
{
    struct employee emp;

    // Assign values
    printf("Enter name: ");
    scanf("%79s", emp.name);

    printf("Enter age: ");
    scanf("%d", &emp.age);

    printf("Enter wage: ");
    scanf("%f", &emp.wage);

    // Display values
    printf("\nEmployee Information:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Wage: %.2f\n", emp.wage);

    return 0;
}