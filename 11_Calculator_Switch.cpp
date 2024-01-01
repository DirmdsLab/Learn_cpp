#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    // variabel
    int Input1, Input2;
    char Opsi;

    // drama selamat datang :v
    cout << "Selamat datang di program kalkulator Switch" << endl;
    
    cout << "Masukan Angka : ";
    cin >> Input1;

    cout << "Pilih Opsi ( + , - , * , / ) : ";
    cin >> Opsi;

    cout << "Masukan Angka Selanjutnya : ";
    cin >> Input2;

    switch (Opsi){
    case '+':
        cout << "\nHasil Pemjumlahan Dari " << Input1 << " + " << Input2 << " = " << Input1 + Input2 << endl;
        break;
    case '-':
        cout << "\nHasil Pengurangan Dari " << Input1 << " - " << Input2 << " = " << Input1 - Input2 << endl;
        break;
    case '*':
        cout << "\nHasil Perkalian Dari " << Input1 << " x " << Input2 << " = " << Input1 * Input2 << endl;
        break;
    case '/':
        cout << "\nHasil Pembagian Dari " << Input1 << " / " << Input2 << " = " << Input1 / Input2 << endl;
        break;
    default:
        cout << "\nSepertinya Ada Kesalahan ^_^" << endl;
        break;
    }
        
    cout << "\nSampai Jumpa :v" << endl;    

    return 0;
}
