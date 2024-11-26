#include<stdio.h>

int main(){
	int password,check;
	password = 4567;
	printf("Moi ban nhap mat khau: ");
	scanf("%d",&check);
		for(check != password;;){
			if(check == password){
				printf("Ban nhap dung roi");
				break;
			}else{
			printf("Ban nhap sai roi!Hay nhap lai di: ");
			scanf("%d",&check);
			}
		}
	return 0;
}