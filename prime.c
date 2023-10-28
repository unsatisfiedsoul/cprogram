#include<stdio.h>
int main(){

int n,flag;

printf("What is the number? ");
scanf("%d",&n);

for(int i=2;i<=n/2;++i){

if(n%i==0){
//printf("%d is not prime",n);
flag=1;
break;
}

else{
//printf("%d is prime",n);
flag=0;
}

}

(flag==1)?printf("%d is not prime",n):printf("%d is prime",n);

return 0;
}
