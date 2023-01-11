//Judul
//Data Diri
//Noor Adekah Apriyana
//A11.2022.14382
//23 September 2022

#include <iostream>
using namespace std;

//Kamus
string nama;
string tempat;
string tanggal;
string umur;
string agama;
string jk; //jenis kelamin
string alamat;
string kampus;
string fakultas;
string prodi;

//Diskripsi
main()
{
    cout << "Nama           : "; getline (cin, nama    );
    cout << "Tempat Lahir   : "; getline (cin, tempat  );
    cout << "Tanggal Lahir  : "; getline (cin, tanggal );
    cout << "Umur           : "; getline (cin, umur    );
    cout << "Agama          : "; getline (cin, agama   );
    cout << "Jenis Kelamin  : "; getline (cin, jk      );
    cout << "Alamat         : "; getline (cin, alamat  );
    cout << "Kampus         : "; getline (cin, kampus  );
    cout << "Fakultas       : "; getline (cin, fakultas);
    cout << "Prodi          : "; getline (cin, prodi   );
    cout << endl;
    cout << "========================="<<endl;
    cout << "Halo namaku " << nama << ", aku lahir di " << tempat << "." <<endl;
    cout << "Tanggal lahir ku adalah " << tanggal << " sekarang akau berusia " << umur << "tahun." <<endl;
    cout << "Aku beragama " << agama << ", dan aku seorang " << jk << "." <<endl;
    cout << "Aku tinggal di " << alamat << "." <<endl;
    cout << "Aku kuliah di " << kampus  << ", fakultas " << fakultas << ", prodi " << prodi << "." <<endl;
    cout << "Sekian perkenalan dari saya TERIMA KASIH";
}
