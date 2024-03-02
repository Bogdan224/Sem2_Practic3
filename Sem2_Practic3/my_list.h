#pragma once
#include "TV.h"
#include <stdlib.h>
#include <string.h>

struct my_list
{
	TV* tv;
	my_list* next;
};
//��������� ������� � ������ ������
my_list* push_front(my_list* head, TV* tv);
//������� ������� �� ������ ������
my_list* pop_front(my_list* head);
//������� ��� �������� ������ 
void PrintList(my_list* head);
//��������� ������� � ������������� ������
void push(my_list** head, TV* tv);
//������� ������� �� �������������� ������
my_list* pop(my_list* head, TV* tv);
