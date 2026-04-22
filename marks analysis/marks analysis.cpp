
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

int main() {
    stars();
    cout << "---------------------" << endl;
    revstars();
}
