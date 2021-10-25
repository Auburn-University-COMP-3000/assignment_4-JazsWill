#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Assignment 4 - Exercsie 3
class Player
{
	private:
		string name;
		int score;

	public:
		Player()
		{
			name = "";
			score = 0;
		}

		Player(int newScore, string newName)
		{
			name = newName;
			score = newScore;
		}

		void setName(string newName)
		{
			name = newName;
		}

		void setScore(int newScore)
		{
			score = newScore;
		}

		string getName()
		{
			return name;
		}

		int getScore()
		{
			return score;
		}
}

int main()
{
	// Assignment 4 - Exercise 3

	int menu = 0, playerScore;
	string playerName;
	char response;
	vector <Player> GamePlay;
	const int max = 10;

	while ((menu >= 1) || (menu <= 5))
	{
		cout << "\nWelcome Player!!\n";
		cout << "Menu:\n";
		cout << "{1} Print Player List\n";
		cout << "{2} Add New Player\n";
		cout << "{3} Remove Player\n";
		cout << "{4} See Player Score\n";
		cout << "{5} Exit\n";
		cout << "Please enter a menu selection: ";
		cin >> menu;

		switch (menu)
		{
			case 1:
			{
				cout << "\nPlayer List\n";
				
				if (GamePlay.size() == 0)
				{
					cout << "The Player List is empty.\n\n";
					break;
				}
				else
				{
					cout << left << setw(10) << "Name" << setw(10) << "Score" << endl;
					for (int i = 0; i < GamePlay.size(); i++)
					{
						cout << left << setw(10) << GamePlay[i].getName() << setw(10) << GamePlay[i].getScore() << "\n\n";
					}
					break;
				}
			}
			case 2:
			{
				cout << "\nNew Player Tab\n";
				if (GamePlay.size() >= max)
				{
					cout << "Player List is full. Would you like to remove a player? ";
					cin >> response;
					while ((response == 'Y') || (response == 'y'))
					{
						break;
					}
				}
				else
				{
					cout << "Enter the new player's name: ";
					cin >> playerName;
					cout << "Enter the new player's score: ";
					cin >> playerScore;
					Player newPlayer(playerScore, playerName);
					newPlayer.setName(playerName);
					newPlayer.setScore(playerScore);
					GamePlay.push_back(newPlayer);
					break;
				}
			}
			case 3:
			{
				string removedPlayer;
				int identifier;
				
				cout << "\nRemove Player Tab\n";
				cout << "What player would you like to remove?: ";
				cin >> removedPlayer;

				if (GamePlay.size() == 0)
				{
					cout << "The Player List is empty.\n";
					break;
				}

				for (int i = 0; i < GamePlay.size(); i++)
				{
					if (removedPlayer == GamePlay[i].getName())
					{
						identifier = i;
						GamePlay.erase(GamePlay.begin() + identifier);
						cout << "Player: " << removedPlayer << " has been removed from Player List.\n";
						break;
					}
					
					cout << "The player enetered cannot be found in the Player List.\n";
					break;
				}
				break;
			}
			case 4:
			{
				string nameAndScore;
				
				cout << "\nSee Player Score Tab\n";
				cout << "Enter the name of the player to see their score: ";
				cin >> nameAndScore;

				for (int i = 0; i < GamePlay.size(); i++)
				{
					if (nameAndScore == GamePlay[i].getName())
					{
						cout << "Name: " << nameAndScore << "\tScore: " << GamePlay[i].getScore() << endl;
						break;
					}
				}

				cout << "The player: " << nameAndScore << " was not found in the Player List.\n";
				break;
			}
			case 5:
			{
				break;
			}
		}
	}

	cout << "Invalid Menu Selection.";

	return 0;
}


