#include <stdio.h>
int main()
{
int i=1;
int n=5;
int j;
int k;

for(j=0;j<n;j+=1){
	for(k=0;k<j+1;k+=1)
	printf("%d",i);
	
printf("\n");
i=i+1;
}
}
