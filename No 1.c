#include<stdio.h>
/* Program Latihan*/
main()
{
	char huruf1, huruf2, huruf3;
	huruf1='A'+40;
	huruf2=huruf1-20+'B';
	huruf3='C'+'D'-'P'+10;
	printf("\n %c kode ASCII nya %u", huruf1,huruf1);
	printf("\n %c kode ASCII nya %u", huruf2,huruf2);
	printf("\n %c kode ASCII nya %u", huruf3,huruf3);
	return 0;
}

/*Output
 i kode ASCII nya 105
 ù kode ASCII nya 4294967191
 A kode ASCII nya 65*/
