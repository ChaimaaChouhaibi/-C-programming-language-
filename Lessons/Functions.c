#include<stdio.h>

int main(){ 

  //Outputs Function //اخراج
    //printf
    char name [] = "laila";
    printf("Hello %s and %s, your age is %d\n", "Chaimaa", name , 21);

    //Puts : Put String
    puts("Welcome"); 
    puts(name); 

  //Inputs Functions //ادخال
    //Scanf 
    int age;
    char fullName [40];
    scanf("%d\n%[^\n]", &age, fullName); //White your age 
    printf("Your age is %d\nYour name is %s\n", age, fullName); 
    // scanf("%[^\n]", fullName);
    // printf("Your name is %s", fullName);

    //Gets : Get String
    char study [20];
    gets(study);
    puts(study);
    
    return 0;
}