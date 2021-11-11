int primsMST(vector<int> graph[] , int v) {

	int ans = 0;
	vector<int> dist(v , INT_MAX);
	dist[0] = 0;
	vector<bool> included(v , false);

	for (int count = 0; count < v; count++) {
		int u = -1;

		for (int i = 0; i < v; i++) {
			if (!included[i] && (u == -1 || dist[i] < dist[u]))
				u = i;
		}

		included[u] = true;
		ans += dist[u];

		for (int i = 0; i < v; i++) {
			if (graph[u][i] != 0 && !included[i])
				dist[i] = min(dist[i] , graph[u][i]);
		}
	}

	return ans;
}

/*
dist = {0 , 28 , MAX , MAX , 25 , 10 , MAX }
include = {0, 5}
ans = 10
*/