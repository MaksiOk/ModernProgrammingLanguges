﻿// LR7_Nasl.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class X
{
protected:
    int i;

public:
    void seti(int c) { i = c; }
    virtual void print() { cout << endl << "class X : " << i; }
};
class Y : public X // наследование
{
public:
    void print() { cout << endl << "class Y : " << i; } // переопределение базовой функции
};
int main()
{
    X x;
    X* px = &x;  // Указатель на базовый класс
    Y y;
    x.seti(10);
    y.seti(15);
    px->print();  // класс X: 10
    px = &y;
    px->print();  // класс Y: 15
    cin.get();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
