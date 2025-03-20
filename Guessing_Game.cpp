#include <iostream>
#include <ctime>
using namespace std;


void guessingNum(){
    int randomNum = rand() % 101;
    int userNum;
    bool condition = true;
    int userAttempts = 0;

    while(condition){
        cout << "Please enter a number to guess: ";
        cin >> userNum;
        userAttempts ++;
        
        if(userNum == randomNum){
            cout << "You've guessed the correct number!" << "\n";
            condition = false;
        } else if (userNum > randomNum){
            cout << "Your number is too big. Try again!" << "\n";
        } else {
            cout << "Your number is too small. Try again!" << "\n";
        }
    }
    cout << "It took you " << userAttempts << " attempts to guess the correct number.";
}

int main(){
    srand(time(0));
    guessingNum();
    return 0;
}