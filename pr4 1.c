#include<stdio.h>
int main(){
/*
    5
   45
  345
 2345
12345
*/
int i,j,k,p;
	for(i=5;i>=1;i--){
		for(k=1;k<=i-1;k++){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
		printf("\n");
}
}
