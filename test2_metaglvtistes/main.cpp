#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int choiceCount = 0;
void Z();
void K();
void G();
void M();

void Z() {
    cout << "(";
    K();
    cout << ")";
}

void K() {
    G();
    M();
}

void G() {
    if (choiceCount < 3 && rand() % 2 == 0) {
        cout << "v";
    } else {
        Z();
    }
    choiceCount++;
}

void M() {
    if (choiceCount < 3) {
        int choice = rand() % 3;

        if (choice == 1) {
            K();
        } else if (choice == 2) {
            cout << "+";
            K();
        }

        choiceCount++;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    Z();
    return 0;
}
