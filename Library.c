#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book {

	char title[50];
	char aut[50];
	char year[50];
	char genre[50];


};
int main (void)

{
	int number,i,choice,k,authorcounter=0,yearcounter=0,genrecounter=0;
	char author[50],genre[50],year[50];
	
	struct book *b = (struct book*)malloc(sizeof(struct book));

	printf("Enter number of books:");
	scanf("%d",&number);

	for(i=0;i<number;i++){
	printf("%d - book title:",i+1);
	scanf("%s",&b[i].title);
	printf("%d - book author:",i+1);
	scanf("%s",&b[i].aut);
	printf("%d - book year:",i+1);
	scanf("%s",&b[i].year);
	printf("%d - book genre:",i+1);
	scanf("%s",&b[i].genre);
	printf("\n");

	}

	printf("Display books by:\n1. Author\n2. Year\n3. Genre\nEnter your choice:");
	scanf("%d",&choice);

	if(choice==1)
	{
	printf("Enter Author: ");
	scanf("%s",&author);
	for (i=0;i<number;i++)
	{
	  k = strcmp (b[i].aut , author);
	   if(k==0)
		  authorcounter++;
	}

	printf("Number of %s books: %d\n",author,authorcounter);
	}
	else if (choice==2 )
	{
	printf("Enter Year: ");
	scanf("%s",&year);
	for (i=0;i<number;i++)
	{
	  k = strcmp (b[i].year , year);
	   if(k==0)
		  yearcounter++;
	}

	printf("Number of %s books: %d\n",year,yearcounter);
	}
	else if( choice==3)
	{
	printf("Enter Genre: ");
	scanf("%s",&genre);

	for (i=0;i<number;i++)
	{
	  k = strcmp (b[i].genre , genre);
	   if(k==0)
		  genrecounter++;
	}

	printf("Number of %s books: %d\n",genre,genrecounter);
	}


	return(0);
}

