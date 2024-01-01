#include <iostream>
using namespace std;

int main(){
    int x = 10;

    cout << "Part 1" << endl;

    do{
        cout << "Lakukan Sekali dulu Baru cek ^_^" << endl;
    } while (x == 5);

    cout << "\nPart 2" << endl;
    
    do{
        cout << "Nilai x : " << x << endl;
        x++;
    } while (x <= 15);
    
    // Seperti itu :v

    return 0;
}