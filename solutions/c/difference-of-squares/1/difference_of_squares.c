#include <stdio.h>
#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int n){
    unsigned int result = ((n * (n + 1)) / 2) * ((n * (n + 1)) / 2);
    return result;
}

unsigned int sum_of_squares(unsigned int n) {
    unsigned int result = (n * (n + 1) * (2 * n + 1)) / 6;
    return result;
}

unsigned int difference_of_squares(unsigned int n) {
    unsigned int sum_result = square_of_sum(n);
    unsigned int squared_sum_result = sum_of_squares(n);
    unsigned int result = sum_result - squared_sum_result;
    return result;
}


    
