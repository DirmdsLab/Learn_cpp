#include <iostream>
using namespace std;

int Kali2(int x){
    return x*2;
}


// toko utama
void Print(int x){
    cout << "Hasilnya : " << x << endl;
}



int main(int argc, char const *argv[]){
    int Input;
    
    cout << "Masukan Angka Yang Bakal Di kali 2 Dan Di Print : ";
    cin >> Input;

    // cara pemanggilan 
    Print(Kali2(Input));

    return 0;
}
