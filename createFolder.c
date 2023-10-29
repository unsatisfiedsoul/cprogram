// C program to create a folder
#include <conio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int check;
	char* dirname = "C:\\geeksforgeeks";
	//clrscr();
    
	check = mkdir(dirname);
    FILE* file;
    file = fopen("C:\\geeksforgeeks\\data.txt","w");
    fclose(file);


	// check if directory is created or not
	if (!check)
		printf("Directory created\n");
	else {
		printf("Unable to create directory\n");
		exit(1);
	}

	getch();

	system("dir");
	getch();
}
