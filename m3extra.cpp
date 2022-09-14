//Shun Lae Thawtar Khaing
//Computer guess your number (random midpoint)
//Module 3 Number guesser CS110b
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//random midpoint
int getRandomMidpoint(int low, int high) {
    srand(time(NULL));
    int range = high - low + 1;
    return rand() % range + low;
}

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

//not used
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
        mid = getRandomMidpoint(low, high);
        userResponse = getUserResponseToGuess(mid);
        if(userResponse == 'l') {
            high = mid - 1;
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
    } while (shouldPlayAgain());
    cout << "Goodbye" << endl;
    return 0;
}

/*
[skhaing3@hills ~]$ ./a.out
Think of a number between 1 and 100.
is it 59? (h/l/c): l
is it 54? (h/l/c): l
is it 41? (h/l/c): l
is it 24? (h/l/c): h
is it 29? (h/l/c): h
is it 33? (h/l/c): l
is it 32? (h/l/c): c
Great! Do you want to play again? (y/n): y
Think of a number between 1 and 100.
is it 1? (h/l/c): h
is it 2? (h/l/c): h
is it 25? (h/l/c): l
is it 7? (h/l/c): h
is it 21? (h/l/c): l
is it 8? (h/l/c): h
is it 17? (h/l/c): l
is it 12? (h/l/c): h
is it 14? (h/l/c): c
Great! Do you want to play again? (y/n): n
Goodbye
*/