#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int choises(int num, char *cat){
switch(num){
case 1:
system(cat);
break;
}
return 0;
}


int main(int argc, char **argv){
int choise;
char domain[]="whois ";
char say[40];
printf("What do you want to search?\n1.whois\n2.dig\n3.nslookup\n4.wafw00f\n5.whatweb\n6.theHarvester\n");
printf("I choose: ");
scanf("%d",&choise);
printf("Give me the domain name. i.e: google.com\n");
scanf("%s",say);
getchar();
char concat[100];
strcat(domain,say);
printf("%s\n",domain);
//getchar();
system(domain);
choises(choise,domain);

return 0;
}
