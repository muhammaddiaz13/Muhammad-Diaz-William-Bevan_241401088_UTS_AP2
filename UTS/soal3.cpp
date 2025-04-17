#include <iostream>
using namespace std;

int main(){
    system("clear");
    string nama_mahasiswa;
    string nim;
    int alpro, pds, so;

    cout << "Nama Mahasiswa : "; 
    getline(cin, nama_mahasiswa);
    cout << "NIM            : ";
    getline(cin, nim);

    cout << "Nilai Mata Kuliah\n";

    cout << "Algoritma dan Pemograman   : ";
    cin >> alpro;
    cout << "Probabilitas dan Statisika : ";
    cin >> pds;
    cout << "Sistem Operasi             : ";
    cin >> so;

   cout << "\nHasil\n";
   cout << "Algoritma dan Pemograman    : ";
   if (alpro >= 60) {
    cout << "Lulus.\n";
   } else {
    cout <<"Tidak Lulus.\n";
   }
   cout << "Probabilitas dan Statistika : ";
   if (pds >= 60) {
    cout << "Lulus.\n";
   } else {
    cout <<"Tidak Lulus.\n";
   }
   cout << "Sistem Operasi              : ";
   if (so >= 60) {
    cout << "Lulus.\n";
   } else {
    cout <<"Tidak Lulus. Silahkan Ulangi di Tahun Depan!\n";
   }
}
