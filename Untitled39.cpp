#include <stdio.h>
int main()
{
int i,j;
int k;
int n=5;
for(i=0;i<n;i+=1){
	k=0;
	for(j=5;j>i;j-=1){
		
		k+=1;
		printf("%d",k);
	}
printf("\n");
}
}
