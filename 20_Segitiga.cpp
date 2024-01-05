#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int Input;

    cout << "Masukkan Tingkat Segitiga : ";
    cin >> Input;

    // Part 1
    cout << "\nModel 1" << endl;
    for (int i = 1; i <= Input; i++){
        for (int ii = 1; ii <= i; ii++){
            cout << "*";
        }
        cout << endl;
    }

    
    cout << "\nModel 2" << endl;
    for (int i = 1; i <= Input; i++){
        for (int ii = Input; ii >= i; ii--){
            cout << "*";
        }
        cout << endl;
    }
    

    cout << "\nModel 3" << endl;
    for (int i = 1; i <= Input; i++){
        for (int ii = Input; ii > i; ii--){
            cout << " ";
        }
        for (int ii = 0; ii < i; ii++){
            cout << "*";
        }
        cout << endl;
    }


    cout << "\nModel 4" << endl;
    for (int i = 1; i <= Input; i++){
        for (int ii = 1; ii < i; ii++){
            cout << " ";
        }
        for (int ii = Input; ii >= i; ii--){
            cout << "*";
        }
        cout << endl;
    }


    cout << "\nModel 5" << endl;
    for (int i = 1; i <= Input; i++){
        for (int ii = Input; ii > i; ii--){
            cout << " ";
        }
        for (int ii = 0; ii < (i*2-1); ii++){
            cout << "*";
        }
        cout << endl;
    }


    cout << "\nModel 6" << endl;
    for (int i = 1; i <= Input; i++){
        for (int ii = 1; ii < i; ii++){
            cout << " ";
        }
        for (int ii = (Input*2-i); ii >= i; ii--){
            cout << "*";
        }
        cout << endl;
    }


    cout << "\nModel 7" << endl;
    for (int i = 1; i < Input; i++){
        for (int ii = Input; ii > i; ii--){
            cout << " ";
        }
        for (int ii = 0; ii < (i*2-1); ii++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= Input; i++){
        for (int ii = 1; ii < i; ii++){
            cout << " ";
        }
        for (int ii = (Input*2-i); ii >= i; ii--){
            cout << "*";
        }
        cout << endl;
    }

    
    return 0;
}
