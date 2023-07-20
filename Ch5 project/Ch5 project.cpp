// Start of the program
#include <iostream>
using namespace std;

int main() {
    char cont;
    do {
        // print start message for first iteration only
        if (cont != 'Y' && cont != 'y') {
            cout << "Compute completion time from current time and waiting period\n";
        }

        // get current time
        int currentHour, currentMinute;
        cout << "Current time:\n";
        cout << "Enter 24 hour time in the format HH:MM \n";
        scanf("%d:%d", &currentHour, &currentMinute);

        // get waiting time
        int waitingHour, waitingMinute;
        cout << "Waiting time:\n";
        cout << "Enter 24 hour time in the format HH:MM \n";
        scanf("%d:%d", &waitingHour, &waitingMinute);

        // compute completion time
        int completionHour = currentHour + waitingHour;
        int completionMinute = currentMinute + waitingMinute;
        if (completionMinute >= 60) {
            completionHour++;
            completionMinute -= 60;
        }
        if (completionHour >= 24) {
            completionHour -= 24;
        }

        // output completion time
        cout << "Completion Time in 24 hour format:\n";
        printf("%02d:%02d\n", completionHour, completionMinute);

        // ask if user wants to continue
        cout << "\nEnter Y or y to continue, any other halts\n";
        cin >> cont;
    } while (cont == 'Y' || cont == 'y');

    return 0;
}

// End of the program