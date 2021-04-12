#include<stdio.h>
#include<stdlib.h>

void main()
{

int i,n,*arr;

printf("Enter size: ");
scanf("%d",&n);

arr=(int*)calloc(n,sizeof(int));

if(arr==NULL)
	printf("No Memory\n");
else 
	{ printf("Array elements are: \n");
	for(i=0;i<n;i++)
	printf("%d ",*(arr+i));
	}

printf("\n\n");

printf("Enter new size: ");
scanf("%d",&n);

arr=(void*)realloc(arr,n*sizeof(int));

if(arr==NULL)
	printf("No Memory\n");
else 
	{ printf("Array elements are: \n");
	for(i=0;i<n;i++)
	printf("%d ",*(arr+i));
	}
	

}//main end