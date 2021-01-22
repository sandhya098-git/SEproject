#include<stdio.h>
#define AL 5
#define MAX 5
int main(){
	float n[AL];
	int i;
	printf("Input the 5 members of the array:\n");
	for(i=0;i<AL;i++){
		scanf("%f",&n[i]);
	}
	for(i=0;i<AL;i++){
		if(n[i]<MAX){
			printf("A[%d]=%.1f\n",i,n[i] );
		}
	}
	return 0;
}