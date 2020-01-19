#include <stdlib.h>
#include <stdio.h>

//find the greatest common division

int GCD(int a,int b){
	if(a%b==0){
		return b;
	}else{
		return GCD(b,a%b);
	}
}

int main(void){
    int a=0,b=0;
    printf("input a:");
    scanf("%d",&a);
    printf("input b:");
    scanf("%d",&b);
    printf("GCD(%d,%d)=%d\n",a,b,GCD(a,b));
	return 0;
}
