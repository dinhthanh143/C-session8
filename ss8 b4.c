#include<stdio.h>

int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{4,8,6}};
	int i,j;
	int max;
	for(i=0;i<3;i++){
    	
    	for(j=0;j<3;j++){
    		if (max<arr[i][j]){
    			max = arr[i][j];
			}
    	
    	}
    }	
	printf("so lon nhat trong mang 2 chieu la %d ",max);

   return 0;
}

