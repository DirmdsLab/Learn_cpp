#include <iostream>
using namespace std;

int main(){
    int Input, Fibo_1, Fibo_2, Output;

    cout << "Masukkan Angka Fibo ke : ";
    cin >> Input;

    Fibo_1 = 0;
    Fibo_2 = 1;
    Output = 0;

    cout << "| " << Fibo_2 << " |";
    for (int i = 1; i < Input; i++){
        Output = Fibo_1 + Fibo_2;
        Fibo_1 = Fibo_2;
        Fibo_2 = Output;
        cout << " " << Output << " |";
    }
    
   return 0;
}