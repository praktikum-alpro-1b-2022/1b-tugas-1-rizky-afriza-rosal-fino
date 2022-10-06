#include <iostream>
using namespace std;

int main(){
    // Menukar dua variable dengan bantuan variable sementara
    int a = 10, b = 12, c, p, q;
    c = a; // variable C di isi dengan variable a yang bernilai 10
    a = b; // variable A di isi dengan variable b yang bernilai 13
    b = c; // variable B di isi dengan variable c yang bernilai 10

    cout << "Menukar variable dengan variable sementara\n";
    cout << "A: " << a << endl << "B: " << b << endl;

    // Menukar dua variale tanpa variable sementara
    p = 100;
    q = 3000;

    p = p+q; //8
    q = p-q; //3
    p = p-q; //5

    cout << "Menukar dua variable tanpa variable sementara\n";
    cout << "\nP: " << p << endl << "Q: " << q << endl;

    return 0;
}
