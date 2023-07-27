#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void first() {
    int count = 0, c = 0, i, j = 0, k, space = 0;
    int maxTime = 0, index = 0;

    char str[100], p[50][100], str1[20], ptr1[50][100];

    char* ptr;

    printf("Enter the names\n");
    scanf(" %[^\n]s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] == ' ') || (str[i] == ',' && str[i + 1] == ' ') || (str[i] == '.'))
        {
            space++;
        }
    }

    for (i = 0, j = 0, k = 0; j < strlen(str); j++)
    {
        if ((str[j] == ' ') || (str[j] == 44) || (str[j] == 46))
        {
            p[i][k] = '\0';
            i++;
            k = 0;
        }
        else
            p[i][k++] = str[j];
    }

    k = 0;

    for (i = 0; i <= space; i++)
    {
        for (j = 0; j <= space; j++)
        {
            if (i == j)
            {
                strcpy(ptr1[k], p[i]);
                k++;
                count++;

                break;
            }
            else
            {
                if (strcmp(ptr1[j], p[i]) != 0)
                    continue;
                else
                    break;
            }
        }
    }

    for (i = 0; i < count; i++)
    {
        for (j = 0; j <= space; j++)
        {
            if (strcmp(ptr1[i], p[j]) == 0)
                c++;
        }
        if (c > maxTime) {
            maxTime = c;
            printf("maximum time = %d\n", maxTime);
            printf("meno = %s", ptr1[i]);
        }
        c = 0;
    }

    
}


typedef struct s_list {
    int id;
    char* name_tovar;
    char* name_vyrobca;
    int pocet;
    int cena;

    struct s_list* next;
} t_list;

t_list* create_node(int set_id, char* set_name_vyrobca, char* set_name_tovar, int set_pocet, int set_cena) {
    t_list* node = (t_list*)malloc(sizeof(t_list));
    node->id = set_id;
    node->name_vyrobca = set_name_vyrobca;
    node->name_tovar = set_name_tovar;
    node->pocet = set_pocet;
    node->cena = set_cena;
    node->next = NULL;

    return node;
}


void create_first_element(t_list** list, int set_id, char* set_name_vyrobca, char* set_name_tovar, int set_pocet, int set_cena) {

    *list = create_node(set_id, set_name_vyrobca, set_name_tovar, set_pocet, set_cena);
}



void push(t_list** list, int set_id, char* set_name_vyrobca, char* set_name_tovar, int set_pocet, int set_cena) {

    t_list* new_element = create_node(set_id, set_name_vyrobca, set_name_tovar, set_pocet, set_cena);
    t_list* tmp = *list;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }

    tmp->next = new_element;

}

int main() {
    //first();

    t_list* list;
    create_first_element(&list, 0, "vyrobec 1", "tovar 1", 2, 15);

    push(&list, 1, "vyrobec 2", "tovar 2", 3, 40);
    push(&list, 2, "vyrobec 3", "tovar 3", 10, 30);
    push(&list, 3, "vyrobec 4", "tovar 4", 5, 12);



    while (list != NULL) {
        printf("id = %d\nvyrobec = %s\ntovar = %s\npocet = %d\ncena = %d\n\n\n//////////\n\n", list->id, list->name_vyrobca, list->name_tovar, list->pocet, list->cena);
        list = list->next;
    }



	return 0;
}