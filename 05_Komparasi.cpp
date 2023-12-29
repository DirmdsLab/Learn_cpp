#include <iostream>
using namespace std;

int main(){
    
    int x = 10, y = 5, z = 10;

    cout << "Nilai x : " << x << "\n";
    cout << "Nilai y : " << y << "\n";
    cout << "Nilai z : " << z << "\n" << endl;

    cout << "Part 1" << endl;
    cout << "x sama dengan z       : " <<  (x == z) << endl;
    cout << "x tidak sama dengan z : " << !(x == z) << endl;

    cout << "\nPart 2" << endl;
    cout << "x Lebih Besar dari y : " << (x > y) << endl;
    cout << "x Lebih Kecil dari y : " << (x < y) << endl;

    cout << "\nPart 3" << endl;
    bool output;
    
    output = x >= z;
    cout << "x lebih besar sama dengan z : " << output << endl;

    output = x <= z;
    cout << "x lebih kecil sama dengan z : " << output << endl;
    

    return 0;
}