#include<stdio.h>

int main(){
	int num1,num2,num3,num4,num5,sum;
	printf("Nhap so thu nhat: ");
	scanf("%d",&num1);
	printf("Nhap so thu hai: ");
	scanf("%d",&num2);
	printf("Nhap so thu ba: ");
	scanf("%d",&num3);
	printf("Nhap so thu tu: ");
	scanf("%d",&num4);
	printf("Nhap so thu nam: ");
	scanf("%d",&num5);
	if(num1%2!=0){
		sum+=num1;
	}
	if(num2%2!=0){
		sum+=num2;
	}
	if(num3%2!=0){
		sum+=num3;
	}
	if(num4%2!=0){
		sum+=num4;
	}
	if(num5%2!=0){
		sum+=num5;
	} 
	printf("Tong cua cac so le la: %d",sum);
	
	return 0;
}