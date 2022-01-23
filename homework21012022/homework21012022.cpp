#include <iostream>

void printSomeText();
void printSomeText2();


int main()
{
    std::cout << "Hello World!\n";
    printSomeText();
    printSomeText2();
}

void printSomeText()
{
    std::cout << "Some text in function\n";
}

void printSomeText2()
{
    std::cout << "New text in this function\n";
}

