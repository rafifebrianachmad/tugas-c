#include<stdio.h>
int main()
{
	int jam, menit, hasil;
	
	printf("\n\xB1\xB1\xB1 Program Konversi Jam \xB1\xB1\xB1 \n\n");
	printf("Inputkan jam dan menit <jam:menit> : ");
	scanf("%d:%d", &jam, &menit);
	
	hasil = jam*60+menit;
	
	printf("\n%d jam %d menit = %d menit", jam, menit, hasil);
	return 0;
}
