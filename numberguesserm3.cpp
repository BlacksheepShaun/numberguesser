//Shun Lae Thawtar Khaing
//Computer guess your number (normal midpoint)
//Module 3 Number guesser CS110b
#include <iostream>
using namespace std;

//high, low or correct
char getUserResponseToGuess(int guess) {
    char ans;
    cout << "is it " << guess << "? (h/l/c): ";
    cin >> ans;
    return ans;
}

//play again
bool shouldPlayAgain() {
    char c;
    cout << "Great! Do you want to play again? (y/n): ";
    cin >> c;
    if(c == 'y') {
        return true;
    }
    return false;
}

//calculate midpoint
int getMidpoint(int low, int high) {
    return (low + high) / 2;
}

void playOneGame() {
    bool playAgain = true;
    int low = 1; 
    int high = 100;
    int mid;
    char userResponse;
    cout << "Think of a number between 1 and 100." << endl;
    do {
        mid = getMidpoint(low, high);   //store midpoint value from function
        userResponse = getUserResponseToGuess(mid);     //display mid and store the return value
        if(userResponse == 'l') {
            high = mid - 1;             //update high
        }
        else if (userResponse == 'h') {
            low = mid + 1;
        }
    } while(userResponse != 'c');
    
}

int main() {
   do
    {
    playOneGame();
    } while (shouldPlayAgain());    //play again if should play again is true
    cout << "Goodbye" << endl;
    return 0;
}


/*SAMPLE OUTPUT
[skhaing3@hills ~]$ ./a.out
Think of a number between 1 and 100.
is it 50? (h/l/c): h
is it 75? (h/l/c): l
is it 62? (h/l/c): l
is it 56? (h/l/c): l
is it 53? (h/l/c): l
is it 51? (h/l/c): h
is it 52? (h/l/c): c
Great! Do you want to play again? (y/n): y
Think of a number between 1 and 100.
is it 50? (h/l/c): l
is it 25? (h/l/c): l
is it 12? (h/l/c): l
is it 6? (h/l/c): l
is it 3? (h/l/c): c
Great! Do you want to play again? (y/n): n
Goodbye
*/
