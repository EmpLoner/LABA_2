//12
#include <iostream>
using namespace std;

void printLine(int length, char symbol)
{
    for (int i = 0; i < length; ++i)
    {
        cout << symbol;
    }
    cout << '\n';
}

int main()
{
    printLine(20, '=');
    cout << "       PROGRAM" << '\n';
    printLine(20, '=');

    return 0;
}
