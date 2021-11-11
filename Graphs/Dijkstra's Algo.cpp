/*
https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1
*/

vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
	// Code here
	vector<int> dist(V , INT_MAX);
	dist[S] = 0;

	vector<bool> finalised(V , false);

	for (int i = 0; i < V - 1; i++) {

		//1. find minimum weight vertex which is not already finalised
		int u = -1;
		for (int i = 0; i < V; i++) {
			if (!finalised[i] && u == -1 || dist[u] > dist[i])
				u = i;
		}

		//2. make vertex with smallest distance as finalised
		finalised[u] = true;

		//3. Update the distance of all adjacents
		for (auto vec : adj[u]) {
			int v = vec[0];
			int weight = vec[1];

			if (!finalised[v]) {
				dist[v] = min(dist[v] , dist[u] + weight);
			}
		}

	}
	return dist;
}