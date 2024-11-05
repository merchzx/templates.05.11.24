#include<iostream>
#include <algorithm>
using namespace std; //  Шаблоны. Введение


template <typename T>
void Sum(T a, T b)
{
    cout << a + b << endl;
}

template <typename T, typename X>
void Sum(T a, X b)
{
    cout << a + b << endl;
}
/*
template<typename T>
тип возвр. значения Название_функции(T параметр(ы))
{
   действие;
}
*/


template<class T>
void Init(T mas[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        mas[i] = rand() % 100 * 1.1;
    }
}

template <typename T>void Print(T mass[], int size) {
    for (int i = 0; i < size; ++i)
    {
        cout << mass[i];
    }
    cout << endl;
}

template<typename T> void summa(T mass[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += mass[i];
    }
    cout << sum<<endl;
}

template<typename T> void max(T mass[], int size) {
    T maxx = mass[0];
    for (int i = 1; i < size; ++i)
    {
       maxx = max(maxx,mass[i]);
    }
    cout << maxx << endl;
}

template <typename T,int j>void max2(T mass[][j],int size1,int size2) {
    T max = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int k = 0; k < size2; k++)
        {
            if (mass[i][k] > max) {
                max = mass[i][k];
            }
        }
    }
    cout <<"Max 2 - " << max;
}

template <typename T, int j,int g>void max3(T mass[][j][g], int size1,int size2,int size3) {
    T max = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int k = 0; k < size2; k++)
        {
            for (int f = 0; f < size3; f++)
            {
                if (mass[i][k][f] > max) {
                    max = mass[i][k][f];
                }
            }
        }
    }
    cout << "\nMax 3 - " << max;
}

template <typename T> void dwaChisla(T num1,T num2) {
    T maxx = max(num1,num2);
    cout << "\nMAX2 - " << maxx;
}

template <typename T> void triChisla(T num1, T num2,T num3) {
    T maxx = max(num1, num2);
    if (num1 > num2) {
        maxx = max(num1, num2);
    }
    else {
        maxx = max(num2, num3);
    }
    cout << "\nMAX3 - " << maxx;
}

int main()
{
    //Sum(1,2); // int int
    //Sum('a', 'b'); // char char
    //Sum(10, 20); // int int
    //Sum(2.4, 5); // double , int

    int mas[10];

    double mas2[5];

    char mas3[8];

    Init(mas, 10);
    Init(mas2, 5);
    Init(mas3, 8);

    Print(mas, 10);
    Print(mas2, 5);
    Print(mas3, 8);

    summa(mas, 10);
    summa(mas2, 5);
    summa(mas3, 8);


    int mass2[3][3] =
    { {3,3,3},
    {3,3,3 },
    {3,13,5 }
    };

    max2(mass2, 3, 3);

    int matrix[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    max3(matrix,2,2,3);

    dwaChisla(1, 10);
    triChisla(1, 2, 12);
}

