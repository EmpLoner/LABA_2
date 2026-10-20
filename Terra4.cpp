//задание 4
#include <iostream>
using namespace std;

int main()
{
    int S;
    int Sum = 0;
    int Count = 0;

    cout << "Enter number: ";
    cin >> S;

    while (S != 0)
    {
        cout << "Enter number: ";
        cin >> S;
        Sum+=S;
        Count++;
    }

        cout << "Count: " << Count << " ";
        cout << "Sum: " << Sum << " ";
        return 0;
}
//4