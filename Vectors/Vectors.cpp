#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n;
	vector<int> temp;
	vector<vector<int>> num;
	//No fixed size when it comes to a vector within a vector
	//temp acts as a temporary vector to fill the num vector
	//NEED TO CONTROL THE SIZE OF THE VECTOR

	for (int r =0; r < 3; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			cout << "Enter row # " << (r + 1) << "Column # " << (c + 1) << " ==>";
			cin >> n;
			temp.push_back(n);
		}
		num.push_back(temp);
		temp.clear();
		//erases all the current values from temp
	}

	cout << "\n==================================\n\n";

	for (int r = 0; r < num.size(); r++)
	{
		for (int c = 0; c < num[r].size(); c++)
		//size of the vector for row r
		{
			cout << num[r][c] << "\t";
		}
		cout << endl;
	}
}
