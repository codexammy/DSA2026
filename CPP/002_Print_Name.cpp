/*
 * Program: Print Name
 * Description: Asks the user to enter their name and prints a greeting.
 *
 * Example Input:  Alice
 * Example Output: Hello, Alice! Welcome to C++ programming.
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string userName;
    cout << "Enter your name: ";
    cin >> userName;
    cout << "Hello, " << userName << "! Welcome to C++ programming." << endl;
    return 0;
}
