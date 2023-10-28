#include<stdio.h>

int main(){

char username[100],user[100],pass[50],password[50];
int choise;

//For choosing options
printf("Enter:\n______________\n1. Registration\n2. Login\n________________\n");
scanf("%d",&choise);

//for registration
if(choise==1){

getchar();
printf("Username: ");
scanf("%[^\n]s",username);
getchar();
printf("Password: ");
scanf("%[^\n]s",password);
getchar();

//for writing in a file
FILE* file;
file = fopen("data.txt","w");

fputs(username,file);
fprintf(file,"\n");
fputs(password,file);
fprintf(file,"\n");
fclose(file);

}

//for login option
else if(choise==2){

getchar();
printf("Username: ");
scanf("%[^\n]s",user);
getchar();
printf("Password: ");
scanf("%[^\n]s",pass);


//for reading file
FILE* file;
file=fopen("data.txt","r");
//const SIZE = 256;
char line[100];
while(fgets(line,sizeof(line),file)){
printf("%s",line);
}
//fclose();
}



return 0;
}
