#include <iostream>
using namespace std;
//printing the lyrics of 99 bottles of beer 
int main()
    {
    int bottles = 99;
    while ( bottles > 0 )
        {
        cout << bottles << " bottles of beer on the wall," << endl;
        cout << bottles << " bottles of beer." << endl;
        cout << "Take one down, pass it around," << endl;
        cout << --bottles << " bottles of beer on the wall." << endl;
        }
    return 0;
    }