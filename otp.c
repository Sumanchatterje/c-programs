#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator with the current time
    int otp = rand() % 900000 + 100000;  // Generate a 6-digit number between 100000 and 999999
    printf("%d\n", otp);  // Print the OTP
    return 0;
}
