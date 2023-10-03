#include <stdio.h>
int main()
{
int i,j;
int n=5;
for(i=0;i<n;i+=1){
	for(j=5;j>i;j-=1){
		printf("*");
	}
printf("\n");
}
for(i=0;i<5;i+=1){
	for(j=0;j<=i;j+=1){
		printf("*");
	}
printf("\n");	   
}
}


