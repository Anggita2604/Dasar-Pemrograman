//Judul
//Perhitungan Aritmatika
//Anggita Alya Salsabial
//A11.2022.14401
//25 Sept 2022

#include <iostream>
using namespace std;

//Kamus
int r,t;
float mat1,mat2,mat3,mat4;

//Deskripsi
main()
{
    cout << "Masukkan nilai r nya: "; cin >> r;
    cout << "Masukkan nilai t nya: "; cin >> t;

    cout << "Perkalian" << endl;
    mat1=(r*t);
    cout << "Maka hasil perkalian r dan t adalah: " << mat1 << endl;

    cout << "Pembagian" << endl;
    mat2=(r/t);
    cout << "Maka hasil pembagian r dan t adalah: " << mat2 << endl;

    cout << "Pengurangan" << endl;
    mat3=(r-t);
    cout << "Maka hasil pengurangan r dan t adalah: " << mat3 << endl;

    cout << "Penjumlahan" << endl;
    mat4=(r+t);
    cout << "Maka hasil penjumlahan r dan t adalah: " << mat4 << endl;

    if((r+t)%2==0)
    {
        cout << "Maka hasil dari penjumlahannya genap " << mat4 << endl;
    }
    else
    {
        cout << "Maka hasil dari penjumlahannya ganjil " << mat4 << endl;
    }
    return 0;
}
