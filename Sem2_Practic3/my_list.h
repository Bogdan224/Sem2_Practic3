#pragma once
#include "TV.h"
#include <stdlib.h>
#include <string.h>

struct my_list
{
	TV* tv;
	my_list* next;
};
//Добавляет элемент в начало списка
my_list* push_front(my_list* head, TV* tv);
//Удаляет элемент из начала списка
my_list* pop_front(my_list* head);
//Выводит все элементы списка 
void PrintList(my_list* head);
//Добавляет элемент в упорядоченный список
void push(my_list** head, TV* tv);
//Удаляет элемент их упорядоченного списка
my_list* pop(my_list* head, TV* tv);
