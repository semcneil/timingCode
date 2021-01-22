/**
 * clockCPUTime
 * 
 * Hopefully measures CPU time
 * Based on:
 * https://levelup.gitconnected.com/8-ways-to-measure-execution-time-in-c-c-48634458d0f9
 * 
 * Seth McNeill
 * 2021 January 22
 */

#include <stdio.h>
#include <time.h>

int main () {
    double sum = 0;
    double add = 1;

    // Start measuring time
    clock_t start = clock();
    
    int iterations = 1000*1000*1000;
    for (int i=0; i<iterations; i++) {
        sum += add;
        add /= 2.0;
    }

    // Stop measuring time and calculate the elapsed time
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    
    printf("Result: %.20f\n", sum);
    
    printf("Time measured: %.3f seconds.\n", elapsed);
    
    return 0;
}