﻿#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"ukr");

    float R1, R2, R3, r3, S1, S2, S3, radius;
    bool circle, ring_pos;
    cout << "Великий радіус R1:";
    cin >> R1;
    cout << "Великий радіус R2:";
    cin >> R2;
    cout << "Великий радіус R3:";
    cin >> R3;
    cout << "Маленький радіус r3:";
    cin >> r3;
    cout << "Площа S1:";
    cin >> S1;
    cout << "Площа S2:";
    cin >> S2;
    cout << "Площа S3:";
    cin >> S3;
    S1 = 3, 14 * R1 * R1;
    S2= 3, 14 * R2 * R2;
    S3 = 3, 14 * (R3 * R3 - r3 * r3);
    //Потрібно визначити площі кіл та кільця
    cout << "R1>R2" << endl;
    cout << "R3=R1" << endl;
    cout << "R2=r3" << endl;
    
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
