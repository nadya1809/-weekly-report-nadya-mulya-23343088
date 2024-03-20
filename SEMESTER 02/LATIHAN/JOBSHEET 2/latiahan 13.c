#include <stdio.h>

struct person
{
    int age;
    float weight;
};

int main()
{
    struct person person1;
    struct person *personPtr;

    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("Weight: %f\n", personPtr->weight);

    return 0;
}
