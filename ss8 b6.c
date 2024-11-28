#include<stdio.h>

int main(){
		int arr[3][3]={{1,2,3},
	                  {4,5,6},
					  {4,8,6}};
	    int i,j=0;
	    int sum;
	    int size = sizeof(arr)/sizeof(arr[0]);
	   
	    for(i=0;i<size;i++){
	         printf("%2d",arr[i][j]);
	         sum +=arr[i][j];
	         j++;
	         
	    }j=size-1;
	    for(i=0;i<size;i++){
	         printf("%2d",arr[i][j]);
	         sum +=arr[i][j];
	         j--;
	         
	    }
	    printf("\ntong la: %d",sum);
	    
					

   return 0;
}

