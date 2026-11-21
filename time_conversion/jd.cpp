#include <iostream>
#include <cmath>
#include <iomanip>

// testing with date 20 november and time 06:00:00 UTC

int main(){
    int Y = 2026;
    int M = 11;
    int D = 20;
    int Hour = 6;
    int Minute = 0;
    int Second = 0;

    if (M <= 2) {
        Y -= 1;
        M += 12;
    }

    int A = Y/100;
    int B = 2 - A + (A / 4);
    double dfrac = D + (Hour / 24.0) + (Minute/1440.0) + (Second/86400.0);
    double JD = std::floor(365.25 * (Y + 4716)) + std::floor(30.6001 * (M + 1)) + dfrac + B - 1524.5;

    std::cout << std::fixed << std::setprecision(7) << JD << '\n';


}