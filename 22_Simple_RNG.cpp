#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]){
    
    char x;

    while (true){
        cout << "Random Number = " << rand() << endl;
        cout << "Gacha Again? (y,n) : ";
        cin >> x;
        if (x == 'n'){
            break;
        }
        cout << endl;
    }

    // Awalan 

    return 0;
}
