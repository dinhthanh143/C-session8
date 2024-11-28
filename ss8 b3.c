#include<stdio.h>

int main(){
	int n;
	printf("moi nhap so nguyen de khoi tao mang: ");
	scanf("%d",&n);
	int i,j;
	int arr[n][n];
	
	for(i=0;i<n;i++){
    	
    	for(j=0;j<n;j++){
		    printf("moi nhap phan tu cho arr[%d][%d]: ",i,j);
    		scanf("%d",&arr[i][j]);
    	}
    }
    for (i= 0;i<n;i++) {
        for (j= 0;j<n;j++){
            printf("%5d", arr[i][j]); 
        }
        printf("\n");
    }
	
	
	

   return 0;
}

