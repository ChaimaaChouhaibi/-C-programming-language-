//Logical Operators //العمليات المنطقية

#include <stdio.h>

int main() {
    int a = 5 , b = 5 , c = 10, resultat;

    // AND Operator ( && )  تتطلب أن تكون كل الشروط صحيحة
    resultat = (a == b) && (a > c) && (a + 1 > 5);
    printf("%d\n",resultat); //False 0 ( 1 && 0 = 0)

    // OR Operator ( || )  تتطلب أن يكون أي شرط صحيح
    resultat = (a == b) || (a > c)  || (a + 1 < 5);
    printf("%d\n",resultat); //True 1

    // NOT Operator ( ! )  يعكس النتيجة المنطقية
    resultat = !((a < b) || 1); 
    printf("%d\n",resultat); //False 0

    resultat = (a < b) || 0;  //false 0
    printf("%d\n", !resultat);  //Not //true 1

}