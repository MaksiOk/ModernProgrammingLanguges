﻿// LR8_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

const char fname[] = "NewFile.txt";

using namespace std;

int main()
{
    // Создаем новый файл, если только он уже не существует
    ofstream ofs(fname, ios::out);
    if (!ofs) // Проверка состояния потока
    {
        cout << "Wrong situation! File " << fname << " already exists." << endl;
        return 0;
    }
    else
    {
        ofs << "This line is written to a new file";
        ofs.close(); // Закрываем файл
        fstream fs; // Определяем новый объект
        // Открываем файл и устанавливаем на EOF
        fs.open(fname, ios::out | ios::ate);
        fs << "Now it has been added";
        fs.close(); // Закрываем файл
        // Открываем файл как входной
        fstream ifs(fname);
        if (ifs)
        {
            cout << "The old file contains" << "..." << endl;
            char Line[80];
            ifs.getline(Line, sizeof(Line));
            cout << Line;
        }
        else
        {
            cout << "Error when reopening " << fname << endl;
        }
    }
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