#include<stdio.h>
#define STUDENTS 2
#define SUBJECTS 2

void get_list(char *string[],int array[][SUBJECTS],int m,int n);
void print_list(char *string[],int array[][SUBJECTS],int m,int n);

void main()
{

char *name[STUDENTS][20];
int *marks[STUDENTS][SUBJECTS];
/*char (*p0);
int (*p1);*/

printf("Input student names & there marks in two subjects: \n");
/*p0=name;
p1=marks;*/
get_list(name,marks,STUDENTS,SUBJECTS);
printf("\n");
print_list(name,marks,STUDENTS,SUBJECTS);

}//main end


/*input student name & marks*/
get_list(char *string[],int array[][SUBJECTS],int m,int n)
{

int i,j,(*rowptr)[SUBJECTS]=array;
for(i=0;i<m;i++)
{
	scanf("%s",string[]);
	for(j=0;j<n;j++)
	scanf("%d",&(*(rowptr+i))[j]);
}

}//get_list end


/*print out the list*/
print_list(char *string[],int array[][SUBJECTS],int m,int n)
{

int i,j,(*rowptr)[SUBJECTS]=array;
for(i=0;i<m;i++)
{
	printf("%-20s",string[i]);
	for(j=0;j<n;j++)
	printf("%5d",(*(rowptr+i))[j]);

	printf("\n");
}

}//print_list end