#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>



/*													ULOHA 6.1
int main() {
	char riadok[258];
	int length = 1;	

	while (length != 0) {

		gets(riadok);
		length = strlen(riadok);
		for (int i = 0; i < length; i++) {

			if (riadok[i] == '*') {
				printf("^");
			}
			if (riadok[i] != '*') {
				printf(" ");
			}

		}
		printf("\n");

	}

	return 0;
}

*/

/*																			ULOHA 6.2
int lenInit(char *str, int len){
    
	if ( !(*str) ) {
		return len;
	}
    else {
    	len = lenInit(str + 1, len + 1);
	}
        
}
int main() {
	char text[256], end;
	int length, maximum = 0;

	while(1){
		
		scanf("%s",text);
		length = lenInit(text, 0);

		printf("%d ", length);
		printf("  ");

		if (length > maximum){
			maximum = length;
		}

		scanf("%c", &end);
		if (end == '\n') {
		   break;
		}	
	}
	
	printf("\nNajdlhsie slovo ma %d znakov.\n", maximum);
	

	return 0;
}
*/

int CurrentLength(char* character, int hlaska) {

	if (!(*character)) {
		return hlaska;
	}


	if (*character == 'a' || *character == 'e' || *character == 'y' || *character == 'i' || *character == 'o' || *character == 'u') {
		hlaska = CurrentLength(character + 1, hlaska + 1);
	}
	else {
		hlaska = CurrentLength(character + 1, hlaska);
	}

}


int main() {
	char text[256], end;
	int pocet_hlasok, maximumHlasok = 0;

	while (1) {

		scanf("%s", text);
		pocet_hlasok = CurrentLength(text, 0);
		printf("%d ", pocet_hlasok);
		printf("  ");

		if (pocet_hlasok > maximumHlasok) {
			maximumHlasok = pocet_hlasok;
		}

		scanf("%c", &end);
		if (end == '\n') {
			break;
		}
	}


	printf("", maximumHlasok);

	return 0;
}
////////////////////////