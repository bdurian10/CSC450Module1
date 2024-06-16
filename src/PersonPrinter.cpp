/*
*PersonPrinter.cpp
* Created by:bhdur
*Jun 16, 2024
*2:32:29 PM
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
//Declare and initialize strings
std::string firstName = "John";
std::string lastName = "Doe";
std::string streetAddress = "123 Main St";
std::string city = "Lexington";
std::string zipCode = "10097";

//Print personal data
std::cout << "Name: " << lastName << ", " << firstName << std::endl;
std::cout << "Address: " << streetAddress << ", " << city << std::endl;
std::cout << "Zip Code: " << zipCode << std::endl;

//end program
return 0;
}


