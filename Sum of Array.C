/*Write a Program to enter to 3*3 matrix and print the sum of it */
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	clrscr();
	//Logic:Input value into 2d array
	for(i=0;i<3;i++)   //row
	{
		for(j=0;j<3;j++)  //colomn
		{
			printf("\nEnter value m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)   //row
	{
		for(j=0;j<3;j++)  //colomn
		{
			printf("\nEnter value m2[%d][%d]:",i,j);
			scanf("\n%d",&m2[i][j]);
		}
	}
	printf("\n1st Matrix:-");
	printf("\n\n");
	//Logic Print 2d array
	for(i=0;i<3;i++)   //row
	{
		for(j=0;j<3;j++)  //colomn
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("\n2nd Matrix:-");
	printf("\n\n");
	for(i=0;i<3;i++)   //row
	{
		for(j=0;j<3;j++)  //colomn
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	printf("\nSum of Matrix:-");
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}
	getch();
}

