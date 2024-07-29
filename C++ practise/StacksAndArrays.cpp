// Admission 170421
// Name Zakariya  Mohamed 
// 1.Write a Program to implement Stack usingArray.

#include <iostream>
#define MAX 5
using namespace std;

// Stack class declaration
class Stack {
private:
    int top;
    int ele[MAX];

public:
    // Default Constructor
    Stack() {
        top = -1;
    }

    // PUSH function
    void push(int item) {
        if (top == MAX - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            top++;
            ele[top] = item;
            cout << "\nInserted value is: " << item << endl;
        }
    }

    // POP function
    int pop() {
        int item;
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return -1; // Return an invalid value to indicate underflow
        } else {
            item = ele[top];
            top--;
            return item;
        }
    }

    // DISPLAY function
    void display() {
        if (top == -1) {
            cout << "\nStack Underflow" << endl;
        } else {
            cout << "Stack values are:" << endl;
            for (int i = top; i >= 0; i--) {
                cout << ele[i] << endl;
            }
        }
    }
};

int main() {
    int item = 0, choice, value;
    char ans;
    Stack s;

    do {
        cout << "1. Push" << endl << "2. Pop" << endl << "3. Display" << endl << "4. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to be inserted: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                value = s.pop();
                if (value != -1) { // Check if the popped value is valid
                    cout << "\nDeleted value is " << value << endl;
                }
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0; // Exit the program
            default:
                cout << "Invalid choice" << endl;
        }

        cout << "\nDo you want to continue...(y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    return 0;
}

// 2. Write a program to convert infix expression to postfix expression.
//C++ Program to convert INFIX EXPRESSION TO POSTFIX

#include <iostream>
#define MAX 100
using namespace std;

// Stack class declaration
class Stack {
public:
    char stack_array[MAX];
    int top;

    // Default constructor used to initialize top=-1
    Stack() {
        top = -1;
    }

    // Push function
    void push(char symbol) {
        if (full()) {
            cout << "\nStack overflow:\n";
        } else {
            top = top + 1;
            stack_array[top] = symbol;
        }
    }

    // Pop function
    char pop() {
        if (empty())
            return ('#'); // Return value '#' indicates stack is empty
        else
            return (stack_array[top--]);
    }

    int empty() {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    int full() {
        if (top == MAX - 1)
            return 1;
        else
            return 0;
    }
}; // Stack class closed

// Expression class declaration
class Expression {
    char infix[MAX];
    char postfix[MAX];

public:
    // Input function to take infix expression from the user
    void input() {
        cout << "\nEnter an infix expression: (Ex. 2+3-(7*6)): ";
        cin >> infix;
    }

    int white_space(char symbol) {
        if (symbol == ' ' || symbol == '\t' || symbol == '\0')
            return 1;
        else
            return 0;
    }

    // Postfix conversion function
    void ConvertToPostfix() {
        Stack s;
        int p = 0;
        char entry1, entry2;
        for (int i = 0; infix[i] != '\0'; i++) {
            entry1 = infix[i];
            if (!white_space(entry1)) {
                switch (entry1) {
                    case '(':
                        s.push(entry1);
                        break;
                    case ')':
                        while ((entry2 = s.pop()) != '(')
                            postfix[p++] = entry2;
                        break;
                    case '+':
                    case '-':
                    case '*':
                    case '/':
                        if (!s.empty()) {
                            int precedence = prec(entry1);
                            entry2 = s.pop();
                            while (precedence <= prec(entry2)) {
                                postfix[p++] = entry2;
                                if (!s.empty())
                                    entry2 = s.pop();
                                else
                                    break;
                            }
                            if (precedence > prec(entry2))
                                s.push(entry2);
                        }
                        s.push(entry1);
                        break;
                    default:
                        postfix[p++] = entry1;
                        break;
                }
            }
        }
        while (!s.empty()) // while stack is not empty
            postfix[p++] = s.pop();
        postfix[p] = '\0';
        cout << "\nThe postfix expression is: " << postfix << endl;
    }

