Name Zakariya Mohamed 
Admission 170421
#include <iostream>
using namespace std;

int main() {
    // 1. Write a program to take two numbers as input and print their sum and average.
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int sum = num1 + num2;
    double average = static_cast<double>(sum) / 2;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    // 2. Write a program to swap two numbers without using a third variable.
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping:\n";
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // 3. Write a program to check whether the number provided is even or odd.
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    // 4. Write a program to print the largest number among three numbers given by the user.
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    if (x >= y && x >= z) {
        cout << x << " is the largest number." << endl;
    } else if (y >= x && y >= z) {
        cout << y << " is the largest number." << endl;
    } else {
        cout << z << " is the largest number." << endl;
    }

    // 5. Write a single program that provides the sum, difference, multiplication, and division of two numbers.
    int num3, num4;
    cout << "Enter two numbers: ";
    cin >> num3 >> num4;
    cout << "Sum: " << num3 + num4 << endl;
    cout << "Difference: " << num3 - num4 << endl;
    cout << "Multiplication: " << num3 * num4 << endl;
    if (num4 != 0) {
        cout << "Division: " << num3 / num4 << endl;
    } else {
        cout << "Cannot divide by zero." << endl;
    }

    // 8. Write a program to check if a number is Armstrong or not.
    int number, sum = 0, remainder, temp;
    cout << "Enter a number: ";
    cin >> number;
    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp /= 10;
    }
    if (number == sum) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    // 9. Write a C++ program to print table of a number using do-while loop.
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Multiplication table of " << n << ":" << endl;
    do {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    } while (i <= 10);

    // 14. Write a program to print the largest number in an array.
    int arr[5], max;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Largest element in array: " << max << endl;

    // 15. Write a program that provides the sum of two matrices.
    int m1[3][3], m2[3][3], sum_matrix[3][3];
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Enter elements of row " << i + 1 << ":\n";
        for (int j = 0; j < 3; j++) {
            cin >> m1[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Enter elements of row " << i + 1 << ":\n";
        for (int j = 0; j < 3; j++) {
            cin >> m2[i][j];
        }
    }
    cout << "Sum of the two matrices:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum_matrix[i][j] = m1[i][j] + m2[i][j];
            cout << sum_matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


// 16. Write a programto find out the product of two matrices.

// int i,j,k, m1[10][10], m2[10][10], res[10][10];
// cout << "Enter the elements of first matrix\n";
// for ( i = 0 ;i < 3 ; i++ )
// {
// cout<<"\n enter values for row "<<i+1<<endl;
// for ( j = 0 ; j<3 ; j++ )
// { cin >> m1[i][j];}
// }
// cout << "Enter the elements of second matrix\n";
// for ( i = 0 ;i < 3; i++ )
// {
// cout<<"\n enter values for row "<<i+1<<endl;
// for ( j = 0 ; j< 3 ; j++ )
// { cin >> m2[i][j];
// }
// }
// for (i = 0; i < 3; ++i)
// {
// for (j = 0; j < 3; ++j)
// {
// res [i][j]=0;
// for (k = 0; k < 3; ++k)
// {


// res[i][j] += m1[i][k] * m2[k][j];
// }
// }
// }
// cout << "Multiplication of two matrices \n";
// for ( i = 0 ;i < 3 ; i++ )
// {
// for ( j = 0 ; j<3 ; j++ )
// {
// cout << res[i][j] << "\t";
// }
// }
// return 0 ;
// }

        //  BLOCK II OOPs CONCEPTS
//class
// class student
// {
// private: //scope of variables is private
// //member variables
// int rno;
// char name[10];
// public: //scope of functions is public
// // member functions
// void input()
// {
// cout<<"\n Enter student roll number :";
// cin>>rno;
// cout<<"\n Enter student name :";
// cin>>name;
// }
// void display()
// {
// cout<<"\n Roll Number :"<<rno;
// cout<<"\n Name :"<<name;
// }
// } ; //class closed
// int main()
// {



// student obj; //object of student class
// obj.input(); //call of input function
// obj.display(); //call of display function



// return 0 ;
// }


// 2. Write a program to demonstrate the use of constructor in a class.

//class
class student
{



private: //scope of variables is private
//member variables
int rno;
char name[10];
public: //scope of functions is public
student()
{
cout<<"Constructor \n";
rno=0;
}
// member functions
void input()
{
cout<<"\n Enter student roll number :";
cin>>rno;
cout<<"\n Enter student name :";
cin>>name;
}
void display()
{
cout<<"\n Roll Number :"<<rno;
cout<<"\n Name :"<<name;
}
} ;
int main()
{



student obj;
obj.input();
obj.display();
}


// 3. Write a program to demonstrate the use of constructor and destructor
// in a class.

// //class
class student
{
private:
//member variables
int rno;
char name[10];
public
// constructor
student()
{
cout<<"Constructor \n";
rno=0;
}
// member functions
void input()
{



cout<<"\n Enter student roll number :";
cin>>rno;

cout<<"\n Enter student name :";
cin>>name;
}
void display()
{



cout<<"\n Roll Number :"<<rno;
cout<<"\n Name :"<<name;
}
//destructor
student()
{
cout<<"\n Destructor \n";
}
} ;
int main()
{
student obj;
obj.input();
obj.display();
}

// 4. Write a program to demonstrate the use of static variable.
// static variable
void test()
{
static int count = 0;
cout << count <<endl;
count++;
}
int main()
{
cout << "Static variable "<<endl;
for (int i=0; i<5; i++)
test();
}

// 5. Write a program to demonstrate the use of static variable and static
// function.
class test
{
private:
    static int count; // Static data
    int n;

public:
    // Constructor
    test()
    {
        count = count + 1;
        n = count;
    }

    // Static function
    static void function1()
    {
        cout << "\nResult is: " << count << endl;
    }

    // Normal function
    void counter()
    {
        cout << "\nCounter is: " << n << endl;
    }

    // Destructor
    ~test()
    {
        count = count - 1;
    }
};

int test::count = 0;

int main()
{
    test obj1;
    // Static function is accessed using class name and scope resolution operator (::)
    test::function1();

    test obj2, obj3, obj4;
    test::function1();

    // Normal function is accessed using object name and the dot member access operator(.)
    obj1.counter();
    obj2.counter();
    obj3.counter();
    obj4.counter();

    return 0;
}

// 6.Write a program to demonstrate the use ofstatic function and variable.
class static_class {
    int n;
    static int count; // static variable

public:
    // Constructor
    static_class() {
        n = ++count;
    }

    void obj_number() const {
        cout << "\n\tObject number is :" << n << endl;
    }

    static void obj_count() {
        cout << "\nNumber of Objects :" << count << endl;
    }
};

int static_class::count = 0; // Initialize static variable

int main() {
    static_class obj1, obj2;
    obj1.obj_count();   // Call static function using object
    obj1.obj_number();  // Call non-static function using object
    obj2.obj_count();   // Call static function using another object
    obj2.obj_number();  // Call non-static function using another object
    return 0;
}

8. Write a programto overload a sum function.
Base class
class student {
private:
    int rno;
    char name[50]; // Increased size to accommodate larger names

public:
    // Member function to input student details
    void input() {
        cout << "\nEnter student roll number: ";
        cin >> rno;
        cout << "Enter student name: ";
        cin.ignore(); // To clear the newline character left by cin
        cin.getline(name, 50);
    }

    // Member function to display student details
    void display() const {
        cout << "\nRoll Number: " << rno;
        cout << "\nName: " << name << endl;
    }
};

// Derived class
class fee : public student {
private:
    float feeAmount;

public:
    // Member function to input fee details
    void input_data() {
        input(); // Call input function of student class
        cout << "Enter Fee: ";
        cin >> feeAmount;
    }

    // Member function to display fee details
    void display_data() const {
        display(); // Call display function of student class
        cout << "Fee: " << feeAmount << endl;
    }
};

int main() {
    fee obj; // Object of derived class fee
    obj.input_data(); // Input student and fee details
    obj.display_data(); // Display student and fee details
    return 0;
}



// 9. Write a program to print factorial of a given number using recursive
// function.
// Factorial Function
// Function to calculate factorial recursively
int factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1); // Recursive call
    else
        return 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}



