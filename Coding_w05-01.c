#include <stdio.h>

int main() {
    char name;
    int age;
     float weight;

    printf("Enter your name,  age, and weight (in K.G)(e.g. S 20 74.6): ");
    scanf("%c %d %f", &name, &age, &weight);
    

    // printf("You entered:\n");
    printf("Student   %c", name);
   printf(" is  %d years old.\n", age);
 printf(" His weigth is  %.1f kg.",  weight);
    
return 0;
}