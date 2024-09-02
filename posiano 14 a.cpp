#include<iostream>
using namespace std;

int main() {
    int sum = 0;

    // Loop through numbers from 2 to 8 and add them to sum
    for (int i = 2; i <= 8; i++) {
        sum += i;
    }

    cout << "The sum of integers between 2 and 8 inclusive is: " << sum << "\n";

    return 0;  
}
