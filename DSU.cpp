// DSU with union by size and with path compression
class DSU {
	int n; 
	int comps;
	vector<int> parent , rank;
public:
	DSU() {}
	DSU(int n) {
		this->n = n;
		this.comps = n;
		parent.resize(this->n);
		rank.resize(this->n , -1);
		for (int i = 0 ; i < this->n ; ++i) parent[i] = i;
	}
	int find(int node) {
		return parent[node] == node ? node : parent[node] = find(parent[node]);
	}
	int getComps() {
		return this->comps;
	}
	void unite(int x , int y) {
		int px = find(x);
		int py = find(y);
		if (px == py) return;
		if (rank[px] > rank[py]) parent[py] = px;
		else if (rank[px] < rank[py]) parent[px] = py;
		else {
			rank[px]++;
			parent[py] = px;
		}
		this->comps--;
	}
};
