// Declares classes for a Tic-tac-toe program to be used in a CPS 222
// lab on Git and GitHub.
//
// Author (starting point): Russ Tuck
// Authors (everything else):

// Instructor's note: the #ifndef/define/endif TICTACTOE_H_ statements are
// a "header guard".  Together, they make it safe to #include this file
// anywhere it's needed: extra #includes will be ignored.
#ifndef TICTACTOE_H_
#define TICTACTOE_H_

#include <iostream>
using std::istream;

enum class TictactoeXO {X, O, none};

// Stores and manipulates the board and state of a Tic-tac-toe game.
// Example:
//
class TictactoeBoard {
public:
    TictactoeXO get(unsigned row, unsigned col);
    void set(unsigned row, unsigned col, TictactoeXO player);

    // Checks for a winner and returns result (none if no winner).
    TictactoeXO winner();

private:
    TictactoeXO board_[3][3] = {
        { TictactoeXO::none, TictactoeXO::none, TictactoeXO::none},
        { TictactoeXO::none, TictactoeXO::none, TictactoeXO::none},
        { TictactoeXO::none, TictactoeXO::none, TictactoeXO::none}
    };

};

#endif // TICTACTOE_H_
