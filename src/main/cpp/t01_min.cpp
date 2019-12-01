//Напишите функцию min(a, b), вычисляющую минимум двух чисел. 
// Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. 
// Считайте четыре целых числа и выведите их минимум.
//Формат входных данных
//        Вводятся четыре целых числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//4
//5
//6
//7
//Sample Output:
//
//4

#include "t01_min.h"
#include <iostream>


using namespace std;

//function min 

//function min4 

int min(int x,int y)
{
    if(x<y)return x;
    else return y;
}

//function min4 
int min4(int&x,int&y,int&m,int&n)
{
    return min(min(x,y), min(m,n));
}
int t01_min() {
    int x,y,m,n;
    cin >>x>> y >>m>>n;
    cout << min4(x,y,m,n);
    return 0;
}
