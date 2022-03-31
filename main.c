#include<stdio.h>
#include<stdlib.h>


int U(int n){
	if(n == 0)return 0;
	if(n == 1)return 1;
	if(n == 2) return 2;
	return(2*U(n -1) + 3*U(n-3));
}

int main(){
	int n = 5;
	int result = U(n);
	printf("%i",result);	
	
	return 0;
}
