#include<stdio.h>
int main(){
// khai bao bien
   int month;
   printf("nhap vao so thang : ");
   scanf("%d", &month);
// kiem tra so thang   
   switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Thang %d co 31 ngay.\n", month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2:
            printf("Thang 2 co 28 hoac 29 ngay.\n");
            break;
        default:
            printf("So thang khong hop le.\n");
            break;
   	}
   return 0;
}