//  Admission 170421
//  Name  Zakariya Mohamed
#include <iostream>
#include <queue> // Include the queue library
using namespace std;

int main() {
    // QUEUES

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout << "Front element: " << q.front() << endl; // Access the front element
    cout << "Back element: " << q.back() << endl; // Access the back element
    cout << "Queue size: " << q.size() << endl; // Get the size of the queue
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Check if the queue is empty

    q.pop(); // Remove the front element

    cout << "After popping one element:" << endl;
    cout << "Front element: " << q.front() << endl; // Access the new front element
    cout << "Queue size: " << q.size() << endl; // Get the new size of the queue

    return 0;
}


            // ****************   ARRAY ******************************************
            #include <iostream>
            using namespace std;
            int main() {
                int arr[5] = {10, 20, 30, 40, 50};
                cout << arr[0] << endl;
                cout << arr[1] << endl;
                cout << arr[2] << endl;
                cout << arr[3] << endl;
                cout << arr[4] << endl;
                //  Array methods 
                
                // 1. Size of array
                cout << "Size of array: " << sizeof(arr) / sizeof(arr[0]) << endl;
                // 2. Length of array
                cout << "Length of array: " << sizeof(arr) / sizeof(arr[0]) << endl;
            

                return 0 ;

            }