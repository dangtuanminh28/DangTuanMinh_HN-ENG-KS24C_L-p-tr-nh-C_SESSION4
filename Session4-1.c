#include<stdio.h>
int main(){
// khai bao bien
   int n;
   printf("nhap vao mot so nguyen : ");
   scanf("%d", &n);
// kiem tra bien   
   if(n > 0){
   	printf("vay so %.d la so duong\n", n);
   	}
   	else if (n < 0){
   	printf("vay so %.d la so am\n", n);
	}
	else{
	printf("vay so 0 la so rong");	
	}
   return 0;
}