    int prec(char symbol) {
        switch (symbol) {
            case '/':
                return 4; // Precedence of / is 4
            case '*':
                return 3; // Precedence of * is 3
            case '+':
                return 2; // Precedence of + is 2
            case '-':
                return 1; // Precedence of - is 1
            case '(':
                return 0; // Precedence of ( is 0
            default:
                return -1;
        }
    }
};

int main() {
    char ch = 'y';
    Expression expr;
    do {
        expr.input();
        expr.ConvertToPostfix();
        cout << "\n\nDo you want to continue ? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}


// 3. Write a program to evaluate postfix expressions using stack.
//C++ program to evaluate of Postfix Expressions Using
// Stack

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cctype>
using namespace std;

const int MAX = 50;

// Postfix class declaration
class Postfix {
private:
    int stack[MAX];
    int top;
    char *s;

public:
    // Constructor
    Postfix() {
        top = -1;
    }

    void setExpr(char *str) {
        s = str;
    }

    void push(int item) {
        if (top == MAX - 1) {
            cout << endl << "Stack overflow" << endl;
        } else {
            stack[++top] = item;
        }
    }

    int pop() {
        if (top == -1) {
            cout << endl << "Stack underflow" << endl;
            exit(1); // Exit the program if stack underflow occurs
        }
        return stack[top--];
    }

    void calculate() {
        int n1, n2, n3;
        while (*s) {
            if (*s == ' ' || *s == '\t') {
                s++;
                continue;
            }
            if (isdigit(*s)) {
                int num = 0;
                while (isdigit(*s)) { // Handle multi-digit numbers
                    num = num * 10 + (*s - '0');
                    s++;
                }
                push(num);
            } else {
                n1 = pop();
                n2 = pop();
                switch (*s) {
                    case '+':
                        n3 = n2 + n1;
                        break;
                    case '-':
                        n3 = n2 - n1;
                        break;
                    case '/':
                        n3 = n2 / n1;
                        break;
                    case '*':
                        n3 = n2 * n1;
                        break;
                    case '%':
                        n3 = n2 % n1;
                        break;
                    case '$':
                        n3 = pow(n2, n1);
                        break;
                    default:
                        cout << "Invalid operator" << endl;
                        exit(1);
                }
                push(n3);
                s++; // Move to the next character after processing the operator
            }
        }
    }

    void show() {
        if (top == -1) {
            cout << "No result to show. The stack is empty." << endl;
        } else {
            int result = pop();
            cout << "Final Result: " << result << endl;
        }
    }
};

int main() {
    char expr[MAX];
    cout << "Enter postfix expression to be evaluated: ";
    cin.getline(expr, MAX);

    Postfix q;
    q.setExpr(expr);
    q.calculate();
    q.show();

    return 0;
}

// 4. Write a program to implement stack using linked list.
//C++ program for Stack implementation using linked list
//structure for NODE

#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE *next;
};

class STACK {
private:
    NODE *top, *temp, *curr;

public:
    STACK() {
        top = NULL;
    }

    // PUSH Function to insert value into the Stack
    void push(int d) {
        temp = new NODE; // allocate memory for the new node
        temp->data = d;
        if (temp == NULL) {
            cout << "Overflow" << endl;
        } else if (top == NULL) {
            top = temp;
            top->next = NULL;
        } else {
            temp->next = top;
            top = temp;
        }
    }

    // POP Function to delete value from the Stack
    int pop() {
        int d = -1; // Initialize d with a default value
        if (top == NULL) {
            cout << "Underflow" << endl;
        } else {
            d = top->data;
            temp = top;
            top = top->next;
            delete temp;
        }
        return d;
    }

    // Function to traverse/print the Stack
    void traversal() {
        if (top == NULL) {
            cout << "Underflow" << endl;
        } else {
            curr = top;
            while (curr != NULL) {
                cout << curr->data << endl;
                curr = curr->next;
            }
        }
    }
};

// MAIN FUNCTION
int main() {
    STACK s;
    int d, ch;
    char ans;

    cout << "Stack operations";
    do {
        cout << "\n1. Push\n2. Pop\n3. Print\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter value to be inserted: ";
                cin >> d;
                s.push(d);
                break;

            case 2:
                d = s.pop();
                if (d != -1) { // Check if a valid value was popped
                    cout << "Deleted value: " << d << endl;
                }
                break;

            case 3:
                cout << "Stack Values are: " << endl;
                s.traversal();
                break;

            default:
                cout << "Invalid choice" << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    return 0;
}