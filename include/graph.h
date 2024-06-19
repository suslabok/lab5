#include <vector>

class Graph{
	private:
		bool directed;
		vector<vector<int>> matrix;
	public:
		Graph();
		~Graph();
		bool isEmpty();
		bool AddVertices();
}
