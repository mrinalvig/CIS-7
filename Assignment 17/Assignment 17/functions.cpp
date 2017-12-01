#include "functions.h"

functions::functions()
{
}

functions::~functions()
{
}

void functions::vertex(vector <vector<int> > &graphs, int &nodes)
{
	nodes += 1;

	graphs.resize(nodes);
	for (int i = 0; i < nodes; i++)
	{
		graphs[i].resize(nodes);
	}

	cout << "The graph now contains " << (nodes) << " vertices." << endl;
}

void functions::edge(vector < vector<int> > &graphs, int nodes)
{
	bool loop = true;

	while (loop == true)
	{
		cout << "Between which 2 vertices do you want to add an edge to?" << endl;

		int x = 0;
		cout << "Vertex 1: ";
		cin >> x;

		int y = 0;
		cout << "Vertex 2: ";
		cin >> y;

		if (x > nodes || y > nodes)
		{
			cout << "Invaldi!! Vertex is out of bounds" << endl;
		}
		else
		{
			loop = false;
		}

		graphs[x][y] = 1;
		graphs[y][x] = 1;

	}
}

void functions::highestDegreeDisplay(vector< vector<int> > &graphs, int nodes)
{
	int highNum = 0;
	int highVertex = 0;

	for (int i = 0; i < nodes; i++)
	{
		int sum = 0;

		for (int j = 0; j < nodes; j++)
		{
			if (graphs[i][j] == 1)
			{
				sum++;
			}

			if (i == j && graphs[i][j] == 1)
			{
				sum++;
			}
		}

		if (sum > highNum)
		{
			highNum = sum;
			highVertex = i;
		}
	}

	if (highNum == 0)
	{
		cout << "There is no vertex with the highest degree" << endl;
	}
	else
	{
		cout << "The vertex with the highest degree is:";
		cout << highVertex << " with (" << highNum << ") connections" << endl;
	}
}

void functions::verticesDisplay(vector< vector<int> > &graphs, int nodes)
{
	vector<int> list;

	bool  isolate = true;
	for (int i = 0; i < nodes; i++)
	{
		int sum = 0;
		for (int j = 0; j < nodes; j++)
		{
			if (i == j && graphs[i][j] == 1)
			{

			}
			else if (graphs[i][j] == 1)
			{
				sum++;
			}
		}

		if (sum == 0)
		{
			isolate = true;
			list.push_back(i);
		}
	}

	cout << "Isolated vertices: ";
	if (isolate == true)
	{
		for (vector<int>::iterator thing = list.begin(); thing != list.end(); ++thing)
		{
			cout << *thing << ", " << endl;
		}

		completeDisplay(isolate);
	}
	else
	{
		cout << "none" << endl;

		completeDisplay(isolate);
	}
}

void functions::loopsDisplay(vector <vector<int> > &graphs, int nodes)
{
	int num = 0;

	for (int i = 0; i < nodes; i++)
	{
		for (int j = 0; j < nodes; j++)
		{
			if (graphs[i][j] == 1 && i == j)
			{
				num++;
			}
		}
	}

	if (num == 0)
	{
		cout << "Number of Loops: None" << endl;
	}
	else
	{
		cout << "Number of Loops: " << num << endl;
	}
}

void functions::connectedDisplay(vector< vector<int> > &graphs, int nodes)
{
	bool tie = true;

	for (int i = 0; i < nodes; i++)
	{
		for (int j = 0; j < nodes; j++)
		{
			if (i == j)
			{

			}
			else if (graphs[i][j] != 1)
			{
				tie = false;
			}
		}
	}

	if (tie == true)
	{
		cout << "Connected: Yes" << endl;
	}
	else
	{
		cout << "Connected: No" << endl;
	}
}

void functions::completeDisplay(bool incomplete)
{
	if (incomplete == true)
	{
		cout << "Complete: No" << endl;
	}
	else
	{
		cout << "Complete: Yes" << endl;
	}
}