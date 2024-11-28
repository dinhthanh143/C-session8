#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};

	int check=0;
	int number,j,n;
		printf("moi nhap gia tri phan tu: ");
		scanf("%d",&number);
		
		for(j=0;j<5;j++){
			
			if(number==arr[j]){
				printf("vi tri phan tu trong mang la: %d",j);
				check=1;
				
			}
			}
			if (check==0){
			printf("phan tu ko co trong mang");	
			}
			
			
			
			
			
			
		
		
		
		
		
		
		
	

   return 0;
}

