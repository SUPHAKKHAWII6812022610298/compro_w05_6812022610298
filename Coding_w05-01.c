#include <stdio.h>

int main() {
    char name;              //กำหนด ค่าตัวแปรชื่อตัวอักษรอังกฤษตัวแรก
    int age;               //กำหนดค่าตัวแปรอายุ เป็นจำนวนเต็ม
     float weight;        //กำหนดค่าตัวแปรน้ำหนัก เป็นทศนิยม
    
    printf("Enter your name,  age, and weight (in K.G)(e.g. S 20 74.6): ");      //แสดงข้อมุูล โดยให้ทำการคีย์ข้อมูลลงในช่อง TERMINAL 
    scanf("%c %d %f", &name, &age, &weight);                                    //กำหนดให้ตัวแปรแต่ละตัวแสดงว่าเป็นแบบที่กำหนด
    

    printf("Student   %c", name);                     //แสดงข้อมูล เป็นชื่ออังกฤษตัวแรก 
   printf(" is  %d years old.\n", age);              //แสดงข้อมูล เป็นอายุและขึ้นบรรทัดใหม่
 printf(" His weigth is  %.1f kg.",  weight);       //แสดงข้อมูล เป็นค่าน้ำหนัก
    
return 0;                                          //จบการทำงาน
}