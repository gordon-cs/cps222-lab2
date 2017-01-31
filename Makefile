# Builds and tests tictactoe game program.
#
# Author (starting point): Russ Tuck
# Authors (everything else):

# Tictactoe uses C++ 2011.  Compile for debugging (-g) with warnings.
# Google Test needs -pthread.
CXXFLAGS=-std=c++11 -g -Wall -Wextra -pthread

# This section is needed for unit tests
# Path to root of Google Test source
GTEST_DIR = ../googletest/googletest
GTEST_MAIN = $(GTEST_DIR)/make/gtest_main.a
# Path to Google Test library
# (Build the library by running "make" in this directory)
LDFLAGS += -L$(GTEST_DIR)/make
LDLIBS += -lpthread
# Path to Google Test include files
CPPFLAGS += -isystem $(GTEST_DIR)/include

tictactoe :		tictactoe_main.o tictactoe.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $^

# Instructor's note: gtest_main.a includes the main program which finds and
# runs the tests, as well as the library code they need.
tictactoe_unittest :	tictactoe_unittest.o tictactoe.o $(GTEST_MAIN)
