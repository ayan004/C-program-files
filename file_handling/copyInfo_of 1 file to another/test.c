#include<stdio.h>

void main()
{
FILE *fp1,*fp2;
int ch;

fp1=fopen("C:/Users/Ayan/Desktop/rough.txt","r");
fp2=fopen("C:/Users/Ayan/Desktop/copy_rough.txt","w");

while((ch=fgetc(fp1))!=EOF)
{
	fputc(ch,fp2);
}

printf("copied");

}//main end