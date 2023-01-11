//Judul
//Analisis Kasus
//Anggita Alya Salsabila
//A11.2022.14401
//02 Oktober 2022

#include <iostream>
using namespace std;

//Kamus
int A,B,C,D,E;

//Deskripsi
main()
{
  cout << "Menentukan ranking dari masing-masing nilai" << endl;
  cout << "=========================================================" << endl;
  cout << "Analisis Kasus 5 nilai" << endl;
  cout << "Masukkan nilai A: "; cin >> A;
  cout << "Masukkan nilai B: "; cin >> B;
  cout << "Masukkan nilai C: "; cin >> C;
  cout << "Masukkan nilai D: "; cin >> D;
  cout << "Masukkan nilai E: "; cin >> E;
  cout << "=========================================================" << endl;
  cout << endl;

  ( A!=B && A!=C && A!=D && A!=E && B!=C && B!=D && B!=E && C!=D && C!=E && D!=E );

  if (A < B && B < C && C < D && D < E)//1
  {
      cout << "Maka ranking 5,4,3,2,1 adalah : " << A << " ," << B << " ," << C << " ," << D << " ," << E << endl;
  }

  else if (A < B && B < C && C < E && E < D)//2
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << B << " ," << C << " ," << E << " ," << D << endl;
  }
  else if (A < B && B < D && D < E && E < C)//3
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << B << " ," << D << " ," << E << " ," << C << endl;
  }
  else if (A < B && B < D && D < C && C < E)//4
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << B << " ," << D << " ," << C << " ," << E << endl;
  }
  else if (A < B && B < E && E < D && D < C)//5
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << B << " ," << E << " ," << D << " ," << C << endl;
  }
  else if  (A < B && B < E && E < C && C < D)//6
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << B << " ," << E << " ," << C << " ," << D << endl;
  }
  else if (A < C && C < B && B < D && D < E)//7
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << C << " ," << B << " ," << D << " ," << E << endl;
  }
  else if (A < C && C < B && B < E && E < D)//8
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << C << " ," << B << " ," << E << " ," << D << endl;
  }
  else if (A < C && C < D && D < E && E < B)//9
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << C << " ," << D << " ," << E << " ," << B << endl;
  }
  else if (A < C && C < D && D < B && B < E)//10
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << C << " ," << D << " ," << B << " ," << E << endl;
  }
  else if (A < C && C < E && E < D && D < B)//11
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << C << " ," << E << " ," << D << " ," << B << endl;
  }
  else if (A < C && C < E && E < B && B < D)//12
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << C << " ," << E << " ," << B << " ," << D << endl;
  }
  else if (A < D && D < B && B < C && C < E)//13
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << D << " ," << B << " ," << C << " ," << E << endl;
  }
  else if (A < D && D < B && B < E && E < C)//14
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << D << " ," << B << " ," << E << " ," << C << endl;
  }
  else if (A < D && D < C && C < E && E < B)//15
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << D << " ," << C << " ," << E << " ," << B << endl;
  }
  else if (A < D && D < C && C < B && B < E)//16
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << D << " ," << C << " ," << B << " ," << E << endl;
  }
  else if (A < D && D < E && E < C && C < B)//17
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << D << " ," << E << " ," << C << " ," << B << endl;
  }
  else if (A < D && D < E && E < B && B < C)//18
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << D << " ," << E << " ," << B << " ," << C << endl;
  }
  else if (A < E && E < B && B < C && C < D)//19
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << E << " ," << B << " ," << C << " ," << D << endl;
  }
  else if (A < E && E < B && B < D && D < C)//20
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << E << " ," << B << " ," << D << " ," << C << endl;
  }
  else if (A < E && E < C && C < D && D < B)//21
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << E << " ," << C << " ," << D << " ," << B << endl;
  }
  else if (A < E && E < C && C < B && B < D)//22
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << E << " ," << C << " ," << B << " ," << D << endl;
  }
  else if (A < E && E < D && D < B && B < C)//23
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << E << " ," << D << " ," << B << " ," << C << endl;
  }
  else if (A < E && E < D && D < C && C < B)//24
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << A << " ," << E << " ," << D << " ," << C << " ," << B << endl;
  }
  else if (B < A && A < C && C < D && D < E)//25
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << B << " ," << A << " ," << C << " ," << D << " ," << E << endl;
  }
  else if (B < A && A < C && C < E && E < D)//26
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << B << " ," << A << " ," << C << " ," << E << " ," << D << endl;
  }
  else if (B < A && A < D && D < E && E < C)//27
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << B << " ," << A << " ," << D << " ," << E << " ," << C << endl;
  }
  else if (B < A && A < D && D < C && C < E)//28
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << B << " ," << A << " ," << D << " ," << C << " ," << E << endl;
  }
  else if (B < A && A < E && E < D && D < C)//29
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << B << " ," << A << " ," << E << " ," << D << " ," << C << endl;
  }
  else if (B < A && A < E && E < C && C < D)//30
  {
      cout << "Maka ranking 5,4,3,2,1,adalah : " << B << " ," << A << " ," << E << " ," << C << " ," << D << endl;
  }

  return 0;
}
