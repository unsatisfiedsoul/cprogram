#include<stdio.h>

int main(){

char name[100],pass[50];
printf("Name: ");
scanf("%[^\n]s",name);
getchar();
printf("Pass: ");
scanf("%[^\n]s",pass);
getchar();

FILE* file;
file= fopen("data.txt","r");
char data[100];
while(fgets(data,100,file)!=NULL){
printf("%s",data);
}

return 0;
}
