#include<stdio.h>
int main(){
// khai bao bien
   int a, b, c, temp;
// nhap 3 so nguyen
   printf("nhap gia tri thu nhat: ");
   scanf("%d", &a);
   printf("nhap gia tri thu hai: ");
   scanf("%d", &b);
   printf("nhap gia tri thu ba: ");
   scanf("%d", &c);
// thuc hien sap xep
   if(a > b){
	temp=a;
	a=b;
	b=temp;
	}
	if(a > c){
	temp=a;
	a=c;
	c=temp;
	}
	if(b > c){
	temp=b;
	b=c;
	c=temp;
	}
// In ket qua ra sau khi sap xep 
	printf("Ket qua sau khi sap xep: %d %d %d \n ", a,b,c);
}

