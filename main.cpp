#include <iostream>

using namespace std;

int main()
{
    int blah = 235;
    blah = 52724; // The program will output this number as it will overwrite the previous memory allocated.

    cout << blah;

    return 0;
}
// This project shows memory overwriting. Setting the integer 'blah' first as 235 and then later setting it as a different number will make it use the latest number.
