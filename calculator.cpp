#include <iostream>

double giveResult(double valuex, double valuey, char operatorz)
{
    switch (operatorz)
    {
    case '+':
        return valuex + valuey;
    case '-':
        return valuex - valuey;
    case '*':
        return valuex * valuey;
    case '/':
        return valuex / valuey;
    default:
        break;
    }
}

int main()
{
    double valueOne{ 0 }, valueTwo{ 0 };
    char operatorChosen;
    std::cout << "Enter a equation following the pattern 1 + 2: ";
    std::cin >> valueOne >> operatorChosen >> valueTwo;

    double sum = giveResult(valueOne, valueTwo, operatorChosen);

    std::cout << "The sum of " << valueOne << " and " << valueTwo << " is " << sum;
}
