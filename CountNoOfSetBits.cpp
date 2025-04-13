#include<iostream>  
#include<bits/stdc++.h>  // Not recommended, as it includes unnecessary libraries
using namespace std;

// Function to count the total number of set bits (1s) in binary representations of numbers from 1 to n
int countSetBits(int n) {
    int count = 0;  // Variable to store the total count of set bits

    // Iterate through each bit position until 2^i exceeds n
    for (int i = 0; (1 << i) <= n; ++i) {
        int block_size = 1 << (i + 1);  // Size of repeating pattern for the current bit position
        int comp_block_size = n / block_size;  // Number of complete blocks of size 'block_size'
        int remainder = n % block_size;  // Remaining numbers that do not form a complete block

        // Count set bits contributed by complete blocks
        count += comp_block_size * (block_size / 2);

        if (remainder >= ( block_size/2)) {  
            count += remainder - (block_size / 2) + 1;
        }
    }
    return count;  // Return the total count of set bits
}

int main() {
    int n = 4;  // Input number
    cout << countSetBits(n);  // Output the total count of set bits from 1 to n
    return 0;
}
