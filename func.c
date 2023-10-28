#include<stdio.h>

int add(int a, int b);

int main(){

int a,b;
printf("A= ");
scanf("%d",&a);
printf("\nB= ");
scanf("%d",&b);


int c=add(a,b);
(c>100)?printf("Excelent"):printf("poor");





return 0;
}

int add(int a, int b){
return a+b;
}
