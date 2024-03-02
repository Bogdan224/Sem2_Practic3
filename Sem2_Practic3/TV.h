#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct TV
{
	char _model[20];
	int _displaySize;
	bool _haveWIFI;
};

//�������������� ���� ���������
void Init(TV* tv, const char model[20], int displaySize,bool haveWIFI);
//������� ��� �������� tv � �������
void PrintTV(TV* tv);
//���������� tv1 � tv2
bool Equals(TV* tv1, TV* tv2);
//������� ������� �� �������� ����� _displaySize � tv1 � tv2
bool Less(TV* tv1, TV* tv2);
