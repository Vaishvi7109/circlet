#include<stdio.h>
int main(){
/*
1        1
12      21
123    321
1234  4321
1234554321
*/
	int i,j,k,p;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		for(k=2*i;k<10;k++){
			printf(" ");
		}
		for(p=i;p>=1;p--){
			printf("%d",p);
		}
		printf("\n");
	}
}
