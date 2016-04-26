#include <stdio.h>
#include <stdlib.h>
int entrada_a;
int entrada_b;
int entrada_acarreo;

int resultado__g;
int resultado__g_xor_entrada_acarreo;
int resultado__s;
int salida_accareo;

int a;



int /*Intentado lanzar un arreglo*/*/*Intentando lanzar un arreglo*/ medio_sumador(int a){
	entrada_a = 0;
	entrada_b = 0;
	entrada_acarreo = a;
	resultado__g = entrada_a ^ entrada_b;
	resultado__s = resultado__g ^ entrada_acarreo;
	salida_accareo = ((entrada_acarreo && resultado__g)||(entrada_a && entrada_b));
	
	/*Intentado lanzar un arreglo*/
	static int resultado_n[2];
	
	printf("Resultado S: %d\nResultado salida acarreo: %d\n", resultado__s, salida_accareo);
	
	system("PAUSE");
	
	/*Intentando lanzar un arreglo que funciona*/
	return resultado_n;
}


int main()
{	
	a = 1;
	medio_sumador(a);
}
