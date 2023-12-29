#include <iostream>
using namespace std;

int main(){

    int x = 10, y = 10, z = 5;

    cout << "Nilai x : " << x << "\n";
    cout << "Nilai y : " << y << "\n";
    cout << "Nilai z : " << z << "\n";
    cout << endl;

    cout << "Part 1" << endl;
    cout << "x dan y tidak sama : " << !(x == y) << endl;
    cout << "x dan z tidak sama : " << !(x == z) << endl;

    cout << "\nPart 2" << endl;
    cout << "x = 5 dan y = 10 apa pernyataan saya ada yang benar? : " << ((x == 5) || (y == 10)) << endl;
    cout << "x = 5 dan y = 11 apa pernyataan saya ada yang benar? : " << ((x == 5) || (y == 11)) << endl;

    cout << "\nPart 3" << endl;
    cout << "x = 10 dan z = 5 Apa pernyataan saya benar keduanya? : " << ((x == 10) && (z == 5)) << endl;
    cout << "x =  5 dan z = 5 Apa pernyataan saya benar keduanya? : " << ((x == 5) && (z == 5)) << endl;
    

    return 0;
}