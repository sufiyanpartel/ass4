#include<stdio.h>
int main(){
	/*10101
	   1010
	    101
	     01
	      1*/
	int i,j,k;
	for(i=5;i>=1;i--){
		for(k=0;k<=5-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
		    if(j%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
		}
		printf("\n");
	}
}

