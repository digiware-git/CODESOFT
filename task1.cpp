#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

int main() {
    // random seed set (har run me number change ho)
    srand(time(0));

    int secret = (rand() % 100) + 1;  // 1 to 100
    int guess;

    cout << "=== NUMBER GUESSING GAME ===\n";
    cout << "Maine 1 se 100 ke beech ek number socha hai.\n";

    while (true) {
        cout << "Apna guess enter karo: ";
        cin >> guess;

        if (guess > secret) {
            cout << "Too High! (Bada hai)\n";
        } else if (guess < secret) {
            cout << "Too Low! (Chhota hai)\n";
        } else {
            cout << "Correct! 🎉 Number tha: " << secret << "\n";
            break;
        }
    }

    return 0;
}
