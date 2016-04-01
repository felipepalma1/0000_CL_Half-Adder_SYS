#include <stdio.h>
#include <stdlib.h>

int f1()
{ return 1; }

int f2(int a)
{ printf("%d", a); return a; }

int main(int a)
{	
	f2(f1());
}
