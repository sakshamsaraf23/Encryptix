#include <iostream>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));//for assining random value each time
    
    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess;

    cout << "Guess the number (between 1 and 100): ";

    // Loop until the user guesses the correct number
    while (userGuess != randomNumber) {
        cin >> userGuess;

        if (userGuess > randomNumber) {
        cout << "Too high!"<<endl;
        cout<<"Try again: ";
        } else if (userGuess < randomNumber) {
        cout << "Too low!"<<endl;
        cout<< "Try again:";
        } else {
        cout << "Congratulations! You guessed the correct number: " << randomNumber <<endl;
        }
    }

    return 0;
}
