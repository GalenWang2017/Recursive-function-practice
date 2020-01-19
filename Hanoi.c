#include <stdio.h>
#include <stdlib.h>

//solve Hanoi tower problem
//this code solve 4 disks of Hanoi tower

void hanoi(int n,char a,char b,char c){
	
	if(n==1){
		printf("move disk %d from %c to %c\n",n,a,c);
	}else{
		hanoi(n-1,a,c,b);
		printf("move disk %d from %c to %c\n",n,a,c);
		hanoi(n-1,b,a,c);
	}
}
int main(void){
	int n=4;
	char a='A',b='B',c='C';
	hanoi(n,a,b,c);
	return 0;
}
