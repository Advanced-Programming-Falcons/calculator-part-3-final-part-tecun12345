#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

// Global variables
int num1, num2;
char op;
string input;
int Answer;
string His;
bool Lp = true;

bool parseInput();
void cal();
int main (void) {
    while (Lp == true){

    cout << "Enter Calulcation or 0 h 0 for history or 0 E 0 To end" << endl;
    getline(cin, input);
    if (parseInput()){
         if (op == 'h'){
        cout << His;}
               else if (op == 'E'){
            Lp = false;
        }
        else{
        cout << "Calcuating\n";
        cal();}
    }
    else {
        cout << "failed\n";
    }
   
    }
    
    return 0;
}
bool parseInput(){
    istringstream iss(input);
    if (iss >> num1 >> op >> num2){
    return true;
    }
    return false;
}

void cal(){
if (op == '+'){
            Answer = num1 + num2;
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            His += to_string(num1) + " + " +  to_string(num2) + " = " + to_string(Answer) + "\n";
            }
        else if (op == '-'){
            Answer = num1 - num2;
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            His += to_string(num1) + " - " +  to_string(num2) + " = " + to_string(Answer) + "\n";
        }
        else if (op == '*'){
            Answer = num1 * num2;
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            His += to_string(num1) + " * " +  to_string(num2) + " = " + to_string(Answer) + "\n";
        }
        else if (op == '/'){
            Answer = num1 / num2;
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            His += to_string(num1) + " / " +  to_string(num2) + " = " + to_string(Answer) + "\n";
        }
 
        else{
            cout << "Something went wrong please enter again\n";}
}