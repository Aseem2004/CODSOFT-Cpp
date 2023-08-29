#include <iostream>
using namespace std;

int main(){

float no1,no2;
string op;

cout<< "Enter the first number: ";
cin>> no1;

cout<< "Enter the operation to be performed (+,-,*,/): ";
cin>> op;

cout<< "Enter the second number: ";
cin>> no2;


if(op=="+"){
cout << "Addition: ";
cout << "Sum of " << no1 << " and " << no2 << " is " << no1 + no2;
}

else if(op=="-"){
cout << "Subtraction: ";
cout << "Difference of " << no1 << " and " << no2 << " is " << no1 - no2;
}

else if(op=="*"){
cout << "Multiplication: ";
cout << "Product of " << no1 << " and " << no2 << " is " << no1 * no2;
}

else if(op=="/"){
cout << "Division: ";
cout << "Quotient of " << no1 << " divided by " << no2 << " is " << no1 / no2;
}

else
cout << "Please enter a valid opearation";
    
}
