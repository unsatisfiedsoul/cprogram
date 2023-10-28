#include<stdio.h>
int main(){

int myAge, votingAge;
printf("What is your age? ");
scanf("%d",&myAge);
printf("What is voting age? ");
scanf("%d",&votingAge);
if(myAge>=votingAge){

printf("You are elegible to vote. ");

}
else
{
printf("You are not eligible to vote. ");
}



return 0;
}
