#include<stdio.h>
int main(){
/*
11
1213
141516
17181920
*/
	int i,j,k=11;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d",k);
			k+=1;
		}
		printf("\n");
	}
}
