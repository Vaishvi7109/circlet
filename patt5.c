#include<stdio.h>
int main(){
/*
41
4142
414243
41424344
4142434445
*/
	int i,j,k=41;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",k);
			k+=1;
		}
		printf("\n");
	}
}
