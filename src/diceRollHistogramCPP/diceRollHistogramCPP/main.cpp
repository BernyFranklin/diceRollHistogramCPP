/*
 * diceRollHistogramCPP Version#1.0
 * Frank Bernal
 * CIS 054 C/C++ Programming
 * Input: None
 * Output: Histogram of dice rolls
 * 27 Mar 2022
 */

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}

// Start roll function
int roll() {
    // Has random been initialized?
    static bool randomInitialized = false;
    
    // This is only done the first time function is called
    if (!randomInitialized) {
        // Seed the random number generator
        srand((unsigned int)time(NULL));
        // Don't do it again
        randomInitialized = true;
    }   // End of seeding random
    return (rand()%6) + 1;
}   // End of roll

// Start rollDice function
