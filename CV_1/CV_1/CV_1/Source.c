#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)



void mocnina(double x, int n) {								///////////// Uloha 1.3 funkcia mocnica
	double m = 1;

	for (int i = 0; i < n; i++) {
		
		m *= x;
		printf("%lf^%d = %lf\n", x, (i+1), m);
	}
}


int main() {
	/*												/////////////////// Uloha 1.1
	int a, n, k = 0, *p = NULL, t = 1;
	scanf_s("%d", &n);
	p = (int*)malloc(n * sizeof(int));	
	while (n > 0) {
		scanf_s("%d", &a);
		if (a < 0 || a > 10) {
			printf("Postupnost nie je spravna");
			break;
		}
		p[k] = a;

		k++;
		n--;
	}
	for (int i = 0, j = 1; i < k, j < k; i++, j++) {
		if ((p[j] > p[i] * 2) || (p[j] < p[i] / 2)) {
			printf("Postupnost nie je spravna\n");
			t = 0;
			break;
		}
	}
	if (t != 0) {
		printf("Postupnost je spravna");
	}
	*/


	/*																/////////////////// Uloha 1.2
	int n, i, j;
	scanf_s("%d", &n);
	j = n;
	if (n < 1 || n > 15) {
		printf("Cislo nie je z daneho intervalu");
	}
	else {
		for ( i = 0; i < n; i++) {
			printf("%d: ", i + 1);
			while (j > 0) {
				printf("%d, ", j);
				j--;
			}
			j = n - (i + 1);
			printf("\n");

		}
	}
	*/

	/*              /////////////////// Uloha 1.3

	int n;
	double x;

	printf("napiste prosim dva cisla cez medzeru\n");
	scanf_s("%lf %d", &x, &n);
	printf("x = %lf, n = %d\n", x, n);

	mocnina(x,n);

	*/

	/*
	int a, b, mod, c = 0;					///////////////////// Uloha 1.4
	printf("napiste prve cislo: ");
	scanf_s("%d", &a);
	printf("napiste druhe cislo: ");
	scanf_s("%d", &b);

	while (a != 0) {
		mod = (a % 10);
		a = (a - mod) / 10;
		c = (c * 10) + mod;
	}

	printf("reverzia prveho cisla je %d\n", c);
	if (c != b) {
		printf("Cislo %d nie je palindrom\n", b, a);
	}
	else {
		printf("Cislo %d je palindrom \n", b, a);
	}
	*/


	/*								///////////////// Uloha 1.5
	FILE* subor;
	char c;
	int pocet_medzier = 0;

	subor = fopen("text.txt", "r");

	if (subor == NULL) {
		printf("subor neda sa otvorit");
	}
	else {
		while ((c = fgetc(subor)) != EOF) {
			if (c == ' ') {
				pocet_medzier++;
			}
			if (c == 'x' || c == 'X') {
				printf("Precital som X\n");
			}
			else if (c == 'y' || c == 'Y') {
				printf("Precital som Y\n");
			}
			else if (c == '#' || c == '$' || c == '&') {
				printf("Precital som riadiaci znak\n");
			}
			else if (c == '*') {
				printf("Koniec\n");
				printf("Pocet precitanych medzier: %d\n", pocet_medzier);
				fclose(subor);
				break;
			}
		}
	}
	*/
	



	return 0;
}