#include <stdio.h>

int main() {
    char name[30];
    int age;
    float height;
    char major;
    float grade;
    char gradechar;
    
    printf("Enter your name,  age,  height (in cantimeters), major, grade, and gradechar (e.g. S 20 180.3 M 3.89 A): ");
    scanf("%c %d %f %c %f %c", &name, &age, &height , &major ,&grade, &gradechar);
    

    
    printf(" %c", name);
   printf(" is  %d years old.", age);
 printf(" and  %.1f centimeters tall.\n",  height);
 printf("In subject %c",major);
 printf(" ,K got %.2f which",grade);
 printf(" symbolized as '%c'",gradechar);
 return 0;
}