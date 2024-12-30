#include<stdio.h>
int main(){
/*
10101
 1010
  101
   10
    1
*/
	int i,j,k,p;
	for(i=1;i<=5;i++){
		p=1;
		for(k=1;k<=i-1;k++){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%d",p);
			p=!p;
		}
	printf("\n");
		}
}

