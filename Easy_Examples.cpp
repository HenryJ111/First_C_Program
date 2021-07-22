// Hello World!!!
// July 21, 2021

#include <iostream>
#include <string>

using namespace std;

//Basic hello world program
void helloWorld() {
    cout << "Hello World! ";
    cout << "I'm a C++ program";
}

//Manipulating two variables
void twoVariables() {
    int a,b;
    int result;

    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    cout << result;
}

//Storing a string in a variable, ending lines, and adding strings
void stringTest() {
    string storedString = "Henry Jones";
    cout << storedString << endl;
    cout << storedString + " " + storedString << endl;
}

//Messing around with character escapes
void characterEscapes() {
    cout << "10\n9\n8\n7\n6\n5\n4\n3\n2\n1" << endl;
    cout << "\tFormal essay goes here\nWith tabs!" << endl;
    cout << "Quotes go brr \" \" \" \" \' \' \' \'" << endl;
    cout << "BING\aBING\a" << endl;
}

//Testing simple arethmetic
void simpleMath() {
    int x = 3;
    int y = 2;

    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;
}

//Variable modification shorthands
void variableModification() {
    int x = 3;
    int y = 2;

    x += y;
    x -= y;
    x *= y;
    x /= y;
    ++x;
    --x;

    cout << x << endl;
}

//Exploring boolean operations
void booleanOperators() {
    int x = 3;
    int y = 2;

    cout << (x == y) << endl;
    cout << (x != y) << endl;
    cout << (x > y) << endl;
    cout << (x < y) << endl;

    cout << ((x < y) && (x != y)) << endl;
    cout << ((x < y) || (x != y)) << endl;

    cout << ((x == y) ? "True" : "False") << endl;
    cout << ((x != y) ? "True" : "False") << endl;
}

//Changing variable types
void castingTest() {
    double x = 10.321;

    int y = x;

    double z = int(x);

    cout << to_string(x) + " " + to_string(y) + " " + to_string(z) << endl;
    cout << sizeof(x) << endl;
}

int main() {
    castingTest();
    return 0;
}

