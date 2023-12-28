#include <iostream>
using namespace std;

int main(){

    // Part 1 Bilangan Bulat
    cout << "Bilangan Bulat" << endl;

    short x_short = 2;
    int   x_int   = 5;
    long  x_long  = 8;

    cout << "Nilai Short = " << x_short << " Dengan Size : " << sizeof(x_short) << " Byte" << endl;
    cout << "Nilai int   = " << x_int   << " Dengan Size : " << sizeof(x_int)   << " Byte" << endl;
    cout << "Nilai long  = " << x_long  << " Dengan Size : " << sizeof(x_long)  << " Byte" << endl;

    // Part 2 Bilangan Desimal
    cout << "\nBilangan Desimal" << endl;

    float x_float   = 5.5f;
    double x_double = 8.2;

    cout << "Nilai Float = " << x_float  << " Dengan Size : " << sizeof(x_float)  << " Byte" << endl;
    cout << "Nilai Float = " << x_double << " Dengan Size : " << sizeof(x_double) << " Byte" << endl;

    // Part 3 Char and String
    cout << "\nChar And String" << endl;

    char   x_char = 'B';
    string x_string = "Hmph";

    cout << "Nilai Char   = " << x_char   << " Dengan Size : " << sizeof(x_char)   << " Byte" << endl;
    cout << "Nilai String = " << x_string << " Dengan Size : " << sizeof(x_string) << " Byte" << endl;

    // True And False
    cout << "\nTrue And False" << endl;

    bool x_true = true, x_false = false;

    cout << "Nilai x_true  = " << x_true << " Dengan Size : " << sizeof(x_true)   << " Byte" << endl;
    cout << "Nilai x_false = " << x_false << " Dengan Size : " << sizeof(x_false) << " Byte" << endl;

    return 0;
}
// pahami aja 