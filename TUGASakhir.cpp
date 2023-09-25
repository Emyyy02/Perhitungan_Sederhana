#include <iostream>
using namespace std;
 
int main()
{
  cout << "========================================" <<endl;
  cout << "|      C++ Kalkulator Sederhana        |" << endl;
  cout << "========================================" << endl;
  cout << endl;
  back:
 
  int pilihan, azmi;
  float nomer1, nomer2;
 
  cout << "1. Penjumlahan"<< endl;
  cout << "2. Pengurangan"<< endl;
  cout << "3. Perkalian"  << endl;
  cout << "4. Pembagian"  << endl;
  cout << endl;
 
  cout << "Input pilihan operasi: ";
  cin >> pilihan;
  cout << "Angka pertama: ";
  cin >> nomer1;
  cout << "Angka kedua: ";
  cin >> nomer2;
  cout << endl;
 
  switch (pilihan) {
   case 1:
     cout << "Hasil dari " << nomer1 << " + " << nomer2 << " = " << nomer1+nomer2;
     break;
   case 2:
     cout << "Hasil dari " << nomer1 << " - " << nomer2 << " = " << nomer1-nomer2;
     break;
   case 3:
     cout << "Hasil dari " << nomer1 << " * " << nomer2 << " = " << nomer1*nomer2;
     break;
   case 4:
     cout << "Hasil dari " << nomer1 << " / " << nomer2 << " = " << nomer1/nomer2;
     break;

   default :
     cout<<"Maaf, pilihan menu tidak tersedia";
  }

  cout << endl;

  cout <<endl;
  cout <<"1. kembali"<<endl;
  cout <<"2. keluar"<<endl;
  cin >>azmi;

  if (azmi = 1){
    goto back;
  }else if(azmi = 2){
    goto exit;
  }else{
    cout <<"SALAH"<<endl;
  }
  exit:
  cout <<"terimakasih"<<endl;
  
  return 0;
}