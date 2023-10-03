

#include<stdio.h>

int main()
{
int i,j;
int n=5;
int s;
for(i=0;i<n;i+=1){
	for(s=0;s<n-i;s+=1)
	printf(" ");
	for(j=0;j< 2*i+1;j+=1)
	printf("*");

printf("\n");	
}

for(i=0;i<n-1;i+=1){
	for(s=0;s<i+2;s+=1)
	printf(" ");
	for(j=0;j< 7-2*i;j+=1)
	printf("*");

printf("\n");	
}
}
