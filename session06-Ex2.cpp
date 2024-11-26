#include<stdio.h>

int main(){
	int n,even,odd;
	even=0;
	odd=0;
	for(int i=0;i<5;i++){
		printf("Nhap vao mot so nguyen: \n");
		scanf("%d",&n);
		if(n%2!=0){
		    odd++;
		    }else{
		 	even++;
		     }
	}
	printf("So luong so chan la: %d\n",even);
	printf("So luong so le la: %d\n",odd);
	return 0;
}