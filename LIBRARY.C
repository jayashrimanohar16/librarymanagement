#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
     char book_name[20];
     char author[20];
     int pages;
     int price;
};
void main()
{
	struct library lib[100];
	char ar_nm[30],bk_nm[30];
	int i,input,count;
	i=input=count=0;
	clrscr();
while(input!=5)
{
	printf("\n\n********########WELCOME TO E-LIBRARY###########********");
	printf("\n\n1.Add book information");
	printf("\n\n2.Display book information");
	printf("\n\n3.List all books of given author");
	printf("\n\n4.List the count of books in the library");
	printf("\n\n5.Exit\n");
	printf("\n\nEnter one of the above:");
	scanf("%d",&input);
switch(input)
{
case 1:
	printf("Enter book name=");
	scanf("%s",&lib[i].book_name);
	printf("Enter author name=");
	scanf("%s",&lib[i].author);
	printf("Enter pages=");
	scanf("%d",&lib[i].pages);
	printf("Enter price=");
	scanf("%d",&lib[i].price);
	count++;
case 2:
	printf("\nYou have entered the following information");
	for(i=0;i<count;i++)
	{
	printf("\n\tbook name=%s",lib[i].book_name);
	printf("\n\tauthor name=%s",lib[i].author);
	printf("\n\tpages=%d",lib[i].pages);
	printf("\n\tprice=%d",lib[i].price);
	}
	break;
case 3:
	printf("Enter author name:");
	scanf("%s",&ar_nm);
	for(i=0;i<count;i++)
	{
	if(strcmp(ar_nm,lib[i].author)==0)
		{
			printf("%s\n%s\n%d\n%d",lib[i].book_name,lib[i].author,lib[i].pages,lib[i].price);
		}
	}
	break;
case 4:
	printf("\nNo of books in library:%d",count);
	break;
case 5:
	exit(0);
}
}
getch();
}
