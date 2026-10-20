//Итоговое задание
#include <iostream>
using namespace std; //ну типа всё ясно итак.

bool isEven(int number) //функция, которая проверяет, чётное ли число.
{
    return number % 2 == 0; 
}

bool isPositive(int number) //функция, которая проверяет знак числа, то есть, положителен ли он.
{
    return number > 0;
}

int digitSum (int number) //функция, которая высчитывает сумму цифр в числе.
{
    int sum = 0; //икс нулевое, для меня это икс нулевое.
    while (number > 0)
    {
        sum += number % 10; //  тута остаток от деления на 10
        number /= 10; // а тута удаляет ластовую цифру.
    }
    return sum;
}

int digitCount(int number) // функция, которая высчитывает количество цифр.
{ // по честоку, я кое-как тут разбираюсь.
    if (number == 0) return 1; //если число 0, то и всё, нету цифр по сути, хз, наверно.
    int count = 0; //тут получается задаём уже как я называю икс нулевое.
    while (number > 0) 
    {
        count++;
        number /= 10; //в этой части цикл делает такую историю, количество цифр увеличивается, если число больше нуля.
    }
    return count;
}

bool isPrime(int number) //тут сложно, функция, которая определяет число, простое ли оно.
{
    if (number < 2) //единичку пропускаю
    {
        return false;
    }
    for (int i = 2; i < number; i++) //начинаю сразу с двойки.
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int userChoice = 1;
    while (userChoice != 0) //вот это уже основной цикл.
    {
        int number;
        cout << "Enter number: "; //коментарии излишне
        cin >> number;

        cout << "Even: " << (isEven(number) ? "yes" : "no") << "\n"; // ответка, да или нет на счёт чётности
        cout << "Positive: " << (isPositive(number) ? "yes" : "no") << "\n"; // ответка, да или нет на счёт положительности
        cout << "Digit sum: " << digitSum(number) << "\n"; // ответ суммы цифр
        cout << "Digit count: " << digitCount(number) << "\n"; // ответ количества цифр
        cout << "Prime: " << (isPrime(number) ? "yes" : "no") << "\n"; // ответка, да или нет на счёт "простоты" числа

        cout << "Continue? (1 - yes, 0 - no): "; //хотим ли мы продолжить?
        cin >> userChoice; // если 1, то да, продолжаем, если нет, то нолик пишем, и программа завершается.
        cout << "\n";
    }

    return 0;
}