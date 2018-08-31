#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	printf("enter three variables");
	scanf("%d%d%d",&a,&b,&c);
	a=a+b+c;
	b=a-(b+c);
	c=a-(b+c);
	a=a-(b+c);
	printf("%d\t%d\t%d\t",a,b,c);
	return 0;
}
