#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int coin; // here will be flipped coin
	int guess; // here will be guess of player
	int rounds = 0; // count of game rounds
	int score = 0;

	// greating player
	cout << "Yo man! Wanna play some game?" << endl;
	cout << "What about Heads and Tails?" << endl;
	cout << "I know U like it" << endl << endl;

	cout << "Rules is following" << endl;
	cout << "If your guess is Head enter 1" << endl;
	cout << "If your guess is Tail enter 2" << endl;
	cout << "If you want to finish game enter 0" << endl << endl;
	cout << "So, let's play!!!" << endl << endl;

	while (true)
	{
		// two lines bellow to flip a coin
		srand(time(NULL));
		coin = rand() % 2 + 1;

		cout << "Coin is flipped" << endl;
		cout << "Your guess: ";

		cin >> guess;

		if (guess == 0) break;

		rounds++;

		if (coin == guess)
		{
			score++;
			cout << "U won" << endl;
		}
		else
		{
			cout << "Uuu, you are such are looser" << endl;
		}

		cout << endl;
	}

	cout << "Total rounds: " << rounds << endl;
	cout << "Your score:   " << score << endl;
	cout << "Win rate:     " << (float)score / rounds * 100 << "%" << endl;

	return 0;
}
