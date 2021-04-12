#include<stdio.h>
#define STUDS 2
#define SUBS 2

void pick(char (*a)[20],int (*b)[SUBS]);
void give(char (*c)[20],int (*d)[SUBS]);

void main(){

char name[STUDS][20];
int marks[STUDS][SUBS];

pick(name,marks);
printf("\n");
give(name,marks);

}

//PICK FUNCTION
void pick(char (*a)[20],int (*b)[SUBS])
{
int i,j;

for(i=0;i<STUDS;i++)
{	scanf("%s",*(a+i)); 
	for(j=0;j<SUBS;j++)
	scanf("%d",&*(*(b+i)+j));	}

}

//GIVE FUNCTION	
void give(char (*c)[20],int (*d)[SUBS])
{
int i,j;

printf("Output: \n");
for(i=0;i<STUDS;i++)
{	printf("\n%s ",*(c+i));
	for(j=0;j<SUBS;j++)
	printf("%d ",*(*(d+i)+j));
	printf("\n");	}


}//end give 