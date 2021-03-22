#include "functionTest.h"

// Function definition
double squareRoot(double num) {
    double low = 1.0;
    double high = num;

    for (int i = 0; i < 50; i = i + 1) {
        double estimate = (high + low) / 2;
        if (estimate*estimate > num) {
            double newHigh = estimate;
            high = newHigh;
        } else {
            double newLow = estimate;
            low = newLow;
        }
    }
    return (high + low) / 2;
}