
#include <iostream>
using namespace std;

void stars()
{
    /*
    * 
    * *
    * * *
    * * * *
    * * * * * 
    */

    string empty = " ";
    int row = 5;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "==========While Loop Below===========" << endl;
    int i = 1;
    while (i <= row) {
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}

void revstars()
{

    string empty = " ";
    int row = 5;

    for (int i = row; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void whilestars() {
    int row = 5, i = 1;

    while(i <= row){
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

}

void dowhilestars() {
    int row = 10, i = 1;

    do{
        int j = 1;
        do {
            cout << "* ";
            j += 1;
        } while (j <= i);
    } while (i <= row);
    cout << endl;
    i += 1;
    
}

int main() {
    dowhilestars();
}
