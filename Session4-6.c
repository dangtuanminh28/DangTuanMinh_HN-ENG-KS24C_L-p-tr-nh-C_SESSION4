#include<stdio.h>
int main(){
// khai bao bien
   float so_moi;
   float so_cu;
   float so_dien;
   float tien_dien;
// nhap chi so cong to dien
   printf("nhap chi so cong to dien cu: ");
   scanf("%f" , &so_cu);
   printf("nhap chi so cong to dien moi: ");
   scanf("%f" , &so_moi);
// cong thuc tinh so dien tieu thu
    so_dien = so_moi - so_cu;
// kiem tra chi so cu va chi so moi
   if (0 <= so_dien && so_dien < 50) {
    tien_dien = so_dien * 10.000;
    } else if (50 <= so_dien && so_dien < 100) {
        tien_dien = so_dien * 15.000;
    } else if (100 <= so_dien && so_dien < 150) {
        tien_dien =  so_dien * 20.000;
    } else if (150 <= so_dien && so_dien < 200) {
        tien_dien = so_dien * 25.000;
    } else {
        tien_dien = so_dien * 30.000;
    }
// in ra ket qua
    printf("tien dien trong thang la %.f VND", tien_dien);
	return 0;
}
