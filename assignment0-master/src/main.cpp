#include <iostream>
using namespace std;

int main() {
    // deklarasi variabel untuk menyimpan nama
    string nama;

    // meminta input dari user
    cout << "Silahkan inputkan nama Anda: ";
    getline(cin, nama);

    // menampilkan output
    cout << "Hello " << nama << endl;

    return 0;
}