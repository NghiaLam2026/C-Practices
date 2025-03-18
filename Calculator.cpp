#include <iostream>
using namespace std;

int addition(int num1, int num2){
    return num1 + num2;
}

int subtraction(int num1, int num2){
    return num1 - num2;
}

int multiplication(int num1, int num2){
    return num1 * num2;
}

int division(int num1, int num2){
    return num1 / num2;
}

int main(){
    int num1;
    int num2;
    char userOperator;

    cout << "Enter your first number: ";
    cin >> num1;
    cout << num1 << "\n";

    cout << "Enter your second number: ";
    cin >> num2;
    cout << num2 << "\n";

    cout << "What operation do you want to perform? "; 
    cin >> userOperator;
    if (userOperator == '+'){
        cout << "The sum is: " << addition(num1, num2);
    } else if (userOperator == '-'){
        cout << "The difference is: " << subtraction(num1, num2);
    } else if (userOperator == '*'){
        cout << "The product is: " << multiplication(num1, num2);
    } else if (userOperator == '/'){
        if (num2 == 0){
            cout << "Division by 0 error!";
        } else {
            cout << "The quotient is: " << division(num1, num2);
        }
    } else {
        cout << "Invalid operator!";
    }
    
    return 0;
}