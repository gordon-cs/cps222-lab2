// Main Tic-tac-toe program.
//
// Author (starting point): Russ Tuck
// Authors (everything else):

#include <iostream>
using std::cout;
using std::endl;

#include "tictactoe.h"

int main() {

    TictactoeBoard b;
    b.set(0, 0, TictactoeXO::X);
    b.set(1, 0, TictactoeXO::X);
    b.set(2, 0, TictactoeXO::X);
    if (TictactoeXO::X == b.winner()) {
        cout << "X wins as expected" << endl;
    } else {
        cout << "Failure" << endl;
    }
}
