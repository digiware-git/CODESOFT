#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(time(0));

    int secret = (rand() % 100) + 1;  
    int guess;

    cout << "=== NUMBER GUESSING GAME ===\n";
    cout << "I have picked a number between 1 and 100. Try to guess it!\n";


    while (true) {
        cout << "Enter your guess no: ";
        cin >> guess;

        if (guess > secret) {
            cout << "Too High!\n";
        } else if (guess < secret) {
            cout << "Too Low! \n";
        } else {
            cout << "Correct!  The number was: " << secret << "\n";
            break;
        }
    }

    return 0;
}
