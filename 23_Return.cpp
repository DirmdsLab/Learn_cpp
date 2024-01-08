#include <iostream>
using namespace std;

int Pangkat(int x){
    x = x * x;
    return x;
}


int main(int argc, char const *argv[]){
    
    int Input;

    cout << "Masukan Anggka Yang akan jadi pangkat :v = "; // Contoh Gabut :v
    cin >> Input;

    cout << "Hasilnya :v = " << Pangkat(Input) << endl;

    return 0;
}
