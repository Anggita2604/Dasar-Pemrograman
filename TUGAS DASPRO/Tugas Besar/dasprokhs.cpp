//Judul
//Program Kartu Hasil Studi
//Angggita ALya Salsabila
//A11.2022.14401
//12 Oktober 2022

#include <iostream>
using namespace std;

//Kamus
string nama, nim, prodi, prodi1, matkul;
float tugas, uts, uas, bobot;
int sks;
float na;
float ips, Jumsks =0;
int x,jum;
char PL;//pilihan

//Deskripsi
int main ()
{
    cout << "-------------------------------------------------------------- \n" ;
    cout << "                     KARTU HASIL STUDI                         \n" ;
    cout << "                 PRODI TEKNIK INORMATIKA S1                    \n" ;
    cout << "                 UNIVERSITAS DIAN NUSWANTORO                   \n" ;
    cout << "-------------------------------------------------------------- " << endl;
    do{
    cin.ignore();
    cout << "Nama : "; getline(cin,nama);
    cout << "NIM : "; getline(cin,nim);
    prodi = nim.substr(0,3);
    if (prodi == "A11")
    {
        prodi1 = "S1 Teknik Informatika";
    }
    else if (prodi == "A12")
    {
        prodi1 = "S1 Sistem Informasi";
    }
    else if (prodi == "A13")
    {
        prodi1 = "S1 Desain Komunikasi Visual";
    }
    else if (prodi == "A14")
    {
        prodi1 = "S1 Ilmu Komunikasi";
    }
    else if (prodi == "A15")
    {
        prodi1 = "S1 Film dan Televisi";
    }
    else if (prodi == "A16")
    {
        prodi1 = "S1 Animasi";
    }
    else if (prodi == "A21")
    {
        prodi1 = "D3 Teknik Informatika";
    }
    else if (prodi == "B11")
    {
        prodi1 = "S1 Manajemen";
    }
    else if (prodi == "B12")
    {
        prodi1 = "S1 Akutansi";
    }
    else if (prodi == "C11")
    {
        prodi1 = "S1 Sastra Inggris";
    }
    else if (prodi == "C12")
    {
        prodi1 = "S1 Sastra Jepang";
    }
    else if (prodi == "C13")
    {
        prodi1 = "S1 Perhotelan";
    }
    else if (prodi == "D11")
    {
        prodi1 = "S1 Kesehatan Publik";
    }
    else if (prodi == "D12")
    {
        prodi1 = "S1 Kesehatan Masyarakat";
    }
    else if (prodi == "D23")
    {
        prodi1 = "S1  Rekan Medis dan Informasi Kesehatan";
    }
    else if (prodi == "E11")
    {
        prodi1 = "S1  Teknik Elektro";
    }
    else if (prodi == "E12")
    {
        prodi1 = "S1  Teknik Industri";
    }
    else if (prodi == "E13")
    {
        prodi1 = "S1  Teknik Biomedis";
    }
    else
    {
        prodi1 = "TIDAK TERDDETEKSI";
    }
    cout << "Program Studi : " << prodi1;
    cout << endl;
    cout << "-------------------------------------------------------------- \n" ;
    cout << "Banyak Mata Kuliah : "; cin >> jum;
    cout << "-------------------------------------------------------------- \n" ;
    cout << endl;

    x=0;
    do
    {
        cin.ignore();
        cout << "Mata Kuliah" <<x+1<<" : "; getline(cin, matkul);
        cout << "SKS : "; cin >> sks;
        cout << "Nilai Tugas : "; cin >> tugas;
        cout << "Nilai UTS : "; cin >> uts;
        cout << "Nilai UAS : "; cin >> uas;
        x=x+1;

        na=((tugas+uts+uas)/3);

        cout << "-------------------------------------------------------------- \n" ;
        cout << "Nilai Akhir : " << na << endl;
        cout << "Nilai Huruf : ";
        if (na>=85 && na<=100)
        {
            cout<<"A";bobot=4*sks;
        }
        else if (na>=80 && na<=85)
        {
            cout<<"AB";bobot=3.5*sks;
        }
        else if (na>=70 && na<=80)
        {
            cout<<"B";bobot=3*sks;
        }
        else if (na>=65 && na<=70)
        {
            cout<<"BC";bobot=2.5*sks;
        }
        else if (na>=60 && na<=65)
        {
            cout<<"C";bobot=2*sks;
        }
        else if (na>=50 && na<=60)
        {
            cout<<"D";bobot=1*sks;
        }
        else if (na>=40 && na<=50)
        {
            cout<<"E";bobot=0*sks;
        }

        Jumsks=Jumsks+sks;
        ips+=bobot;
        cout << endl;
        cout << "-------------------------------------------------------------- \n" ;
    }
    while (x<jum);

    cout << "Nama Mahasiswa : " << nama;
    cout << " NIM : " << nim;
    cout << " Program Studi : " << prodi1;
    cout << " Jumlah SKS : " << Jumsks;
    cout << " IPS anda : " << ips/Jumsks;
    cout << endl;
    cout << "Apa Anda ingin mengulang lagi?" << endl;
    cout << "Pilih (y/t) : "; cin >> PL;

    }while (PL=='y'||PL=='Y');
        cout << "Anda tidak ingin mengulangi" << endl;
    cout << endl;

return 0;


}
