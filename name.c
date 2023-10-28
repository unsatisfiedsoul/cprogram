#include<stdio.h>
#include<string.h>
int main(){

printf("What is your name???? ");
char name[100],c;
char sect[100];
int age;
scanf("%[^\n]s",name);
//printf("Your name is %s",name);
c=getchar();
printf("\nWhich section do you work? ");
scanf("%[^\n]s",sect);
//printf("Your section is %s",sect);

printf("\nWhat is your age??? ");
scanf("%d",&age);

printf("\nHere is your information: ");
printf("\nName: %s",name);
printf("\nSection: %s",sect);
printf("\nAge: %d",age);
printf("\nYou are totally motivated\n");
return 0;
}
