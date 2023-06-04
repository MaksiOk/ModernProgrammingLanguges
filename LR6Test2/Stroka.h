#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(suppress : 4996)
class Stroka
{
	char str[80];
public:
	Stroka() = default;			//����������� �� ���������
	Stroka(char);
	Stroka(const char *);		//����������� ���� 
	Stroka(const Stroka&);
	//Stroka();					// �����������, ������� ������� ��������� ������, ��������� �������� ������ ������������ ������
	~Stroka();					// ���������� ��� ��������� ������ ������
	void* operator new(size_t);
	void* operator new[](size_t);
	void operator delete(void*);
	void operator delete[](void*);
	Stroka& operator=(const Stroka&);
	Stroka& operator+(const Stroka&);
	int operator==(const Stroka&);
	int dlina();
	void input();
	void output();
	friend std::ostream& operator<< (std::ostream& out, const Stroka& s) {  //���������� ��������� <<
		out << s.str;
		return out;
	}
	friend std::istream& operator >> (std::istream& in, Stroka& s) {
		char h[80];
		//char dummy;
		// ��������� ����� � ����� ������������ ������ �� ���
		in >> h;

		// � ��� ��� ������� ������� �������� ����� ����� ��������� ���������
		// ����� ������������ ������ ��������
		s = Stroka(h);
		return in;
	}
};

