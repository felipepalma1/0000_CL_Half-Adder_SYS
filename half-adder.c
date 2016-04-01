#include <stdio.h>
#include <stdlib.h>
int entrada_a;
int entrada_b;
int entrada_acarreo;

int resultado__g;
int resultado__g_xor_entrada_acarreo;
int resultado__s;
int salida_accareo;


int main()
{	
	entrada_a = 0;
	entrada_b = 0;
	entrada_acarreo = 0;
	resultado__g = entrada_a ^ entrada_b;
	resultado__s = resultado__g ^ entrada_acarreo;
	salida_accareo = ((entrada_acarreo && resultado__g)||(entrada_a && entrada_b));
	
	printf("Resultado S: %d\nResultado salida acarreo: %d\n", resultado__s, salida_accareo);
	
	system("PAUSE");
	
	return 0;	
}
