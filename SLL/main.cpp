#include <iostream>
#include "SLL.h"
using namespace std;

int main(){
    List A;
    int digit, i;
    address a;
    createList_103012300039(A);

    for (i=0; i< 12; i++) {
        cout << "Digit " << i + 1 << " : ";
        cin >> digit;
        a = allocate_103012300039(digit);
        insertLast_103012300039(A,a);
    }

    cout << "Isi list : ";
    printInfo_103012300039(A);

    return 0;
}
