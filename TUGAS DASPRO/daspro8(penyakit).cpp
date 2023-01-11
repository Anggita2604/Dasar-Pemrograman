//Judul
//Deteksi suatu penyakit
//Anggita Alya Salsabila
//A11.2022.14401
//01 Oktober 2022

#include <iostream>
#include <string>
using namespace std;

//Kamus
string keluhan1, keluhan2, keluhan3;

//Deskripsi
int main()
{
    cout << "===========================================================" << endl;
    cout << "            SELAMAT DATANG DI PUSKESMAS BRINGIN            " << endl;
    cout << "===========================================================" << endl;
    cout << "                 Keluhan yang biasa terjadi                " << endl;
    cout << "===========================================================" << endl;
    cout << "1.Mual" << endl;
    cout << "2.Kerongkongan sakit" << endl;
    cout << "3.Napas menjadi bau" << endl;
    cout << "4.Sakit kepala" << endl;
    cout << "5.Menggigil" << endl;
    cout << "6.Nyeri dan kram perut" << endl;
    cout << "7.Nafsu makan berkurang" << endl;
    cout << "8.Diare" << endl;
    cout << "9.Demam tinggi" << endl;
    cout << "10.Sulit bernapas" << endl;
    cout << "11.Nyeri dada" << endl;
    cout << "12.Napas berbunyi" << endl;
    cout << "13.Gangguan pencernaan" << endl;
    cout << "14.Pembengkakan perut" << endl;
    cout << endl;
    cout << "========================================================" << endl;
    cout << "Silahkan Masukkan Keluhan yang Dirasakan!" << endl;
    cout << endl;
    cout << "Masukan Gejala 1: "; getline(cin, keluhan1);
    cout <<endl;
    cout << "Masukan Gejala 2: "; getline(cin, keluhan2);
    cout <<endl;
    cout << "Masukan Gejala 3: "; getline(cin, keluhan3);
    cout << endl;
    cout << "========================================================" << endl;

    if (keluhan1=="Mual" && keluhan2=="Kerongkongan sakit" && keluhan3=="Napas menjadi bau")//Penyakit pertama
    {
        cout << "MAKA ANDA MENDERITA ASAM LAMBUNG" << endl;
    }
    else if (keluhan1=="Sakit kepala" && keluhan2=="Menggigil" && keluhan3=="Nafsu makan berkurang")//Penyakit kedua
    {
        cout << "MAKA ANDA MENDERITA DEMAM" << endl;
    }
    else if (keluhan1=="Mual" && keluhan2=="Sakit kepala" && keluhan3=="Nyeri dan kram perut")//Penyakit ketiga
    {
        cout << "MAKA ANDA MENDERITA DIARE" << endl;
    }
    else if (keluhan1=="Nafsu makan berkurang" && keluhan2=="Diare" && keluhan3=="Demam tinggi")//Penyakit keempat
    {
        cout << "MAKA ANDA MENDERITA TIPES" << endl;
    }
    else if (keluhan1=="Sulit bernapas" && keluhan2=="Nyeri dada" && keluhan3=="Napas berbunyi")//Penyakit kelima
    {
        cout << "MAKA ANDA MENDERITA ASMA" << endl;
    }
    else if (keluhan1=="Mual" && keluhan2=="Gangguan pencernaan" && keluhan3=="Pembengkakan perut")//Penyakit keenam
    {
        cout << "MAKA ANDA MENDERITA USUS BUNTU";
    }
    cout << endl;
    cout << "===========================================================" << endl;
    cout << "              TERIMA KASIH ATAS KUNJUNGAN ANDA             " << endl;
    cout << "===========================================================" << endl;

    return 0;
}
