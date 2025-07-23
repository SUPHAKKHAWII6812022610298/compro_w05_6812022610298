#include <stdio.h>

int main() {
    char name;                //กำหนดตัวแปร เป็นชื่ออังกฤษตัวแรก 
    int age;                 //กำหนดตัวแปร เป็นตัวเลขจำนวนเต็ม
    float height;           //กำหนดตัวแปร เป็นตัวเลขทศนิยม
    char major;            //กำหนดตัวแปร เป็นชื่ออังกฤษตัวแรกของรายวิชานั้นๆ
    float grade;          //กำหนดตัวแปร เป็นตัวเลขของเกรด เป็นจุดทศนิยม
    char gradechar;      //กำหนดตัวแปร เป็นชื่ออังกฤษตัวแรกที่แทนเกรด
    
    printf("Enter your name,  age,  height (in cantimeters), major, grade, and gradechar (e.g. S 20 180.3 M 3.89 A): ");      //แสดงข้อมุูล โดยให้ทำการคีย์ข้อมูลลงในช่อง TERMINAL 
    scanf("%c %d %f %c %f %c", &name, &age, &height , &major ,&grade, &gradechar);                                           //กำหนดให้ตัวแปรแต่ละตัวแสดงว่าเป็นแบบที่กำหนด
    

    
    printf("  %c", name);                             //แสดงผลแทนชื่ออังกฤษตัวแรก
   printf(" is  %d years old.", age);                 //แสดงผลแทนตัวเลขจำนวนเต็ม
 printf(" and  %.1f centimeters tall.\n",  height);   // แสดงผลแทนความสูงเป็นทศนิยม
 printf("In subject %c",major);                       //แสดงผลแทนชื่อวิชา 
 printf(" ,K got %.2f which",grade);                  //แสดงผลแทนเกรด เป็นทศนิยม
 printf(" symbolized as '%c'",gradechar);             //แสดงผลแทนเกรด 'A'
 return 0;                                            //จบการทำงาน
}