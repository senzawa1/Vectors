#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n;
	string name;
	int cup;
	double average;
	vector<string> players;
	vector<double> cups;
	vector<double> avg;
	vector<vector<double>> table;
	//10 rows, 7 columns

	for (int r = 0; r < 10; r++) 
	{
		for (int c = 0; c < 7; c++)
		{
			cin.ignore();
			if(c == 0){
				cout << "Enter player # " << (r + 1) << ":";
				getline(cin, name);
				players.push_back(name);
			}
			else if(c > 0 && c != 6)
			{
				cout << "Enter cup # " << c << ":";
				cin >> cup;
				cups.push_back(cup);
			}
			table.push_back(cups);
			cups.clear();
		}
	}

	for (int r = 0; r < table.size(); r++)
	{
		cout << players[r][0] << "\t\t";
		for (int c = 0; c < table[r].size(); c++)
		{
			cout << table[r][c] << "\t";
		}
	}
}
