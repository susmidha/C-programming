#include <stdio.h>

int main(void) {
	// your code goes here
	int c=12;
	int *p;
	printf("%d\n",c);
	printf("%d\n",&c);
	p=&c;
	printf("%d\n",p);
	printf("%d\n",*p);
	c=11;
	printf("%d\n",&c);
	printf("%d\n",*p);
	*p=2;
	printf("%d\n",&c);
	printf("%d\n",c);
	return 0;
}
