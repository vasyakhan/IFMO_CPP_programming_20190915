//Проверьте, принадлежит ли точка данной закрашенной области:
//
// https://www.dropbox.com/s/3h3nl34g4ciiglt/3795.png?dl=1
//
//Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInArea(x, y), возвращающую True, если точка принадлежит области 
// и False, если не принадлежит. 
// Основная программа должна считать координаты точки, вызвать функцию IsPointInArea 
// и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInArea не должна содержать инструкцию if.
//Формат входных данных
//        Вводятся два действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//-4
//-4
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//-4
//-3
//Sample Output 2:
//
//NO

#include <iostream>
#include <cmath>

using namespace std;

//function IsPointInArea
bool IsPointInArea(int&,int&);
int t04_area() {
int a,b;
    cin>>a>>b;
    if(IsPointInArea(a,b))
    cout<<"YES";
    else cout<<"NO";
    return 0;
}
bool IsPointInArea(int&a,int&b)
{
    if((b>=(2*a+2)&&b>=-a&&(pow((a+1),2)+pow((b-1),2)<=4))||(b<=(2*a+2)&&b<=-a&&(pow((a+1),2)+pow((b-1),2)>=4)))
    return true;
    else return false;
}