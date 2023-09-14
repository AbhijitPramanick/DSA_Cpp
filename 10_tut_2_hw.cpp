// Printing the table of 60.
#include <iostream>
using namespace std;
int main()
{

    // for loop
    cout << "Printing table of 60 using For loop : " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << 60 << " x " << i << " = " << 60 * i << endl;
    }
    cout << endl;
    // while loop
    cout << "Printing table of 60 using while loop : " << endl;
    int j = 1;
    while (j <= 10)
    {
        cout << 60 << " x " << j << " = " << 60 * j << endl;
        j++;
    }
    cout << endl;

    // do-while loop
    cout << "Printing table of 60 using do-while loop : " << endl;
    int k = 1;
    do
    {
        cout << 60 << " x " << k << " = " << 60 * k << endl;
        k++;
    } while (k <= 10);
    cout << endl;

    return 0;
}
