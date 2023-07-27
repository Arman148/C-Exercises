#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>



int main(){
 
	FILE* filePointer;
	char buffer[50];
	char* ptr;
	double num = 0;
	double sum = 0;
	double first_num = 0;
	int i = 0;

	filePointer = fopen("suma.txt", "r");
	printf("Otvorenie suboru\n");

	while (fgets(buffer, 50, filePointer)) {
		num = strtod(buffer, &ptr);
		if (i == 0) {
			first_num = num;
		}
		else {
			sum += num;
		}
		i++;
	}

	printf("Kontrola sumy\n");
	if (sum == first_num) {
		printf("Suma je spravna\n");
	}
	else {
		printf("Suma je nespravna\n");
	}

	fclose(filePointer);

}
