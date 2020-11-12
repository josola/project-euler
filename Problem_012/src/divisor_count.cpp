
#include "divisor_count.h"
#include <cmath>

using std::sqrt;

int DivisorCount(int number) {
    int count = 0;
    int root = sqrt(number);
    
    for (int i = 1; i <= root + 1; i++) {
        if (number % i == 0) {
            count += 2;
        }
    }
    
    return count;
}
