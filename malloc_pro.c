#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
      int n,i,sum=0,*ptr;
      scanf("%d",&n);
      ptr=(int*) malloc(n * sizeof(int));
      if(ptr==NULL){
      	printf("threre is no element");
      	return 0;
      }
      for(i=0;i<n;i++){
      	scanf("%d",ptr+i);
      	sum+=*(ptr+i);
      }
      printf("%d",sum);
      free(ptr);
      printf("%d",sum);
      
	return 0;
}
