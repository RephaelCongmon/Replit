#include <iostream> // a library: cout, cin
using namespace std;

//1.  Declare two constant variables: maleRatio and femaleRatio.
// set maleRatio to 0.68 and set femaleRatio to 0.55

//Calculate BAC for men and women.  The equation for men is:
/*

      # of Drinks * 14
  ______________________________ * 100  - (Time * 0.015)

  weight * 454 * maleRatio 
*/

// The equation for females is the same except replace maleRatio with femaleRatio

//After calculating the BAC for men and women, output both.


int main() {

  double weight;
  double Time;
  double drinkConsumed;
  double maleConstant = 0.68; 
  double femaleConstant = 0.55; 
  string gender; 
  double BAC;

  cout <<" Gender: "; 
  cin >> gender; 
  cout << "Amount of drink consumed: "; 
  cin >> drinkConsumed;
  cout << "Weight: "; 
  cin >> weight;
  cout << "Timespan: ";
  cin >> Time;

  double numerator = drinkConsumed*14;
  double denominator = weight*454*maleConstant;
  double fraction = (numerator/denominator)*100 -(Time*0.015);
 


  cout << "Your Blood Alcohol Content is " << fraction;


// 5*(6 - 3)


  // Now write a simple calculator that adds two numbers and store it in a third variable.  

  // So first, prompt the user to enter two numbers and store them into two separate variables.  Then add the numbers and print out the result.


  // double x;
  // double y;
  // cout << "Enter a number: ";
  // cin >> x;
  // cout << "Enter another number: ";
  // cin >> y;
  // double result = x-y; 
  // cout << result; 








}