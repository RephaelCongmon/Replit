#include <iostream> // a library: cout, cin
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {

  //FOR LOOPS
  //3 parts to a for loop

  // int i = 0; 
  // i++;  // same thing as i = i + 1;

  //int i;

  // for (i = 15; i > 0; i--){
  //   cout << i << endl;
  //   cout << "I love you!" << endl;
  // }

  // WHILE LOOPS
  // string response;

  // cout << "Do you want to play? " << endl;
  // cin >> response;

  // while (response != "no"){
  //   cout << "Beep boop beep boop" << endl;

  //   cout << "Thanks for playing, do you want to play again? " << endl;
  //   cin >> response;



  srand(time(NULL));
  int randomNum = (rand() % 100) + 1;
  // ^ computer generated a random number from 1 - 100.

  // Make a guessing game where the player has to guess what the number is.
  // If the player guessed a lower number than randomNum, print "the number is higher!"
  // If the player guessed a higher number than randomNum, print "the number is lower!"
  // If the player guessed the correct number, print "You won!" and break out of the loop

  // If userInput > randomNum print the number is lower
  // if userInput < randomNum print the number is higher
  int x = -1;
  while (x != randomNum) {
   cout << "Input a number: " << endl; 
   
   cin >> x;
   
   if (x < randomNum) {
     cout << "the number is higher!" << endl;
   }
   
   else if (x > randomNum) {
     cout << "the number is lower!" << endl;

   }

   else {
    cout << "You won!" << endl;
    }
  }
}
