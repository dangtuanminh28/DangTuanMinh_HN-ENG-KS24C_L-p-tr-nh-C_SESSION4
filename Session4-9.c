#include<stdio.h>
int main(){
// khai bao ngay,thang,nam
    int d;
	int m;
	int y;
// nhap ngay,thang,nam
    printf(" vui long nhap so ngay: ");
	scanf("%d", &d);
    printf(" vui long nhap so thang: ");
	scanf("%d", &m);
	printf(" vui long nhap so nam: ");
	scanf("%d", &y);
// kiem tra ngay,thang,nam
    if (d < 1 || d > 31 || m < 1 || m > 12 || m == 2 && d > 29 || m == 4 && d > 30 || m == 6 && d > 30 || m == 9 && d > 30 || m == 11 && d > 30 ){
	printf("khong hop le");
	}
	else{
	printf("%d / %d / %d hop le", d,m,y);
	} 
	return 0;
}
