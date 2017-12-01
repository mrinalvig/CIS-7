#include <iostream>
#include <iomanip>
#include <vector>
#include "functions.h"

using namespace std;

int main()
{
	functions functions;
	vector < vector<int> > graphs(0, vector<int>(0));
	int nodes = 0;

	cout << "Vertex with highest degree: none" << endl;
	cout << "Isolated vertices: none" << endl;
	cout << "Number of loops: none" << endl;
	cout << "Connected: Not Available " << endl;
	cout << "Complete: Not Available" << endl;

	bool loop = true;
	while (loop == true)
	{
		cout << "\nWhat would you like to do?" << endl;
		cout << "\n1) Add Vertex" << endl;
		cout << "2) Add Edge" << endl;
		cout << "3) View current graph info" << endl;
		cout << "4) Exit" << endl;
		int choice;
		cin >> choice;

		if (choice == 1)
		{
			functions.vertex(graphs, nodes);
			//loop = false;
		}
		else if (choice == 2)
		{
			functions.edge(graphs, nodes);
			//loop = false;
		}
		else if (choice == 3)
		{
			functions.highestDegreeDisplay(graphs, nodes);
			functions.verticesDisplay(graphs, nodes);
			functions.loopsDisplay(graphs, nodes);
			functions.connectedDisplay(graphs, nodes);
		}
		else if (choice == 4)
		{
			cout << "Exiting\n" << endl;
			//loop = false;
		}
		else
		{
			cout << "Invalid Input. Please try again." << endl;
			cin >> choice;
			loop = false;
		}
	}

	cout << "Graph: " << endl;
	for (int i = 0; i < nodes; i++)
	{
		for (int j = 0; j < nodes; j++)
		{
			cout << graphs[i][j] << "\n" << endl;
		}
	}

	return 0;
}


