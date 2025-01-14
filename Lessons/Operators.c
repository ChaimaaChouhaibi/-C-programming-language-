#include <stdio.h>

int main(){
    //Arithemtic Operators
    int a=6, b=4, resultat;

    //Addition Operator
    printf("a + b = %d\n", a + b );

    //Subraction Operators
    printf("%d - %d = %d\n", a, b, a - b );

    //Multiplication Operator
    resultat = a * b;
    printf("%d * %d = %d\n", a, b, resultat);

    //Division Operator
    printf("%d / %d = %d\n", a, b, a / b );

    //Module Operator
    printf("%d %% %d = %d\n", a, b, a % b );

    //Increment (++a) and Decrement (--a) Operators
    printf("++a = %d\n", ++a); //Increment Operator //Prefix (PreIncrement) (yzid +1 9bl istikhdam) a = 7
    printf("a++ = %d\n", a++);  //Increment Operator //Postfix (PostIncrement) (yzid +1 ba3d istikhdam) a = 7
    printf("a = %d\n", a); // a = 8
    printf("--b = %d\n", --b); //Decrement Operators //Prefix (PreDecrement)  //Prefix (kyn9s -1 9bl istikhdam) b = 3
    printf("b-- = %d\n", b--); //Decrement Operators //Postfix (PostDecrement) //Postfix (kyn9s -1 ba3d istikhdam) b = 3
    printf("b = %d\n", b);  // b = 2


    //Assignment Operators
    int d = 5, e = 6, r = 10;

    r+=3; //r = r + 3 // r = 10 + 3
    printf("r = %d\n", r); //r = 13

    r-=3; //r = r - 3 // r = 13 - 3
    printf("r = %d\n", r); // r = 10

    r*=3; //r = r * 3 // r = 10 * 3
    printf("r = %d\n", r); //r = 30

    r/=3; //r = r / 3 // r = 30 / 3
    printf("r = %d\n", r); // r = 10

    r%=3; //r = r % 3 // r = 10 % 3
    printf("r = %d\n", r); // r = 1


    return 0;

}