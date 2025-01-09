//As the name suggests-something that never changes 
//Once defined cannot be modified later in the code 

#include <stdio.h>

// Defining Constant Method 1
#define DAYS_IN_WEEK 7

int main(){

// Defining Constant Method 2
    const double PI = 3.14;

    printf("Days In Week: %d\nPI: %.2lf\n", DAYS_IN_WEEK, PI);
    //Predifined Macros
    printf("Date of today: %s\n", __DATE__); 
    printf("Time: %s\n", __TIME__);
    printf("Current file: %s\n", __FILE__);
    printf("Current line: %d\n", __LINE__);

    return 0;
}