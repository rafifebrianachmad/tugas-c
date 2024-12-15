#include<stdio.h>
main(){
	float F, C;
	printf ("\xB1\xB1\xB1 Konversi derajad Fahrenheit ke derajad Celcius \xB1\xB1\xB1\n\n");
	
	printf("Inputkan derajad Fahrenheit	: ");
    scanf("%f", &F);
    
    C = 5*(F-32)/9;
    
    printf("\n %.2f F dalam celcius adalah %.2f C\n",F,C);
	
	return 0;
}
