
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array that contains names of students taking DSA
    string studentNames[] = {"John", "Kevin", "James", "Samantha"};

    // Looping through the array to search for a student based on the name
    for (int i = 0; i < 4; i++) {
        if (studentNames[i] == "Samantha") {
            cout << studentNames[i] << " is taking DSA" << endl;
        }
    }

    // PRINTING THE ARRAY using range-based for loop
    for (const string& name : studentNames) {
        cout << name << endl;
    }

    return 0;
}