// ConsoleApplication1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <allocators>
#include <iostream>
using namespace std;

int tam_arr(int n) {
	int tam = 1;
	int i;
	for (i = 1; i <= n; i++)
		tam *= i;
	return n* tam;
}


int main()
{
	int n = 3;
	int *ap_x;
	int i;

	cout << tam_arr(n) << endl;

/*
	ap_x = (int*)(malloc(10 * sizeof(int)));

	if (ap_x == NULL) {
		cout << "No hubo de piña/n";
		return 0;
	}
	
	int *ap;
	ap = ap_x;

	for (i = 1;i <= 10;i++)
		*(ap++) = i;

	for (i = 1;i <= 10;i++)
		cout << *(ap_x + i - 1) <<endl;

	free(ap_x);
	free(ap);
	*/
	char c;
	cin >> c;
    return 0;
}