// // 10,Function to calculate Fibonacci number recursively
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
    }
}

int main() {
    int n;
    cout << "Enter number of terms for Fibonacci Series: ";
    cin >> n;
    cout << "Fibonacci Series:" << endl;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}

// 11. Write a C++ program to create a file (data.txt).
int main() {
    ofstream file1;
    file1.open("data.txt"); // Use standard double quotes for string literals
    if (file1.is_open()) {
        file1 << "This is my first file.\n";
        file1.close();
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Failed to open the file." << endl;
    }
    return 0;
}



// 12.Write a program for creating and writing on a text file.

// #include <iostream>
// #include <fstream> // Include the fstream library for file operations

// using namespace std;

int main() {
    ofstream file_out;
    char file_name[20];
    char str[80];

    cout << "Enter file name to be created: ";
    cin >> file_name;

    // Create a new file in output mode
    file_out.open(file_name, ios::out);
    if (file_out.is_open()) {
        cout << "Enter data to be stored: ";
        cin.ignore(); // To ignore any newline character left in the input buffer
        cin.getline(str, 80); // To read the entire line including spaces

        file_out << str;
        cout << "Information stored in file" << endl;

        // Close file
        file_out.close();
    } else {
        cout << "Failed to create the file." << endl;
    }

    return 0;
}

// #include <iostream>
// #include <fstream> // For file stream operations
// #include <string> // For string operations

// using namespace std;

int main() {
    ifstream file_in; // Input file stream object
    string file_name; // String to store file name
    string line; // String to store each line of text from file

    cout << "Enter file name: ";
    cin >> file_name;

    file_in.open(file_name.c_str()); // Open file specified by file_name

    if (file_in.is_open()) {
        cout << "File content:\n";
        while (getline(file_in, line)) { // Read each line from file
            cout << line << endl; // Output each line
        }
        file_in.close(); // Close the file
    } else {
        cout << "Unable to open file." << endl; // Display error if file cannot be opened
    }

    return 0;
}


