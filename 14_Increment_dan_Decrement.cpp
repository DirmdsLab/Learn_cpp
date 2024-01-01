#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x = 10, y = 5;
    
    cout << "Nilai Awal x : " << x << endl;
    x++; // bisa juga untuk yang lain ^_^
    cout << "Nilai x sekarang : " << x << endl;
    cout << endl;

    cout << "Nilai awal y : " << y << endl;
    --y;
    cout << "Nilai y sekarang : " << y << endl;
    cout << endl;

    x = 10;
    cout << "Nilai Awal x : " << x << endl;
    
    cout << "Print x++ : " << x++ << endl;
    x = 10;
    cout << "Print --x : " << --x << endl;

    return 0;
}
