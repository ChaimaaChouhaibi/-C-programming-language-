#include <stdio.h>

int main (){
    int var1 = 100; // 2 byte or 4 => عدد صحيح طبيعي // format Specifier : %d or %i
    float var2= 12.3f; // 4 byte  =>|عدد عشري// format Specifier : %f 
    char var3 = 'A'; // 1 byte  =>  حرف واحد // format Specifier : %c
    double var4 = 100.50; // 8 byte // format Specifier : %lf

    printf("var1: %d\nvar2: %.2f\nvar3: %c\nvar4: %lf\n", var1, var2, var3, var4);
    printf("size of int type: %ibytes\n", sizeof(int)); // function sizeof
    printf("size of float type: %ibytes\n", sizeof(float));
    printf("size of double type: %ibytes\n", sizeof(double));
    printf("size of void type: %ibytes\n", sizeof(void));
    return 0;
}