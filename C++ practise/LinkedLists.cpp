
#include <iostream>
#include <string>
using namespace std;

// Define the structure for a node in the linked list
struct Node {
    string data;
    Node* next;
};

int main() {
    // Creating nodes for car names
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    // Allocating memory for nodes
    head = new Node();
    second = new Node();
    third = new Node();

    // Assigning data to nodes
    head->data = "Toyota";
    head->next = second;

    second->data = "Honda";
    second->next = third;

    third->data = "Ford";
    third->next = nullptr;

    // Printing the linked list of car names
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;

    // Freeing memory allocated to nodes
    delete head;
    delete second;
    delete third;

    return 0;
}