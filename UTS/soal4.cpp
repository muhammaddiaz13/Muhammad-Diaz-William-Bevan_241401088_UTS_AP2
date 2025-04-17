#include <iostream>
using namespace std;

int main() {
    system("clear");
    string input;

    cout << "Masukkan daftar judul buku : ";
    getline(cin, input);
    int count = 0;
    bool kata = false;
    int i = 0;
    while (i < input.length()) {
        if (input[i] != ' ') {
            if (!kata) {
                kata = true; 
                count++; 
            }
        } else {
            kata = false; 
        }
        i++;
    }

    cout << "Jumlah judul buku : " << count << endl;

    return 0;
}
