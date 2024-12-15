/* Prgram : menghitung luas dan keliling lingkaran */
#include <stdio.h>
#include <conio.h>
int main()
{
 float jari, luas, kell;
 const float PI=3.141592;
 // cetak judul
 printf ("\xB1\xB1\xB1 PROGRAM KELILING DAN LUAS LINGAKARAN \xB1\xB1\n");
 // inputkan jari-jari
	printf("\nJari-jari lingkaran : ");
	scanf("%f", &jari);
 // menghitung keliling dan luas
 kell =PI * 2 * jari;
 luas =PI * jari * jari;
 //mencetak keliling dan luas
 printf("\nKeliling : %f", kell);
 printf("\nLuas \t : %f", luas);
 return 0;
}
