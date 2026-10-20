// Задание 5
#include <iostream>
using namespace std;

int main()
{
    int N;

    do
    {
        cout << "Enter number from 1 to 100: ";
        cin >> N;
    }
    while (N < 1 || N > 101);
    cout << "Accepted\n";

    return 0;
}