#include <iostream>
using namespace std;

int main(){
    int x = 10;

    cout << "Nilai x before : " << x << endl;
    x += 5;
    cout << "Nilai x after +5 : " << x << endl;
    x -= 10;
    cout << "Nilai x after again -10 : " << x << endl;
    x *= 10;
    cout << "Nilai x after again again *10 : " << x << endl;
    x %= 3;
    cout << "Nilai x after again again again %3 : " << x << endl;
    x /= 2;
    cout << "Nilai x after again again again again /2 : " << x << endl;

    // Jangan hirau kan :v 

    return 0;
}