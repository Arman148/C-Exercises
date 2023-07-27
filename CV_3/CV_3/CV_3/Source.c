#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

int parne(int x[], int pocetx, int y[]) {													//////////////////function parne from Uloha 3.1
	int a = 0;                               /////////// pocet prvkov y[]
	for (int i = 0; i < pocetx; i++) {
		if (x[i] % 2 == 0) {				/////// zisti ci je x[i] parne alebo neparne
			y[a] = x[i];
			a++;
		}		
	}
	return a;
}

int nasobky(int x[], int pocetx, int y[], int k) {	// funciton nasobky from uloha 3.2
	int a = 0;	// pocet provkov y[]
	for (int i = 0; i < pocetx; i++) {
		if ((x[i] % k) == 0) {	//zistim delitelne alebo nie delitelne
			y[a] = x[i];
			a++;
		}
	}

	return a;
}

int delitelne(int x[], int pocetx, int y[], int k) { // funciton delitelne from uloha 3.3
	int a = 0; // pocet prvkov y[]
	for (int i = 0; i < pocetx; i++) {
		if ((k % x[i]) == 0) { // zistim ci je k delitelne na prvky x[]
			y[a] = x[i];
			a++;
		}
	}

	return a;
}
int main() {


	/*																	Uloha 3.1
	int x[7] = { 4, 7, 1, 3, 2, 5, 6 };
	int pocetx = 7;
	int y[7];
	int i, pocety = parne(x, pocetx, y);
	printf("pocety = %d\ny = {", pocety);
	for (i = 0; i < pocety; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", y[i]);
	}
	printf("}\n");
	return 0;
	*/

	/*																		////////// Uloha 3.2
	int x[] = { 4, 7, 10, 1, 3, 9, 2, 5, 8, 6 }, y[10];
	int pocetx = 10;
	int pocety = nasobky(x, pocetx, y, 2); // volanie funkcie
	printf("pocety: %d\n", pocety);	
	printf("y : {");
	for (int i = 0; i < pocety; i++) {
		printf(" %d ", y[i]);
	}
	printf("}\n");
	return 0;
	*/


	/*														/////// Uloha 3.3
	int x[] = { 4, 7, 10, 2, 3, 9, 6, 5, 8, 12 }, y[10];
	int pocetx = 10;
	int pocety = delitelne(x, pocetx, y, 24); // volanie funkcie
	printf("pocety = %d\ny = {", pocety);
	for (int i = 0; i < pocety; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", y[i]);
	}
	printf("}\n");
	return 0;
	*/

	/*																	/////////////// Uloha 3.4
	int* a = (int*)malloc(sizeof(int)), * b = (int*)malloc(sizeof(int)); 
	int c, sucet;
	printf("napiste 3 cisla:\n");
	scanf("%d %d %d", a, b, &c);
	sucet = *a + *b + c;
	printf("%d + %d + %d = %d\n", *a, *b, c, sucet);
	free(a);
	free(b);
	*/

	/*														Uloha 3.5
	int n=0, k;
	char* s;
	scanf("%d", &n);
	k = n;
	char* str = (char*)malloc(sizeof(char) * (n+1));
	printf("Enter string here: ");
	scanf("%s", str);
	for (int i = n-1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	free(str);
	*/

	
		char* filename[50];
		scanf("%s", &filename);		
		FILE* fp = fopen(filename, "r");
		int character[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; // pismena abecedy
		char c;
		if (fp == NULL) {
			printf("neexistuje taky subor");
		}
		else {
			printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
			while (!feof(fp)) {
				c = fgetc(fp); // reading the file
				if (c == '.') {
					printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", character[0], character[1], character[2], character[3], character[4], character[5], character[6], character[7], character[8], character[9], character[10], character[11], character[12], character[13], character[14], character[15], character[16], character[17], character[18], character[19], character[20], character[21], character[22], character[23], character[24], character[25]);
					character[0] = 0;
					character[1] = 0;
					character[2] = 0;
					character[3] = 0;
					character[4] = 0;
					character[5] = 0;
					character[6] = 0;
					character[7] = 0;
					character[8] = 0;
					character[9] = 0;
					character[10] = 0;
					character[11] = 0;
					character[12] = 0;
					character[13] = 0;
					character[14] = 0;
					character[15] = 0;
					character[16] = 0;
					character[17] = 0;
					character[18] = 0;
					character[19] = 0;
					character[20] = 0;
					character[21] = 0;
					character[22] = 0;
					character[23] = 0;
					character[24] = 0;
					character[25] = 0;


				}
				else {

					if (c == 65 || c == 97) {
						character[0]++;
					}
					else if (c == 66 || c == 98) {
						character[1]++;
					}
					else if (c == 67 || c == 99) {
						character[2]++;
					}
					else if (c == 68 || c == 100) {
						character[3]++;
					}
					else if (c == 69 || c == 101) {
						character[4]++;
					}
					else if (c == 70 || c == 102) {
						character[5]++;
					}
					else if (c == 71 || c == 103) {
						character[6]++;
					}
					else if (c == 72 || c == 104) {
						character[7]++;
					}
					else if (c == 73 || c == 105) {
						character[8]++;
					}
					else if (c == 74 || c == 106) {
						character[9]++;
					}
					else if (c == 75 || c == 107) {
						character[10]++;
					}
					else if (c == 76 || c == 108) {
						character[12]++;
					}
					else if (c == 77 || c == 109) {
						character[13]++;
					}
					else if (c == 78 || c == 110) {
						character[14]++;
					}
					else if (c == 79 || c == 111) {
						character[15]++;
					}
					else if (c == 80 || c == 112) {
						character[16]++;
					}
					else if (c == 81 || c == 113) {
						character[17]++;
					}
					else if (c == 82 || c == 114) {
						character[18]++;
					}
					else if (c == 83 || c == 115) {
						character[19]++;
					}
					else if (c == 84 || c == 116) {
						character[20]++;
					}
					else if (c == 85 || c == 117) {
						character[21]++;
					}
					else if (c == 86 || c == 118) {
						character[22]++;
					}
					else if (c == 87 || c == 119) {
						character[23]++;
					}
					else if (c == 88 || c == 120) {
						character[24]++;
					}
					else if (c == 89 || c == 121) {
						character[25]++;
					}
					else if (c == 90 || c == 122) {
						character[26]++;
					}

				}

			}

		}
		

		fclose(fp);	
		

	return 0;

	
	
}
