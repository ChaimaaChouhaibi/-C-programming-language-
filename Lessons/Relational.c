#include <stdio.h>

int main (){
    
    //Relational Operators المقارنة
    
    int a = 5, b = 5, c = 10;

    // == Egual to 
    printf("a == b : %d\n", a == b); //True 1 

    // != Not Egual to 
    printf("a != b : %d\n", a != b); //False 0

    // > Greater than أكبر من
    printf("c > a : %d\n", c > a); //True 1

    // < Less than اصغر من
    printf("c < b : %d\n", c < b); //False 0

    // >= Greater than or equal to  أكبر من أو يساوي
    printf("b >= a : %d\n", b >= a); // True 1

    // <= Less than or equal to اصغر من أو يساوي
    printf("b <= c : %d\n", b <= c); //True 1

    return 0;
}