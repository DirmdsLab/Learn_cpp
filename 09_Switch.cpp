#include <iostream>
using namespace std;

int main(){

    int x;
    cout << "Masukan Nilai : ";
    cin >> x; // Biar ada drama :v

    switch (x){
    case 1:
        cout << "Ini Angka 1" << endl;
        break;
    case 2:
        cout << "Ini Angka 2" << endl;
        break;
    case 3:
        cout << "Ini Angka 3" << endl;
        break;
    default:
        cout << "Hmph" << endl;
        break;
    }
    return 0;
}