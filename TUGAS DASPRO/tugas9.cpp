//Judul
//Program deteksi prodi mahasiswa berdasarkan NIM
//Anggita Alya Salsabila
//A11.2022.14401
//07 Oktober 2022

#include <iostream>
#include <string>
using namespace std;

//Kamus
char KodeFak;
int Angka, Jenjang;
string Nim;

//Deskripsi
int main ()
{
    cout << "Program Studi di UDINUS" << endl;
    cout << "Masukkan NIM Mahasiswa: "; cin >> Nim;
    cout << "Masukkan Kode Awal NIM [A-E]: "; cin >> KodeFak;
    cout << "Masukkan Kode Kedua NIM [1-2]: "; cin >> Jenjang;
    cout << "Masukkan Kode Ketiga NIM [1-6]: "; cin >> Angka;

    switch (KodeFak)
    {
    case 'A' :
        {
            cout << "MAHASISWA TERSEBUT ADA DI FAKULTAS ILMU KOMPUTER";
            switch (Jenjang)
            {
            case 1 :
                {
                    cout << "Jenjang S1";
                    break;
                }
            case 2 :
                {
                    cout << "Jenjang D3";
                    break;
                }
            default :
                {
                    cout << "DATA TIDAK ADA";
                    break;
                }
            }
            switch (Angka)
            {
            case 1 :
                {
                    cout << "Program studi Teknik Informatika";
                    break;
                }
            case 2 :
                {
                   cout << "Program studi Sistem Informasi";
                   break;
                }
            case 3 :
                {
                    cout << "Program studi Desain Komunikasi Visual";
                    break;
                }
            case 4 :
                {
                    cout << "Program studi Ilmu Komunikasi";
                    break;
                }
            case 5 :
                {
                    cout << "Program studi Film dan Televisi";
                    break;
                }
            case 6 :
                {
                    cout << "Program studi Animasi";
                    break;
                }
            default :
                {
                    cout << "TIDAK TERDETEKSI";
                    break;
                }
            }
        break;

        }

    case 'B' :
        {
            cout << "MAHASISWA TERSEBUT ADA DI FAKULTAS EKONOMI";
            switch (Jenjang)
        {
            case 1 :
                {
                    cout << "Jenjang S1";
                    break;
                }
            default :
                {
                   cout << "DATA TIDAK ADA";
                   break;
                }
            switch (Angka)
                {
                    case 1 :
                        {
                            cout << "Program studi Manajemen";
                            break;
                        }
                    case 2 :
                        {
                            cout << "Program studi Akuntasi";
                            break;
                        }
                    default :
                        {
                            cout << "TIDAK TERDETEKSI";
                            break;
                        }
                }
            break;
           }
        }
        case 'C' :
             {
                 cout << "MAHASISWA TERSEBUT ADA DI FAKULTAS ILMU BUDAYA";
                 switch (Jenjang)
                 {
                 case 1 :
                    {
                        cout << "Jenjang S1";
                        break;
                    }
                 default :
                    {
                        cout << "DATA TIDAK ADA";
                        break;
                    }
                    switch (Angka)
                        {
                            case 1 :
                                {
                                    cout << "Program studi Bahasa Inggris";
                                    break;
                                }
                            case 2 :
                                {
                                    cout << "Program studi Bahasa Jepang";
                                    break;
                                }
                            case 3 :
                                {
                                    cout << "Program studi Perhotelan";
                                    break;
                                }
                            default :
                                {
                                    cout << "TIDAK TERDETEKSI";
                                    break;
                                }
                        }
                break;
             }
             }
        case 'D' :
            {
               cout << "MAHASISWA TERSEBUT ADA DI FAKULTAS KESEHATAN";
                 switch (Jenjang)
                 {
                 case 1 :
                    {
                        cout << "Jenjang S1";
                        break;
                    }
                 default :
                    {
                        cout << "DATA TIDAK ADA";
                        break;
                    }
                    switch (Angka)
                        {
                            case 1 :
                                {
                                    cout << "Program studi Kesehatan Publik";
                                    break;
                                }
                            case 2 :
                                {
                                    cout << "Program studi Kesehatan Masyarakat";
                                    break;
                                }
                            case 3 :
                                {
                                    cout << "Program studi Rekan Medis dan Informasi Kesehatan";
                                    break;
                                }
                            default :
                                {
                                    cout << "TIDAK TERDETEKSI";
                                    break;
                                }
                        }
                break;
            }
            }
        case 'E' :
           {
             cout << "MAHASISWA TERSEBUT ADA DI FAKULTAS TEKNIK";
                 switch (Jenjang)
                 {
                 case 1 :
                    {
                        cout << "Jenjang S1";
                        break;
                    }
                 default :
                    {
                        cout << "DATA TIDAK ADA";
                        break;
                    }
                    switch (Angka)
                        {
                            case 1 :
                                {
                                    cout << "Program studi Teknik Elektro";
                                    break;
                                }
                            case 2 :
                                {
                                    cout << "Program studi Teknik Industri";
                                    break;
                                }
                            case 3 :
                                {
                                    cout << "Program studi Teknik Biomedis";
                                    break;
                                }
                            default :
                                {
                                    cout << "TIDAK TERDETEKSI";
                                    break;
                                }
                        }
                break;
           }
        default :
            {
                cout << "BUKAN TERMASUK PROGRAM STUDI DI UDINUS";
                break;
            }
    }
    }
    return 0;
}


