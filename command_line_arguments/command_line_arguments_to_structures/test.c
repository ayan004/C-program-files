#include<stdio.h>

struct emp
{
int id;
char* name;
int sal;
};

void main(int argc,char* argv[])
{

struct emp e;

e.id=atoi(argv[1]);
e.name=argv[2];
e.sal=atoi(argv[3]);

printf("%d\n",e.id);
printf("%s\n",e.name);
printf("%d\n",e.sal);

}//main end