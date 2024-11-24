#include<stdio.h>
int main(){
// khai bao bien
    float a;
    float b;
    float c;
// nhap 3 canh cua 1 tam giac
    printf("nhap canh a: ");
    scanf("%d", &a);
    printf("nhap canh b: ");
    scanf("%d", &b);
    printf("nhap canh c: ");
    scanf("%d", &c);
// kiem tra ket qua
   if ((a + b > c) && (a + c > b) && (b + c > a)){
   printf(" vay 3 canh lap duoc thanh tam giac");
   }
   else{
   printf(" vay 3 canh khong lap duoc thanh tam giac");   	
   }
    return 0;
}
