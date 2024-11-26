#include<stdio.h>

int main(){
	int year,month;
	printf("Nhap nam: \n");
	scanf("%d",&year);
	printf("Nhap thang: \n");
	scanf("%d",&month);
		switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Nam %d ",year);
			printf("Thang %d co 31 ngay\n",month);
			break;
		case 4: case 6: case 9: case 11:
				printf("Nam %d ",year);
			printf("Thang %d co 30 ngay\n",month);
			break;
		case 2:
			if((year%400 == 0) || (year%4 == 0 && year%100 != 0)){
				    printf("Nam %d ",year);
					printf("Thang %d co 29 ngay\n",month);
			}else{
					printf("Nam %d ",year);
				    printf("Thang %d co 28 ngay\n",month);
			    }
			break;
		default:
			printf("So thang khong hop le\n");
	}
	return 0;
}