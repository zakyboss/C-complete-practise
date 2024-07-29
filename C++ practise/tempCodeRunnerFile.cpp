#include <iostream>

using namespace std;

int main(){
// 1. Write a program to take two numbers asinput and print their sum and
// average.
// int num1 ;
// cout << "Please enter num1 " ;
// cin>>num1 ;

// int num2 ;

// cout << "Please enter num2 " ;
// cin>>num2 ;

// int sum = num1 + num2 ;
//  cout << "The sum of num1 and num2 is " << sum << endl ;



// 2.Write a program to swap two numbers without using a thirdVariable.
// int num1 ,num2;
// cout<<"Enter two numbers"<<endl;
// cin>>num1>>num2;
// num2 = num1+num2;
// num1 = num2 - num1;
// num2 = num2 - num1;
// cout<<"values after swaping :\n";
// cout<<"Value of a Num1 "<<num1<<endl;
// cout<<"Value of a Num2"<<num2<<endl;


// Control Structures: Using if and switch constructs Programs:
// 3. Write a program to check whether the number provided is even or odd.

// int num;
// cout<<"Enter a number: ";
// cin>>num;
// if(num%2==0)
// {
// cout<<"Number is even ";
// }
// else
// {
// cout<<"Number is odd ";
// }

// 4.Writeaprogramtoprintthe largestnumberamongthreenumbersgiven
// by the user.


    // int a;
    // int b;
    // int c;

    // cout << "Please enter the numbers: ";
    // cin >> a >> b >> c;

    // if (a <= 0 || b <= 0 || c <= 0) {
    //     cout << "Please enter positive numbers" << endl;
    // } else if (a >= b && a >= c) {
    //     cout << "a is the largest number" << endl;
    // } else if (b >= a && b >= c) {
    //     cout << "b is the largest number" << endl;
    // } else {
    //     cout << "c is the largest number" << endl;
    // }




// 5.Write a singleprogram thatprovidesthe sum, difference, multiplication
// // and division of two numbers.
// int a , b ;

// cout<<"Enter two numbers"<<endl;
// cin>>a>>b;
// //  sum 

// int sum = a + b ;
// cout << "The sum of a and b is " << sum << endl ;

// //  difference

// int difference = a - b ;
// cout << "The difference of a and b is " << difference << endl ;

// //  multiplication

// int multiplication = a * b ;

// cout << "The multiplication of a and b is " << multiplication << endl ;

// //  division

// int division = a / b ;

// cout << "The division of a and b is " << division << endl ;


// 8. Write a program to check the number isArmstrong or not.
// Anumber is known as Armstrong number ifsum of the cubes of its digitsis
// equal to the numberitself.

// int num, sum = 0, rem,temp;
// cout<<"Enter a number: ";
// cin>>num;
// temp =num;
// while (num>0)
// {
// rem= num%10;
// sum= sum+(rem*rem*rem);
// num= num/10;
// }
// if (temp==sum)
// cout<<"The number is  in armstrong "<<endl;
// else
// cout<<" The Number is not armstrong ."<<endl;



// 9. Write a C++ program to printtable of a number using do while loop.
// //C++ program to print table of any number using do while
// loop
// int num, i;
// cout << "Enter any number: ";
// cin >> num;
// cout<<"\n Table of" <<num<<endl;
// i=1;
// do{
// cout<<num*i<<endl;
// i++;
// }while (i<=10);

// 10 Write a program that takes valuesin an array and also display them.
// int arr[5],i;
// cout << "Enter 5 numbers:\n ";
// for (i=0;i<5;i++){
// cin >> arr[i];
// cout<<"\n Array values are "<<endl;
// for (i=0;i<5;i++){
// cout<<arr[i]<<endl;
// }
// }

// 11. Write a program thattake a string asinput and print it.
// char  a[34] ;
// cout<<"Enter a "<<endl;
// cin >> a;

// cout << a << endl ;


// 12. Write a program to printlength of a string provided.

// int i,count=0;
// char str[50];
// cout<<"Enter any string ";
// cin.getline (str, 50); //getline function allows
// // user to input string with space
// //loop will run till it reaches to string terminator
// // '\0'
// for (i = 0; str[i] != '\0'; i++)
// {
// count ++;
// }
// cout << "\n Length of string is " << count;

// 13. Write a program to check whether a string is palindrome or not.
int i,len=0;
char str[50],rev_str[50];
cout<<"Enter any string ";
cin.getline(str, 50); //getline function allows user
// to input string with space
//count length of string
for (i = 0; str[i] != '\0'; i++)
{
len++;
}
//copy str to rev_str
int j=0;
for (i = len - 1; i >= 0 ; i—,j++)
{
rev_str[j] = str[i];
}
rev_str[j] ='\0' ; //reverse string is terminated
//compare both strings
int flag=0;
for (i = 0; i < len ; i++)
{
if (str[i]==rev_str[i]){
flag = 1;
}
else
{
break; //exit from loop
}


return 0 ;
}