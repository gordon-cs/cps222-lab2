// Tests tictactoe.cc.  Uses Google Test unit testing framework.
//
// Author (starting point): Russ Tuck
// Authors (everything else):

// Instructor's note: every unit test needs these includes.
#include <limits.h>
#include "gtest/gtest.h"

#include "tictactoe.h"

// Instructor's note: both parts of test names must be valid C++ identifiers,
// and must NOT include underscores ("_").  First part is group,
// second part is test.

TEST(TictactoeBoardTest, WinnerVerical) {
    TictactoeBoard b;
    b.set(0, 0, TictactoeXO::X);
    b.set(1, 0, TictactoeXO::X);
    b.set(2, 0, TictactoeXO::X);
    EXPECT_EQ(TictactoeXO::X, b.winner());
}
