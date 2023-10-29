#include <stdio.h>


int main(){
    
    char name[100],section[50],string[50];
    int age;

    printf("Enter string: ");
    gets(string);
    printf("Entered string is: ");
    puts(string);

    printf("What is your name? ");
    
    scanf("%[^\n]s",name);
    
    printf("Your name is %s",name);
    

    printf("\nWhat is your age???? ");
    scanf("%d",&age);
    printf("Your age is %d",age);

    getchar();
    printf("\nWhat section do you work??? ");
    
    scanf("%[^\n]s",section); 
       
    printf("Your section is %s",section);
    


    printf("Here is your full Details:\n");
    printf("----------------------------------\n");
    printf(" ");
    printf(" ");
    printf("\nName: %s\nAge: %d\nSection: %s\n",name,age,section);
    printf("----------------------------------\n");
    return 0;
}