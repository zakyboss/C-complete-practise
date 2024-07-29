cpp
Copy code
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // List that contains names of fruits
    list<string> fruits = {"Apple", "Banana", "Cherry", "Date"};

    // PRINTING THE LIST
    for (const string& fruit : fruits) {
        cout << fruit << endl;
    }

    // ADDING AND REMOVING FRUITS
    // List that contains names of fruits
    // list<string> fruits = {"Apple", "Banana", "Cherry", "Date"};

    // ADDING (pushing) A FRUIT AT THE END
    fruits.push_back("Elderberry");

    // ADDING (pushing) FRUITS AT THE BEGINNING
    fruits.push_front("Apricot");
    fruits.push_front("Guava");
    fruits.push_front("Fig");

    // REMOVING (popping) A FRUIT FROM THE END
    fruits.pop_back();

    // REMOVING (popping) A FRUIT FROM THE BEGINNING
    fruits.pop_front();

    // PRINTING THE LIST
    for (const string& fruit : fruits) {
        cout << fruit << endl;
    }

    return 0;
}