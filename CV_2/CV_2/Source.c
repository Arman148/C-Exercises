#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int maximum(int a, int b) { //////////////////////////////////// function from 2.1

	if (a > b) {
		printf("cislo %d je vecsie\n", a);
		return &a;
	}
	else {
		printf("cislo %d je vecsie\n", b);
		return &b;
	}
}

int kvadraticka_rovnica(int a, int b, int c, int *pocet_korenov, double *x1, double *x2) {  ///////////////// function from 2.3
	double d = (b * b) - (4 * a * c);
	printf("d(%d) = %d^2 - 4 * %d * %d\n", d, b, a, c);
	if (d > 0) {
		*pocet_korenov = 2;
		*x1 = ((0 - b) + sqrt(d)) / (2 * a);
		*x2 = ((0 - b) - sqrt(d)) / (2 * a);
		printf("pocet_korenov = 2, x1 = %d, x2 = %d", *x1, *x2);
		return pocet_korenov, x1, x2;
	}
	else if (d == 0) {
		pocet_korenov = 1;
		*x1 = (0 - b) / (2 * a);
		printf("pocet_korenov = 2, x1 = %d", x1);
		return pocet_korenov, x1;
	}
	else{
		printf("pocet korenov je 0");
		return pocet_korenov;
	}
}

void nacitanie(int *a, int  *b) {
	*a = 5;
	*b = 10;
	printf("a = %d     b = %d\n", &a, &b);
	printf("*a = % d     *b = % d\n", a, b);

}
void scitanie() {
	printf("scitanie\n");


}
void odcitanie() {
	printf("odcitanie\n");

}
void nasobenie() {
	printf("nasobenie\n");

}
void delenie(int *a, int *b) {
	printf("delenie\n");
	printf("a = %lf    b = %lf", a, b);

}
void praca() {
	printf("praca so suborom");
}




void menu(int *a, int *b) {
	char function_name;
	printf("c - nacitanie cisel\n");
	printf("s - scitanie cisel\n");
	printf("o - odcitanie cisel\n");
	printf("n - nasobenie cisel\n");
	printf("d - delenie cisel\n");
	printf("p - praca so suborom\n");
	printf("e - koniec\n");

	printf("a = %d     b = %d\n", &a, &b);
	printf("*a = % d     *b = % d\n", a, b);
	
	printf("zadajte pismeno: ");

	while (1) {
		scanf_s("%c", &function_name);
		
		switch (function_name)
		{
		case 'c':
			nacitanie(&a, &b);
			break;
		case 's':
			scitanie(&a, &b);
			break;
		case 'o':
			odcitanie(&a, &b);
			break;
		case 'n':
			nasobenie(&a, &b);
			break;
		case 'd':
			delenie(&a, &b);
			break;
		case 'p':
			praca(&a, &b);
			break;
		case 'e':
			//exit(1);
			return;
			break;
		default:
			break;
		}
	}
}

int main() {

	/*															Uloha 2.1
	int a, b;
	printf("napiste dva cisla cez medzeru: ");
	scanf_s("%d %d", &a, &b);

	maximum(a, b);

	*/

	/*														Uloha 2.3
	int a, b, c;
	double pocet_korenov, x1, x2;
	printf("napiste realne cisla a, b, c, cez medzeru: ");
	scanf_s("%d %d %d", &a, &b, &c);


	kvadraticka_rovnica(a, b, c, &pocet_korenov, &x1, &x2);
	*/


	/*
	int a, b;
	menu(&a, &b);
	printf("main --------------------------------");
	printf("a = %d     b = %d\n", &a, &b);
	printf("*a = % d     *b = % d\n", a, b);
	*/
	



	return  0;
}