#include<stdio.h>
int main(){

char name[100],section[50],per[50];
int age;
printf("Input your name please: ");
scanf("%[^\n]s",name);
printf("Your name is %s\n",name);

printf("Write down your age: ");
scanf("%d",&age);
printf("Your age is: %d\n",age);

getchar();

printf("What is your section: ");
scanf("%[^\n]s",section);
printf("Your section is: %s",section);

//printf("\nHow do you think you can preform here?");
//fflush(stdout);
//gets(per);
//printf("\nYour performance is ");
//puts(per);

return 0;
}
