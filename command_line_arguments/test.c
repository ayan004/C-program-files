#include<stdio.h>

main(int argc,char* argv[])
{

int i;

if(argc==1)
{
	printf("No elements to display...!\n");
}
else
{
	printf("List of elements...\n");
	for(i=0;i<argc;i++)
	printf("%s\n",argv[i]);
}


}//main end