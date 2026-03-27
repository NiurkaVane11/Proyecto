#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b;
    char op;

    cout << "Ingresa el primer número: ";
    cin >> a;

    cout << "Operación (+, -, *, /, ^, %): ";
    cin >> op;

    cout << "Ingresa el segundo número: ";
    cin >> b;

    double resultado;

    switch (op)
    {
    case '+':
        resultado = a + b;
        break;
    case '-':
        resultado = a - b;
        break;
    case '*':
        resultado = a * b;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Error: no se puede dividir entre 0" << endl;
            return 1;
        }
        resultado = a / b;
        break;
    case '^':
        resultado = pow(a, b);
        break;
    case '%':
        resultado = fmod(a, b);
        break;
    default:
        cout << "Operación no válida" << endl;
        return 1;
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}