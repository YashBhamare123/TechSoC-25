#include <iostream>
#include <cmath>

using namespace std;
void Operation_selector();
void Number_selector();
string Operation;
float num1, num2;

int main()
{
    Operation_selector();
    if(Operation == "+") 
    {
        Number_selector();
        std::cout << "Result of Addition: " << (num1 + num2) << std::endl;
    }
    else if(Operation == "-")
    {
        Number_selector();
        std::cout << "Result of Subtraction: " << (num1 - num2) << std::endl;
    }
    else if(Operation == "*")
    {
        Number_selector();
        std::cout << "Result of Multiplication: " << (num1 * num2) << std::endl;
    }
    else if(Operation == "/")
    {
        Number_selector();
        if(num2 != 0)
        {
            std::cout << "Result of Division: " << (num1 / num2) << std::endl;
        }
        else
        {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
        }
    }
    else if(Operation == "^")
    {
        Number_selector();
        std::cout << "Result of Power: " << pow(num1, num2) << std::endl;
    }
    else if(Operation == "sqrt")
    {
        Number_selector();
        if(num1 >= 0)  
        {            std::cout << "Result of Square Root: " << sqrt(num1) << std::endl;
        }    
        else
        {
            std::cout << "Error: Square root of a negative number is not allowed." << std::endl;
        }   
    }
    else
    {
        std::cout << "Invalid operation selected." << std::endl;
    }            
}
void Operation_selector()
// Denote list of operations   
{

    std::cout << "List of operations:" << std::endl;
    std::cout << "1. Addition'+'" << std::endl;
    std::cout << "2. Subtraction'-'" << std::endl;
    std::cout << "3. Multiplication'*'" << std::endl;
    std::cout << "4. Division'/'" << std::endl;
    std::cout << "5. Power'^'" << std::endl;
    std::cout << "6. Square Root'sqrt'" << std::endl; 
    std::cout << "Choose an operation by entering the corresponding symbol:";
    std::cin >> Operation; 
}
void Number_selector()
// This program prompts the user to enter two numbers
// and stores them in num1 and num2 variables.
{
std::cout << "Enter First number: " << std::endl;
std::cin >> num1;
std::cout << "Enter Second number: " << std::endl;
std::cin >> num2;
}
