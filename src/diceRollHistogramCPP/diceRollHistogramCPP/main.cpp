/*
 * diceRollHistogramCPP Version#1.0
 * Frank Bernal
 * CIS 054 C/C++ Programming
 * Input: None
 * Output: Histogram of dice rolls
 * 27 Mar 2022
 */

// Headers
// Used for cin cout
#include <iostream>
// Used for getting time
#include <ctime>
// Used for omitting std in cin cout
using namespace std;

// Function Prototypes
int roll();
int rollDice();

// Global Constants
const int TOTAL_ROLLS = 1000;
const int SIDES_ON_DIE = 6;
const int SUM_OF_ROLLS = 13;   // Sum of rolls +1 to get an index location of 12

int main(int argc, const char * argv[]) {
    // Declare array a size of 13
    int pointCount[SUM_OF_ROLLS];
    // Used for storing sum of each roll
    int sumOfRoll;
    
    // Start loop to roll 1000 times
    for (int i = 0; i < TOTAL_ROLLS; i++) {
        // Roll dice and store the sum
        sumOfRoll = rollDice();
        // Take the sum and add it to pointScore array
        pointCount[sumOfRoll]++;
    }   // End of loop
    
    // Display output
    
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
    
    // Return the random number, adding 1 makes it so we don't roll 0
    return (rand()% SIDES_ON_DIE) + 1;
}   // End of roll

// Start rollDice function
int rollDice() {
    // Create two dice
    int dieOne;
    int dieTwo;
    
    // Call roll and store value into each die
    dieOne = roll();
    dieTwo = roll();
    
    // Return the sum of the dice roll
    return dieOne + dieTwo;
}   // End of rollDice
