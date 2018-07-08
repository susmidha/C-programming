#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
      int n,i,sum=0,*ptr,n2;
      scanf("%d",&n);
      ptr=(int*) malloc(n * sizeof(int));
      
      for(i=0;i<n;i++){
      	printf("%d",ptr+i);
      }
        scanf("%d",&n2);
        ptr=realloc(ptr,n2);
      
      for(i=0;i<n;i++){
      	printf("%d",ptr+i);
      }
    
	return 0;
}
