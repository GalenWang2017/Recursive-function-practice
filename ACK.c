#include <stdlib.h>
#include <stdio.h>
//Ackerman's function
int ACK(int m,int n){
	if(m==0){
		return n+1;
	}
	if(n==0){
		return ACK(m-1,1);
	}
	int temp=ACK(m,n-1);
	return ACK(m-1,temp);
	
}
int main(void){
    int m=0,n=0;
    printf("input m:");
    scanf("%d",&m);
    printf("input n:");
    scanf("%d",&n);
    printf("Ackerman's function : A(%d,%d)=%d\n",m,n,ACK(m,n));
	return 0;
}
