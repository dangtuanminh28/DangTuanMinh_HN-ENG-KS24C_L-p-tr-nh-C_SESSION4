#include<stdio.h>
int main(){
// khai bao bien
   int na;
   int nb;
   int nc;
// nhap so 3 so nguyen
   printf("Nhap so nguyen thu nhat: ");
   scanf("%d", &na);
   printf("Nhap so nguyen thu hai: ");
   scanf("%d", &nb);
   printf("Nhap so nguyen thu ba: ");
   scanf("%d", &nc);
   // kiem tra so thu 3 co nam trong khoang giua so thu 2 va so thu 1 khong
   if (na < nc && nb > nc || na > nc && nb < nc){
   printf("vay so %.d co nam trong khoang giua so thu 2 va so thu 1\n", nc);
   }
   else{
   printf("vay so %.d khong nam trong khoang giua so thu 2 va so thu 1\n", nc);
   }
   return 0;
}
