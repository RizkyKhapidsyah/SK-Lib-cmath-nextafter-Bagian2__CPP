
#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("Angka floating point positif terkecil : %e\n", nextafter(0.0, 1.0));
	printf("Angka floating point negatif terbesar :%e\n", nextafter(0.0, -1.0));
	printf("Angka floating point positif terbesar lebih kecil dari 0.5 : %e\n", nextafter(0.5, 0.0));

	_getch();
	return (0);
}
