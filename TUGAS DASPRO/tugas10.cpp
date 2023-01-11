//Judul
//Bilangan Kelipatan 6 antara 0-100
//Anggita Alya Salsabila
//A11.2022.14401
//10 Oktober 2022

#include <iostream>
using namespace std;

//Kamus
int x, y;

//Deskripsi
int main()
{
    cout << "-----------------------------------------------\n";
    cout << "      Bilangan Kelipatan 6 antara 0-100: \n";
    cout << "-----------------------------------------------\n";

    x = 10;
    while (x >= 5)
    {
       y = 0;
       do
       {
           cout << y;
           cout << ",";
           y = y+6;
       }
       while (y < 100);
       x = x - 1;
       cout << endl;
    }
    return 0;
}