// 14. Write a program for reading and writing on a binary file.
// #include <iostream>
// #include <fstream>
// #include <cstring>

// using namespace std;

class Student {
private:
    int rno;
    char name[50];

public:
    void setData() {
        cout << "\nEnter roll number: ";
        cin >> rno;
        cin.ignore(); // Ignore newline character left in the buffer
        cout << "Enter name: ";
        cin.getline(name, 50);
    }

    void showData() {
        cout << "\nAdmission no.: " << rno;
        cout << "\nStudent Name: " << name << endl;
    }

    int getRollNumber() {
        return rno;
    }
};

// Function to write student data to binary file
void writeData() {
    ofstream file_out("student.dat", ios::binary | ios::app);
    if (!file_out) {
        cout << "Error opening file!" << endl;
        return;
    }

    Student obj;
    obj.setData();

    file_out.write(reinterpret_cast<char*>(&obj), sizeof(obj));
    file_out.close();
}

// Function to display all records from binary file
void display() {
    ifstream file_in("student.dat", ios::binary);
    if (!file_in) {
        cout << "Error opening file!" << endl;
        return;
    }

    Student obj;
    while (file_in.read(reinterpret_cast<char*>(&obj), sizeof(obj))) {
        obj.showData();
    }
    file_in.close();
}

// Function to search for a record in the binary file by roll number
void search(int rollNumber) {
    ifstream file_in("student.dat", ios::binary);
    if (!file_in) {
        cout << "Error opening file!" << endl;
        return;
    }

    Student obj;
    bool found = false;
    while (file_in.read(reinterpret_cast<char*>(&obj), sizeof(obj))) {
        if (obj.getRollNumber() == rollNumber) {
            obj.showData();
            found = true;
            break;
        }
    }
    file_in.close();

    if (!found) {
        cout << "Record with roll number " << rollNumber << " not found." << endl;
    }
}

// Function to delete a record from the binary file by roll number
void deleteRecord(int rollNumber) {
    ifstream file_in("student.dat", ios::binary);
    if (!file_in) {
        cout << "Error opening file!" << endl;
        return;
    }

    ofstream file_temp("temp.dat", ios::binary);
    if (!file_temp) {
        cout << "Error creating temp file!" << endl;
        file_in.close();
        return;
    }

    Student obj;
    bool found = false;
    while (file_in.read(reinterpret_cast<char*>(&obj), sizeof(obj))) {
        if (obj.getRollNumber() != rollNumber) {
            file_temp.write(reinterpret_cast<char*>(&obj), sizeof(obj));
        } else {
            found = true;
        }
    }
    file_in.close();
    file_temp.close();

    if (found) {
        remove("student.dat");
        rename("temp.dat", "student.dat");
    } else {
        cout << "Record with roll number " << rollNumber << " not found." << endl;
        remove("temp.dat");
    }
}

// Function to modify a record in the binary file by roll number
void modifyRecord(int rollNumber) {
    fstream file("student.dat", ios::binary | ios::in | ios::out);
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }

    Student obj;
    bool found = false;
    while (file.read(reinterpret_cast<char*>(&obj), sizeof(obj))) {
        if (obj.getRollNumber() == rollNumber) {
            obj.showData(); // Display existing data
            cout << "Enter new data:" << endl;
            obj.setData(); // Modify data
            file.seekp(-static_cast<int>(sizeof(obj)), ios::cur); // Move put pointer to beginning of record
            file.write(reinterpret_cast<char*>(&obj), sizeof(obj)); // Write modified data
            found = true;
            break;
        }
    }
    file.close();

    if (!found) {
        cout << "Record with roll number " << rollNumber << " not found." << endl;
    }
}

int main() {
    int choice, rollNumber;

    do {
        cout << "\nMenu:";
        cout << "\n1. Add a record";
        cout << "\n2. Display all records";
        cout << "\n3. Search record by roll number";
        cout << "\n4. Delete record by roll number";
        cout << "\n5. Modify record by roll number";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeData();
                break;
            case 2:
                display();
                break;
            case 3:
                cout << "Enter roll number to search: ";
                cin >> rollNumber;
                search(rollNumber);
                break;
            case 4:
                cout << "Enter roll number to delete: ";
                cin >> rollNumber;
                deleteRecord(rollNumber);
                break;
            case 5:
                cout << "Enter roll number to modify: ";
                cin >> rollNumber;
                modifyRecord(rollNumber);
                break;
            case 6:
                cout << "Exiting program.";
                break;
            default:
                cout << "Invalid choice!";
        }
    } while (choice != 6);

    return 0;
}
// 15. Write a Program to print values of array using Pointers.
//C++ program of pointers with arrays
#include <iostream.h>
void main()
{
int arr[5],i,*ptr;
ptr = arr; //ptr pointer is holding address of arr[0]
element.
cout << “Enter 5 numbers:\n “;
for(i=0;i<5;i++)
cin >> arr[i];
cout<<“\n Array values using pointer “<<endl;
for(i=0;i<5;i++)
cout<<*(ptr + i)<<endl; //*(ptr+i) will
print array values
}