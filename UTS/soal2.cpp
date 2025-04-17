#include <iostream>
using namespace std;

int main() {
    system("clear");
    int k; 
    cout << "Masukkan kode 3 digit : "; 
    cin >> k; 

    if (k >= 100 && k <= 999) {
        int jlh_digit = (k / 100) + ((k / 10) % 10) + (k % 10);
        cout << "Jumlah digit : " << jlh_digit << endl; 
    } else {
        cout << "Kode Salah!" << endl;
    }
}
