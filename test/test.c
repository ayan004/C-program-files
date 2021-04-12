#include<stdio.h>
#define SUBJECTS 2

void pick(char a[],int b[]);
void give(char c[],int e[]);

void main(){

char name[20];
int marks[SUBJECTS];

//ptr=marks;
pick(name,marks);
printf("\n");
give(name,marks);

}

//PICK FUNCTION
void pick(char a[],int b[])
{
int i;

scanf("%s",a);
for(i=0;i<SUBJECTS;i++)
{	scanf("%d",&b[i]);	}

}


//GIVE FUNCTION	
void give(char c[],int e[])
{
int i;

printf("%s ",c);
for(i=0;i<SUBJECTS;i++)
{	printf("%d ",e[i]);	}

}//end give 