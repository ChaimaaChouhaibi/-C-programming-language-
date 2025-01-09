#include <stdio.h>

int main (){
    int var1 = 100; // 2 byte or 4 => عدد صحيح طبيعي // format Specifier : %d or %i
    float var2= 12.3f; // 4 byte  =>|عدد عشري// format Specifier : %f 
    char var3 = 'A'; // 1 byte  =>  حرف واحد // format Specifier : %c
    double var4 = 100.50; // 8 byte // format Specifier : %lf
    //Type Specifiers
    short int var5;
    long int var6;
    long long int var7;
    long double var8;

    //Type Modifiers
    unsigned int var9 = 20; //it accepts only positive numbers and does not accept negative numbers
    signed int var10 = -300; //Accepts positive and negative numbers

    printf("var1: %d\nvar2: %.2f\nvar3: %c\nvar4: %lf\n", var1, var2, var3, var4);

    // function sizeof
    printf("size of int type: %ibytes\n", sizeof(int)); 
    printf("size of float type: %ibytes\n", sizeof(float));
    printf("size of double type: %ibytes\n", sizeof(double));
    printf("size of void type: %ibytes\n", sizeof(void));

    // Type Specifiers
    printf("size of int type: %ibytes\n", sizeof(var5)); 
    printf("size of int type: %ibytes\n", sizeof(var6)); 
    printf("size of int type: %ibytes\n", sizeof(var7)); 
    printf("size of double type: %ibytes\n", sizeof(var8)); 

    // Type Modifiers
    printf("var9: %u\nvar10: %i", var9, var10);
    return 0;
}