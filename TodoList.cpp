#include <iostream>
#include <vector>
using namespace std;

vector<string> userVector;
string userInstruction;

void addToList(string input){
    userVector.push_back(input);
}

void viewList(){
    if(userVector.empty()){
        cout << "Your list is empty\n";
    }

    for(string items : userVector){
        cout << items << "\n";
    }
}

void deleteTask(string input){
    bool flag = false;

    for(int i = 0; i < userVector.size(); i++){
        if (userVector[i] == input){
            userVector.erase(userVector.begin() + i);    
            cout << "Delete successfully!\n";  
            flag = true; 
        }
    }

    if(flag == false){
        cout << "Task was not found!\n";
    }
}

int main(){
    while(true){
        cout << "What would you like to do to your list? Type add, view, delete, or exit: ";
        cin >> userInstruction;

        if(userInstruction == "exit" || userInstruction == "quit"){
            return false;
        } else if(userInstruction == "add"){
            string userInput;
            cin.ignore();
            cout << "Type to add: ";
            getline(cin, userInput);
            addToList(userInput);

        } else if(userInstruction == "view"){
            viewList();

        } else if(userInstruction == "delete"){
            string userInput;
            cin.ignore();
            cout << "Type to delete: ";
            getline(cin, userInput);
            deleteTask(userInput);

        } else {
            cout << "Invalid input. Please try again!" << "\n";
        }
    }
}

