#include<stdio.h>

void main()
{

int ch;
FILE* fp;

fp=fopen("C:/Users/Ayan/Desktop/rough.txt","r");

while((ch=fgetc(fp))!=EOF)
	printf("%c",ch);

}//main end