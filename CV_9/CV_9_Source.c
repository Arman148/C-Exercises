#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>



typedef struct s_list {
    int id;
    char* name_tovar;
    char* name_vyrobca;
    int pocet;
    int cena;
    int typ_ceny;

    struct s_list* next;
} t_list;

t_list* create_node(int set_id, char* set_name_vyrobca, char* set_name_tovar, int set_pocet, int set_cena, char *typ_ceny) {
    t_list* node = (t_list*)malloc(sizeof(t_list));
    node->id = set_id;
    node->name_vyrobca = set_name_vyrobca;
    node->name_tovar = set_name_tovar;
    node->pocet = set_pocet;
    node->cena = set_cena;
    node->typ_ceny = typ_ceny;
    node->next = NULL;

    return node;
}



void create_first_element(t_list** list, int set_id, char* set_name_vyrobca, char* set_name_tovar, int set_pocet, int set_cena, char* typ_ceny) {
    *list = create_node(set_id, set_name_vyrobca, set_name_tovar, set_pocet, set_cena, typ_ceny);
}

void push(t_list** list, int set_id, char* set_name_vyrobca, char* set_name_tovar, int set_pocet, int set_cena, int typ_ceny) {

    t_list* new_element = create_node(set_id, set_name_vyrobca, set_name_tovar, set_pocet, set_cena, typ_ceny);
    t_list* tmp = *list;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }

    tmp->next = new_element;

}


void delete_element(t_list** list, char* name) {
    t_list* del_elem = *list;
    int i = 0, j = 0;

    while (del_elem->next != NULL) {
        i++;
        del_elem = del_elem->next;
        if (!strcmp(name, del_elem->name_tovar)) {
            j = i;
        }
    }

    t_list* copy = *list;

    for (int k = 0; k < j; k++) {
        copy = copy->next;
    }

    t_list* pred = *list;

    for (int t = 0; t < j - 1; t++) {
        pred = pred->next;       
    }

    del_elem = copy;
    pred->next = copy->next;
    free(del_elem);

    printf("j = %d\n", j);
}

int main() {

    t_list* list;
    create_first_element(&list, 0, "vyrobec 1", "tovar 1", 2, 15, "kg");

    push(&list, 1, "vyrobec 2", "tovar 2", 3, 40, "kg");
    push(&list, 2, "vyrobec 3", "tovar 3", 10, 30, "kus");
    push(&list, 3, "vyrobec 4", "tovar 4", 5, 12, "kus");

    delete_element(&list, "tovar 3");

    while (list != NULL) {
        printf("id = %d\nvyrobec = %s\ntovar = %s\npocet = %d\ncena = %d cena za %s\n\n\n//////////\n\n", list->id, list->name_vyrobca, list->name_tovar, list->pocet, list->cena, list->typ_ceny);
        list = list->next;
    }


    return 0;
}