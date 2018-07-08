#include <stdio.h>
void swap(int *a1,int *a2);
int main(void) {
	// your code goes here
	int n1=9,n2=10;
	swap(&n1,&n2);
	printf("%d",n1);
	printf("%d",n2);
	return 0;
}
void swap(int *a1,int *a2){
	int temp;
	temp = *a1;
	*a1=*a2;
	*a2=temp;
}
