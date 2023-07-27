#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

int alokuj(int n) {
	int* pole;
	pole = (int*)malloc(n * sizeof(int));
	return pole;
}

int nacitaj(int *pole, int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &pole[i]);
	}
	return pole;
}

int vypis(int* pole, int n) {
	for (int i = 0; i < n; i++) {
		printf("ptr[%d] = %d\n", i, pole[i]);
	}
}


int main () {

	/*							// ULOHA 4.1
	int n;
	int* ptr;
	scanf("%d", &n);
	ptr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &ptr[i]);
		printf("ptr[%d] = %d\n", i, ptr[i]);
	}
	return 0;
	*/
	

	/*						// ULOHA 4.2
	int n, *arr;
	scanf("%d", &n);
	arr = alokuj(n);
	nacitaj(arr, n);
	vypis(arr, n);
	return 0;
	*/
	
}