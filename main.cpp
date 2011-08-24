#include <iostream>

using namespace std;

int main()
{
    int blah = 235;  // First integer set, only need to use int to declare the integer once.
    blah = 52724; // The program will output this number as it will overwrite the previous memory allocated.

    int hello = 1;
    int bye = 2;
    bye = 3;
    hello = 4;

    cout << blah << endl;
    cout << bye << endl;
    cout << hello << endl;

    cout << endl;

    cout << "If memory allocation succesful then numbers shown should be: " << endl;

    cout << endl;

    cout << "52724" << endl;
    cout << "3" << endl;
    cout << "4" << endl;

    return 0;
}
// This project shows memory overwriting. Setting the integer 'blah' first as 235 and then later setting it as a different number will make it use the latest number for example.
