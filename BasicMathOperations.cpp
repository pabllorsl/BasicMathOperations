/**
* The BasicMathOperations program implements an application
* that calculates the basic Math operations.
*
* @author  Pabllo Lima
* @version 1.0
* @since   2018-05-29
*/

#include <cstdio>
#include <iostream>

using namespace std;

/**
 * Returns the sum of two integers numbers.
 *
 * @param x An integer number.
 * @param y An integer number.
 * @return The sum of two integers numbers.
 */
int sum(int x, int y);

/**
 * Returns the difference of two integers numbers.
 *
 * @param x An integer number.
 * @param y An integer number.
 * @return The difference of two integers numbers.
 */
int difference(int x, int y);

/**
 * Returns the product of two integers numbers.
 *
 * @param x An integer number.
 * @param y An integer number.
 * @return The product of two integers numbers.
 */
int product(int x, int y);

/**
 * Returns the quotient of two integers numbers.
 *
 * @param x An integer number.
 * @param y An integer number.
 * @return The quotient of two integers numbers.
 * @exception DivisioByZeroException On division by zero.
 */
int quotient(int x, int y);

void inputOperation();

int inputNumber(const string &order);

int main() {
    inputOperation();
    return 0;
}

void inputOperation() {
    int operation;
    int x;
    int y;

    cout << "Choose an operation:" << endl;
    cout << "1) Addition" << endl;
    cout << "2) Subtraction" << endl;
    cout << "3) Multiplication" << endl;
    cout << "4) Division" << endl;

    cin >> operation;

    switch (operation) {
        case 1:
            x = inputNumber("first");
            y = inputNumber("second");

            cout << "Expression: " << x << " + " << y << " = " << sum(x, y) << endl;
            break;
        case 2:
            x = inputNumber("first");
            y = inputNumber("second");

            cout << "Expression: " << x << " - " << y << " = " << difference(x, y) << endl;
            break;
        case 3:
            x = inputNumber("first");
            y = inputNumber("second");

            cout << "Expression: " << x << " * " << y << " = " << product(x, y) << endl;
            break;
        case 4:
            x = inputNumber("first");
            y = inputNumber("second");

            cout << "Expression: " << x << " / " << y << " = " << quotient(x, y) << endl;
            break;
        default:
            cout << "\nInvalid operation. Try again.\n" << endl;
            inputOperation();
            break;
    }
}

int inputNumber(const string &order) {
    int number;
    cout << "Enter the " << order << " integer number: ";
    cin >> number;
    return number;
}

int sum(int x, int y) {
    return x + y;
}

int difference(int x, int y) {
    return x - y;
}

int product(int x, int y) {
    return x * y;
}

int quotient(int x, int y) {
    if (y == 0) throw exception();
    return x / y;
}
