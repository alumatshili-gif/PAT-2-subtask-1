#include <iostream>
#include <iomanip> // Added for setprecision if needed
using namespace std;

// Constants for number of experiments and readings - Fixed to 4 per spec
const int NUM_EXPERIMENTS = 4; // Was 3, logical error
const int NUM_READINGS = 3;

int main() {
    int i, j; // Loop counters - Fixed from char to int
    double readingValue, total, average; // Fixed missing semicolon

    // Outer loop for 4 experiments
    for (i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0; // Reset total for each experiment
        cout << "\nEXPERIMENT " << i << ":\n-------------" << endl;

        // Inner loop for 3 readings
        for (j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: ";
            cin >> readingValue; // Fixed from 'reading' to 'readingValue'
            total = total + readingValue; // Fixed missing semicolon
        }

        average = total / NUM_READINGS; // Fixed logical error: was total/NUM + total

        // Evaluation per Page 7
        if (average < 100) {
            cout << "Experiment " << i << " average: " << average << " are: Below acceptable range" << endl;
        } else if (average <= 300) {
            cout << "Experiment " << i << " average: " << average << " are: Within acceptable range" << endl;
        } else {
            cout << "Experiment " << i << " average: " << average << " are: Above acceptable range" << endl;
        }
    }
    return 0; // Fixed from float main to int main
}
