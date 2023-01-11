//Judul
//Pendataan Penyakit
//Anggita Alya Salsabila
//A11.2022.14401
//12 Oktober 2022

#include <iostream>
using namespace  std;

//Kamus
char Nama [35];
char Alamat [70];
char JK [15];
char Usia [18];
char PL; //pilihan
int MK, SK, MN, ND, SB, MG;
string gejala1, gejala2, gejala3;


//Deskripsi
int main()
{
    cout << "===========================================================" << endl;
    cout << "            SELAMAT DATANG DI PUSKESMAS BRINGIN            " << endl;
    cout << "===========================================================" << endl;
    cout << "                       BIODATA PASIEN                      " << endl;
    cout << "Nama: "; gets(Nama);
    cout << "Alamat: "; gets(Alamat);
    cout << "Jenis Kelamin: "; gets(JK);
    cout << "Usia: "; gets(Usia);
    cout << endl;
    cout << "===========================================================" << endl;
    cout << "                     PILIH JENIS LAYANAN                   " << endl;
    cout << "1.Umum" << endl;
    cout << "2.BPJS" << endl;
    cout << "Pilih salah satu (1-2) : "; cin >> PL;
    cout << endl;
    cout << "===========================================================" << endl;
    cout << "                     PILIH JENIS PERAWATAN                 " << endl;
    cout << "1.RAWAT INAP" << endl;
    cout << "2.RAWAT JALAN" << endl;
    cout << "Pilih salah satu (1-2) : "; cin >> PL;
    cout << endl;
    cout << "===========================================================" << endl;
    cout << "                         PILIH KELAS                       " << endl;
    cout << "1.REGULER" << endl;
    cout << "2.VIP" << endl;
    cout << "3.VVIP" << endl;
    cout << "Pilih salah satu (1-3) : "; cin >> PL;
    cout << "===========================================================" << endl;
    cout << "           PILIH DOKTER YANG INGIN DIKUNJUNGI              " << endl;
    cout << "1.Dokter Penyakit Dalam" << endl;
    cout << "2.Dokter Umum" << endl;
    cout << "3.Dokter Saraf" << endl;
    cout << "4.Dokter Bedah" << endl;
    cout << "Pilih salah satu (1-4) : "; cin >> PL;
    cout << endl;
    cout << "==========================================================" << endl;
    do{
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
    cout << "========================================================" << endl;
    cout << endl;
    cin.ignore();
    cout << "Masukan Gejala 1: "; getline(cin,gejala1);
    cout << "Masukan Gejala 2: "; getline(cin,gejala2);
    cout << "Masukan Gejala 3: "; getline(cin,gejala3);
    cout << endl;
    cout << "========================================================" << endl;

    if (gejala1=="Mual" && gejala2=="Kerongkongan sakit" && gejala3=="Napas menjadi bau")//Penyakit pertama
    {
        cout << "MAKA ANDA MENDERITA ASAM LAMBUNG" << endl;
    }
    else if (gejala1=="Sakit kepala" && gejala2=="Menggigil" && gejala3=="Nafsu makan berkurang")//Penyakit kedua
    {
        cout << "MAKA ANDA MENDERITA DEMAM" << endl;
    }
    else if (gejala1=="Mual" && gejala2=="Sakit kepala" && gejala3=="Nyeri dan kram perut")//Penyakit ketiga
    {
        cout << "MAKA ANDA MENDERITA DIARE" << endl;
    }
    else if (gejala1=="Nafsu makan berkurang" && gejala2=="Diare" && gejala3=="Demam tinggi")//Penyakit keempat
    {
        cout << "MAKA ANDA MENDERITA TIPES" << endl;
    }
    else if (gejala1=="Sulit bernapas" && gejala2=="Nyeri dada" && gejala3=="Napas berbunyi")//Penyakit kelima
    {
        cout << "MAKA ANDA MENDERITA ASMA" << endl;
    }
    else if (gejala1=="Mual" && gejala2=="Gangguan pencernaan" && gejala3=="Pembengkakan perut")//Penyakit keenam
    {
        cout << "MAKA ANDA MENDERITA USUS BUNTU";
    }
    cout << "===========================================================" << endl;
    cout << "Apa Anda ingin mengulang lagi?" << endl;
    cout << "Pilih (y/t) : "; cin >> PL;

      }while (PL=='y'||PL=='Y');
        cout << "Anda tidak ingin mengulangi" << endl;
    cout << "===========================================================" << endl;
    cout << "              TERIMA KASIH ATAS KUNJUNGAN ANDA             " << endl;
    cout << "===========================================================" << endl;

    return 0;
}
