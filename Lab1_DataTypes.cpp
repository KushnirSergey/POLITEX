#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int x, a, b, y;
    double res;
//1
   cout << 1 << endl << "Kushnir Sergey Valentinovich!" << endl;
//2
   cout << 2 << endl << "min int = " << INT_MIN << "," << "max int = " << INT_MAX <<", size of int = " << sizeof(int) << endl;
   cout << "min unsigned int = 0, max unsigned int = " << UINT_MAX << ", size of unsigned int = " << sizeof(unsigned int) << endl;
   cout << "min short = " << SHRT_MIN <<", max short = " << SHRT_MAX<< ", size of short = " << sizeof(short) << endl;
   cout << "min unsigned short = 0, max unsigned short = " << USHRT_MAX << ", size of unsigned short = " << sizeof(unsigned short) << endl;
   cout << "min long = " << LONG_MIN << ", max long = " << LONG_MAX << ", size of long = " << sizeof(long) << endl;
   cout << "min long long = " << LLONG_MIN << ", max long long = " <<  LLONG_MAX << ", size of long long = " << sizeof(long long) << endl;
//   cout << "min double = " << DBL_MIN << ", max double = " << DBL_MAX << ", size of double = " << sizeof(double) << endl;
   cout << "min char = " << SCHAR_MIN << ", max char = " << SCHAR_MAX<< ", size of char = " << sizeof(char) << endl;
   cout << "min bool = 0, max bool = 255, size of bool = "<< sizeof(bool) << endl;
//3
   cout << 3 << endl << "Введите число: ";
   cin >> x;
   cout << "В бинарном виде: " << bitset<32>(x) << endl;
   cout << "В шестнадцатиричном виде: " << hex << x << endl;
   cout << "bool: " << bool(x) << endl;
   cout << "double: " << double(x) << endl;
   cout << "char: " << char(x) << endl;
//4
   cout << 4 << endl << "Введите коэффициенты a * x = b: ";  cin >> a >> b;
   if (a == 0) { cout << "Fatal error!"; return 0; }
   cout << a << " * x = " << b << endl;
   cout << "x = " << b << " / " << a << endl;
   res = double(b) / double(a);
   cout << "x = " << res << endl;
   cout << "Ответ: " << res << endl;
//5
   cout << 5 << "Введите координаты отрезка на прямой: "; cin >> x >> y;
   res = (double(x)+double(y))/2;
   cout << "Середина отрезка находится в точке с координатой: " << res << endl;
   return 0;
}




