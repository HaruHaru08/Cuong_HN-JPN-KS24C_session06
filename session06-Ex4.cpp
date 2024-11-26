#include<stdio.h>
#include <math.h>

int main(){
	float a,b,c,x1,x2,denta;
	printf("Nhap ba so a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	if( a == 0){
		printf("Phuong trinh khong phai phuong trinh bac hai");
		}else{
			denta=b*b-4*a*c;
			if(denta>0){
				x1=(-b-sqrt(denta))/(2*a);
				x2=(-b+sqrt(denta))/(2*a);
				printf("Phuong trinh co hai nghiem phan biet: x1= %.2f va x2= %.2f ",x1,x2);
			}else if(denta==0){
					x1= -b/(2*a);
					printf("Phuong trinh co nghiem kep la: x1=x2= %.2f",x1);
				}else{
					printf("Phuong trinh vo nghiem");
				}
		}
	return 0;
}