#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	
	int i;
	for(i=sizeof(arr)/sizeof(int);i>0;i--){
		
	printf("%2d",arr[i-1]);
	}
	

   return 0;
}

