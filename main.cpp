#include <iostream> // a library: cout, cin
using namespace std;

int main() {

  // Data types for variables:
  // char, string, int, double
  // '5',  "words", 1,  1.2
  
  // cout is short for console output | endl is just endline
  //cout << "Hello world" << " cat" << endl;
  
  // cin is short for console input
  //string x;
  //cin >> x;
  //cout << x << endl;
  //cin >> x;
  

  // create a variable that holds your name and then print it
  // Prompt the user to input their name, and then input it, and then print it

  cout << "What's your name? ";
  string name; 
  cin >> name; 
  cout << "My name is " << name << "." << endl; 


  // Now write a simple calculator that adds two numbers and store it in a third variable.  

  // So first, prompt the user to enter two numbers and store them into two separate variables.  Then add the numbers and print out the result.


  double x;
  double y;
  cout << "Enter a number: ";
  cin >> x;
  cout << "Enter another number: ";
  cin >> y;
  double result = x-y; 
  cout << result; 









  // 0001 1001 <---  8 bits = 1 byte.  A single 0 or 1 is called a bit.

  // 0001 1110

  //http://www.asciitable.com/
  
  // 0100 0001 = "A"

  //int x = 5;
  
  //cout << x

  /*
    sdfsdf
    sdfsd
    sdfsdf
  */
  
          //    0  1  2  3  4
  int arr[5] = {4, 1, 3, 5, 10};

  // Arrays are 0-index based, meaning 0 is the first element
  
  //cout << arr[0] << endl;

          //          0      1      2      3         4        5
  string arr2[5] = {"Bob", "Cat", "Dog", "House", "Floor"};

 // cout << arr2[5] << endl;

  //cout << "Hello World!\n";
  //test
  //something

  // string x = "Bob";
  // string y = "Cat";
  // string temp;

  // temp = x;
  // x = y; 
  // y = temp; 

  // cout << "x = " << x << endl;
  // cout << "y = " << y << endl;
  
  //Conditionals:
  // == : "Is it equal to?"
  // != : "Is it not equal to?"
  // <= : "Is it less than or equal to?"
  // >= : "Is it greather than or equal to?"
  // || : OR
  // && : AND

  //if (x == 5){

  //}
  //if (condition){
    //Code if true goes in here
  //}

  // int x = 10;
  // int y = 10;
  // int z = 13;

  // // Write a condition that checks if x is less than y

  // if (x == y || y > z){
  //   cout << "Yo!" << endl;
  // }
  // else {
  //   cout << "Hey!" << endl;
  // }

}