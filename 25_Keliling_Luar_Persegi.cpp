#include <iostream>
using namespace std;

void CariKeliling(double x, double y){
    double output = 2 * (x + y);
    cout << "Keliling : " << output << endl;
}

void CariLuas(double x, double y){
    double output = x * y;
    cout << "Luasnya : " << output << endl;
}


int main(int argc, char const *argv[]){
    int InputPanjang, InputLebar;
    
    cout << "Masukan Panjang : ";
    cin >> InputPanjang;
    cout << "Masukan Lebar : ";
    cin >> InputLebar;
    cout << endl;

    CariKeliling(InputPanjang,InputLebar);
    CariLuas(InputPanjang,InputLebar);
    
    return 0;
}
