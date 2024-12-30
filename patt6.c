#include<stdio.h>
int main(){
/*
        5
      4 5 4
    3 4 5 4 3
  3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
*/
	int i,j,k,p;
	for(i=5;i>=1;i--){
		for(k=1;k<=i-1;k++){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
		for(p=4;p>=i;p--){
			printf("%d",p);
	}
		printf("\n");
}
}
