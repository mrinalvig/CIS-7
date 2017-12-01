#pragma once
#include "Main.cpp"
#include <vector>

class functions
{
public:
	functions();
	~functions();

	void connectedDisplay(vector< vector<int> > &graphs, int nodes);
	void loopsDisplay(vector< vector<int> > &graphs, int nodes);
	void completeDisplay(bool notComplete);
	void verticesDisplay(vector< vector<int> > &graphs, int nodes);
	void highestDegreeDisplay(vector< vector<int> > &graphs, int nodes);
	void edge(vector< vector<int> > &graphs, int nodes);
	void vertex(vector < vector <int> > &graphs, int &nodes);
};

