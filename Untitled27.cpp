/*pattern 6*/

#include <stdio.h>

int main()
{
int i,j;
int n=5;
int s;
for(i=0;i<n;i+=1){
	for(s=0;s<i;s+=1)
	printf(" ");
	for(j=0;j<9-2*i;j+=1)
	printf("*");
	
printf("\n");
}}
