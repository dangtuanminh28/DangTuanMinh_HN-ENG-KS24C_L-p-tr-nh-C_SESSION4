#include<stdio.h>
int main(){
// khai bao bien
    int year;
// nhap so nam
    printf(" nhap so nam: ");
    scanf("%d", &year);
// kiem tra nam nhuan
    if (((year % 4 == 0) && (year % 100!= 0)) || (year % 400 == 0)){
    printf(" %d la nam nhuan ", year);
    }
    else{	
    printf(" %d khong phai la nam nhuan", year);
	}
	return 0;
}
