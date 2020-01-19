#include <stdlib.h>
#include <stdio.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
//permutation
//example input  : "abc"
//        output : "abc","acb","bac","bca","cba","cab"

void perm(char list[],int i,int n){
	int j,temp;
	if(i==n){
		for(j=0;j<=n;j++){
			printf("%c",list[j]);
		}
		printf("\n");
	}else{
		for(j=i;j<=n;j++){
			SWAP(list[i],list[j],temp);
			perm(list,i+1,n);
			SWAP(list[i],list[j],temp);
		}
	}
}
int main(void){	
	char list[]="";
	scanf("%s",list);
	perm(list,0,strlen(list)-1);
	return 0;
}
