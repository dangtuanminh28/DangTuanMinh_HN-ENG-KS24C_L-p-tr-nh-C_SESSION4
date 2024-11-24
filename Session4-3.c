#include<stdio.h>
int main(){
// khai bao bien
   int n;
   printf("nhap vao mot so nguyen : ");
   scanf("%d", &n);
// kiem tra bien   
   if (n % 3 == 0 && n % 5 == 0) {
        printf("So %d chia het cho ca 3 va 5.\n", n);
    } else if (n % 3 == 0) {
        printf("So %d chia het cho 3.\n", n);
    } else if (n % 5 == 0) {
        printf("So %d chia het cho 5.\n", n);
    } else {
        printf("So %d khong chia het cho 3 hoac 5", n);
	}
   return 0;
}
