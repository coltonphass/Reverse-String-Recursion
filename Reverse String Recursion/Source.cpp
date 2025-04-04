// INCLUES AND NAMESPACES
#include <iostream>
using namespace std;

// DEFINES
#define STRING_SIZE 100

// PROTOTYPES
int ReverseStringRecursive(char*);

// MAIN
int main() {
    // create a string
    char someString[STRING_SIZE] = "Hello, my name is recursion.";

    // display the string before being reversed
    cout << "The string contains: " << endl;
    cout << someString << endl << endl;

    // make the call to the recursive function
    cout << "CALL THE REVERSING FUNCTION" << endl << endl;
    ReverseStringRecursive(someString);

    // display the string after being reversed
    cout << "The string contains: " << endl;
    cout << someString << endl;

    // exit program
    cout << "\nPress enter to exit program";
    cin.get();
    return 0;
}

// FUNCTION IMPLEMENTATIONS
int ReverseStringRecursive(char* str) {
    int i = 0;           // our only int variable
    char temp;           // our only char variable

    // Find the length of the string
    while (str[i] != '\0') {
        i++;
    }

    // Base case: if string is empty or has only one character
    if (i <= 1) {
        return 0;
    }

    // Swap the first and last characters
    temp = str[0];
    str[0] = str[i - 1];
    str[i - 1] = temp;

    // Terminate the inner substring temporarily
    str[i - 1] = '\0';

    // Recursive call on the inner substring
    ReverseStringRecursive(str + 1);

    // Restore the last character
    str[i - 1] = temp;

    return 0;
}