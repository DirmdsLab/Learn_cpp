#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){ // Mulai menggunakan auto complete
    // variabel
    int Input1, Input2;
    char Opsi;

    // drama selamat datang :v
    cout << "Selamat datang di program kalkulator if" << endl;
    
    cout << "Masukan Angka : ";
    cin >> Input1;

    cout << "Pilih Opsi ( + , - , * , / ) : ";
    cin >> Opsi;

    cout << "Masukan Angka Selanjutnya : ";
    cin >> Input2;

    if (Opsi == '+'){
        cout << "\nHasil Pemjumlahan Dari " << Input1 << " + " << Input2 << " = " << Input1 + Input2 << endl;
    } else if (Opsi == '-'){
        cout << "\nHasil Pengurangan Dari " << Input1 << " - " << Input2 << " = " << Input1 - Input2 << endl;
    } else if (Opsi == '*'){
        cout << "\nHasil Perkalian Dari " << Input1 << " x " << Input2 << " = " << Input1 * Input2 << endl;
    } else if (Opsi == '/'){
        cout << "\nHasil Pembagian Dari " << Input1 << " / " << Input2 << " = " << Input1 / Input2 << endl;
    } else {
        cout << "\nSepertinya Ada Kesalahan ^_^" << endl;
    }
        
    cout << "\nSampai Jumpa :v" << endl;    

    return 0;
}
