/* Source Code Logic for Coin Flip Application, developed by Rodrigo Martinez using the Unreal Engine*/

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


/* 
Create Random Boolean Generator that changes the integer
by every exectution and then returns the value
*/
bool randombool() {

	srand((unsigned)time(0));
	int randomNumber = rand();

	if (randomNumber % 2 == 0)
		return true;
	else return false;
}

/* 
Aquires the value associated with randombool() function and decides to print out
the according print statement associated with the boolean value 
*/

void FlipCoin() {

	bool getresult = randombool();

	if (getresult == 0)
		cout << "Tails";
	else cout << "Heads";

}


/*
Driver Code
*/
int main() {

	FlipCoin();

}
