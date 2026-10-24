#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001> nul");

    int n;
    cout << "Nom: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "0" << "\n";
        return 0;
    }
    if (n==1)
    {
        cout << "1" << "\n";
        return 0;
    }

    int a = 1;
    int b = 1;
    int c = 1;

    cout << "Число Фибоначчи: " << a << " " << b;

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << " " << c;
    }
    cout << "\n" << "ФиБоначчи под номером " << n << " равно " << c;

    return 0;
}