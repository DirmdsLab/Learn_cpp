#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int x = 0;
    

    // break
    while (true){
        x++;
        cout << "Print x : " << x << endl;

        if (x == 5){
            cout << "After This Break" << endl;
            break;
        }
    }

    cout << endl;

    // continue 
    for (int i = 1; i <= 10; i++){
        if (i == 5){
            cout << "Continue" << endl;
            continue;
        }
        cout << "Print i : " << i << endl;
    }
    
    
    return 0;
}
