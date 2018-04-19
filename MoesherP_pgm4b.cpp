//----------------------------------------------------------------------------------------------------------------------------------
//														Program 4b:
// Paul Moesher											CS2010 Spring 2018									Class: MWF 10:30
// Project name: MoesherP_pgm4b																				Due: 2/28/18
// 
// Purpose:		To show the user the total points scored, number of games, the average points scored per game,
//				and game with the highest point total.
// Input:		The user will have to end the point total for each game and then -1 when they are done.
// Processing:	Get point total from user for each game, then add them up and divide by total amount of games
//				to get total points and average.
// Output:		Display total points scored, number of games, average of points scored per game, and highest game
//				point total.
#include <iostream>
using namespace std;

int main()
{
	// int declarations
	int sum = 0; 
	int count = 0; 
	int Points; 
	int gamenumber = 1;
	int Highest;

	// Double declarations 
	double average; 
	double bestgame;

	// Get points scored for games
	
		cout << "Enter the total points scored for first game (-1 to end) ";
		cin >> Points;


		Highest = Points;
		bestgame = count;

		
		while (Points != -1)

		{ 
			if (Points > Highest) {
				Highest = Points;
				bestgame = gamenumber;
			}

			gamenumber = gamenumber + 1;
			sum += Points; // Add current value up points
			count++;
			average = (double)sum / count;
			cout << "Enter the total points scored for next game (-1 to end) ";
			cin >> Points;
	
}

		cout << "" << endl; // This line is to provide space inbetween what the user enters and what is displayed


		//Display results

	cout << "Total points scored: " << sum << endl;

	cout << "Number of games: " << count << endl;

	cout << "Average points scored per game: " << average << endl;

	cout << "Highest points scored was: " << Highest << " in game number " << bestgame << endl;

	cout << endl;
	system("pause");
	return 0;
	

}