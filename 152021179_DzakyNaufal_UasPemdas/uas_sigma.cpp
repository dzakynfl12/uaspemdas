#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Data
{
  int data_x;
  int data_y;
};


int main()
{
  system("cls");
  int n, korelasi;
  int sigx, sigy, sigxy;
  float sigx2, sigy2, bAtas, bkiri, bBawahKiri, bBawahKanan;
  double koefisien;
  cout << "====================================================" << endl;
  cout << "Nama : Dzaky Naufal Nabhan Setiawan Putra" << endl;
  cout << "NRP  : 15-2021-179" << endl;
  cout << "Kelas: D" << endl;
  cout << "               UAS PEMROGRAMAN DASAR                " << endl;
  cout << "====================================================" << endl;
  cout << " " << endl;
  cout << "Jumlah banyak data yang ingin di proses: "; cin >> n; 
  cout << endl;
  double data_xy[n];

  Data dta[n];
  vector<Data> dataa;
  for (int i = 0; i < n; i++)
  {
    Data data;
    cout << "Masukkan data X ke-" << i + 1 << " : "; cin >> dta[i].data_x; 
    
    while (dta[i].data_x <= 0) {
            cout << "Nilai x tidak boleh kurang dari 0, Masukkan Nilai x: "; cin >> dta[i].data_x;

    }
    cout << "Masukkan data Y ke-" << i + 1 << " : "; cin >> dta[i].data_y; 
    
    while (dta[i].data_y <= 0) {
            cout << "Nilai y tidak boleh kurang dari 0, Masukkan Nilai y: "; cin >> dta[i].data_y;
            
    }
    dataa.push_back(data);

    sigx += dta[i].data_x;
    sigy += dta[i].data_y;

    data_xy[i] = dta[i].data_x * dta[i].data_y;
    sigxy += data_xy[i];

    
  }
  sigx2 = pow(sigx, 2);
  sigy2 = pow(sigy, 2);



  bAtas = (n * sigxy) - (sigx * sigy);
  bBawahKiri = sqrt((n * sigx2) - (pow(sigx, 2)));
  bBawahKanan = sqrt((n * sigy2) - (pow(sigy, 2)));

  double r = bAtas / (bkiri * bBawahKanan);
  koefisien = pow(r, 2) * (1 / 100);
 

    cout << "=========" << endl;
    
  cout << "Sigma dari x = " << sigx << endl;
  cout << endl;
  cout << "Sigma dari y = " << sigy << endl;
  cout << endl;
  cout << "Sigma dari XY = " << sigxy << endl;
  cout << endl;
  cout << "Sigma dari x2 = " << sigx2 << endl;
  cout << endl;
  cout << "Sigma dari y2 = " << sigy2 << endl;
  cout << endl;

    cout << "============" << endl;
    cout << "    HASIL   " << endl;
    cout << "============" << endl;

  cout << "a. Nilai dari Korelasi r = " << bAtas << " / " << bBawahKiri * bBawahKanan << " = " << r << endl;
  cout << endl;
  cout << "b. Nilai dari koefisien yang dideterminasi = " << koefisien << endl;
  cout << endl;

if (r<=0.09)
 {
 cout << "c. Kekuatan Hubungan dari Nilai Korelasi = Diabaikan"; 
 }
 else if (r<=0.29)
 {
 cout << "c. Kekuatan Hubungan dari Nilai Korelasi = Rendah"; 
 }
 else if (r<=0.49)
 {
 cout << "c. Kekuatan Hubungan dari Nilai Korelasi = Moderat"; 
 }
 else if (r<=0.70)
 {
 cout << "c. Kekuatan Hubungan dari Nilai Korelasi = Sedang"; 
 }
 else if (r>0.70)
 {
    cout << "c. Kekuatan Hubungan dari Nilai Korelasi = Sangat kuat"; 
 }


    cout << endl;

  if (r == 0)
  {
    cout << "f. Tidak Ada Hubungan Antara variabel X dan Y adalah Positif" << endl;
    cout << endl;
  }
  else if (r > 0)
  {
    cout << "d. Hubungan Antara variabel X dan Y adalah Positif" << endl;
    cout << endl;
  }
  else if (r < 0)
  {
    cout << "e. Hubungan Antara variabel X dan Y adalah Negatif" << endl;
    cout << endl;
  }

  return 0;
}
