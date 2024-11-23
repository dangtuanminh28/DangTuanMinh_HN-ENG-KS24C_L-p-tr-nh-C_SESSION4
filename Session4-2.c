#include<stdio.h>
int main(){
// khai bao bien
   int n;
   printf("nhap vao mot so nguyen : ");
   scanf("%d", &n);
// kiem tra bien   
   if(n % 2 == 0){
   	printf("vay so %.d la so chan\n", n);
   	}
   	else{
   	printf("vay so %.d la so le\n", n);
	}
   return 0;
}
