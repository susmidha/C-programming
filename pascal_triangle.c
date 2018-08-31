#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,c=1,k,n;
	printf("enter the limit");
	scanf("%d",&n);
	printf("\n ");
	for( i=0;i<n;i++){
		c=1;
		for(j=0;j<=n-i;j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("%d\t",c);
			c=c*(i-k)/(k+1);
		}
		printf("\n");
	}
	return 0;
}
