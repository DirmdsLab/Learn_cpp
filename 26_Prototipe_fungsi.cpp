#include <iostream>

using namespace std;

int SetiapInputDikali100(int x);
void PrintIntX(int x);


int main(int argc, char const *argv[]){
    int x;

    cout << "Setiap Bilangan yang di input bakal di kali 100 : ";
    cin >> x;

    PrintIntX(SetiapInputDikali100(x));

    return 0;
}


int SetiapInputDikali100(int x){
    return x * 100;
}

void PrintIntX(int x){
    cout << "Print x : " << x << endl;
}

// dah itu aja :v 