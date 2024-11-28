#include<stdio.h>

int main(){
	int arr[3][3]={{1,2,3},
	                {4,5,6},
					{4,8,6}};
	int i,j;
	int size=sizeof(arr)/sizeof(arr[0]);
	int sum_first_row,sum_last_row;
	int sum_first_col,sum_last_col=0;

	
	for(i=0;i<1;i++){
		for(j=0;j<3;j++){
			sum_first_row += arr[i][j];
			
		}
		}
		for(i=size-1;i<3;i++){
		for(j=0;j<3;j++){
	
		
			sum_last_row += arr[i][j];
		}
	}


		for(i=1;i<size-1;i++){
			
			sum_first_col += arr[i][0];
		}
			
			for(i=1;i<size-1;i++){
			
			sum_last_col += arr[i][size-1];
		}
		
		
		
		
		int total=sum_first_row+sum_last_row+sum_first_col+sum_last_col;
	

		printf("tong cua mang nay la : %d",total);
	
   return 0;
}

