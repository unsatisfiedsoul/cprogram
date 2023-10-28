#include<stdio.h>
int main(){

int num,rem,seen[100],copy;
printf("Insert a number: ");
scanf("%d",&num);
copy=num;

while(num>0){
rem=num%10;
if(seen[rem]==1){
break;
}
seen[rem]=1;
num=num/10;
}
if(num>0){
printf("You have repeated digit in %d\n",copy);
}
else{
printf("There is no repeated digit in %d\n",copy);
}

return 0;
}
