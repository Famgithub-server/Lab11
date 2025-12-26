// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";

    cin.ignore();
    cin.ignore();
    cin.ignore();

    int choice = rand() % 9;
    string g;
    switch (choice) {
        case 1: g = 'A'; break;
        case 2: g = "B+"; break;
        case 3: g = 'B'; break;
        case 4: g = "C+"; break;
        case 5: g = 'C'; break;
        case 6: g = 'D'; break;
        case 7: g = "D+"; break;
        case 8: g = 'F'; break;
        case 0: g = 'W'; break;
    } 

    cout << "You will get "<< g <<" in this 261102.";
    return 0;
}