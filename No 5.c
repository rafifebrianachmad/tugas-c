#include <stdio.h>
int main()
{
 int bil_1, bil_2, jumlah, selisih;
 printf("Masukkan bilangan 1 : ");
 scanf("%d", &bil_1);
 printf("Masukkan bilangan 2 : ");
 scanf("%d", &bil_2);
 
 jumlah=bil_1+bil_2;
 selisih=bil_1-bil_2;
 
 printf("\nJumlah kedua bilangan  : %8d", jumlah);
 printf("\nSelisih kedua bilangan : %8d", selisih);
 return 0;
}
