#include <stdio.h>
int main()
{
int i,j;
int k=0;
int n=4;
for(i=0;i<n;i+=1){
	
	for(j=4;j>i;j-=1){
		
		k+=1;
		printf("%d ",k);
	}
printf("\n");

}
}
