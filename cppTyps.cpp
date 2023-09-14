#include <iostream>
using namespace std;
int main()
{
       /*setlocale(LC_ALL,"rus")*/
       short a1 = SHRT_MIN;
       short a2 = SHRT_MAX;
       int a3 = INT32_MIN;
       int a4 = INT32_MAX;
       long long a5 = LLONG_MIN;
       long long a6 = LLONG_MAX;
       unsigned short a7 = 0;
       unsigned short a8 = USHRT_MAX;
       unsigned int a9 = UINT32_MAX;
       unsigned long long a10 = ULLONG_MAX;
       float a11 = FLT_MAX;
       float a12 = FLT_MIN;
       double a13 = DBL_MAX;
       double a14 = DBL_MIN;
       char a15 = 0;
       char a16 = 255;
       bool a17 = 0;
       bool a18 = 1;
       cout << "type\t\t|byte\t|min\t\t\t|max" << endl;
       cout << "short\t\t|" << sizeof(a1) << "\t|" << a1 << "\t\t\t|" << a2 << endl;
       cout << "int\t\t|" << sizeof(a3) << "\t|" << a3 << "\t\t|" << a4 << endl;
       cout << "llong\t\t|" << sizeof(a5) << "\t|" << a5 << "\t|" << a6 << endl;
       cout << "ushort\t\t|" << sizeof(a7) << "\t|" << a7 << "\t\t\t|" << a2 << endl;
       cout << "uint\t\t|" << sizeof(a8) << "\t|" << a8 << "\t\t\t|" << a4 << endl;
       cout << "ullong\t\t|" << sizeof(a10) << "\t|" << a10 << "\t|" << a6 << endl;
       cout << "float\t\t|" << sizeof(a12) << "\t|" << a12 << "\t\t|" << a11 << endl;
       cout << "double\t\t|" << sizeof(a14) << "\t|" << a14 << "\t\t|" << a13 << endl;
       cout << "char\t\t|" << sizeof(a15) << "\t|" << a15 << "\t\t\t|" << a16 << endl;
       cout << "bool\t\t|" << sizeof(a17) << "\t|" << a17 << "\t\t\t|" << a18 << endl;
}  
