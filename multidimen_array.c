#include <stdio.h>
void arr(int a1[2][2]);
int main(void) {
	// your code goes here
       int a[2][2],i,j;
       for( i=0;i<2;i++){
       	for(j=0;j<2;j++ ){
       		scanf("%d",&a[i][j]);
       	}
       	
       }
       arr(a);
	return 0;
}
void arr(int a1[2][2]){
for( int i=0;i<2;i++){
       	for(int j=0;j<2;j++ ){
       		printf("%d",a1[i][j]);
       	}
       	
       }	
}
