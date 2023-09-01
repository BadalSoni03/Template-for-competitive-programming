class DSU {
	private int n; 
	private int comps;
	private int[] rank , parent;
	public DSU() {}
	public DSU(int n) {
		this.n = n;
		this.comps = n;
		this.rank = new int[this.n];
		this.parent = new int[this.n];
		Arrays.fill(rank , -1);
		for (int i = 0 ; i < this.n ; ++i) parent[i] = i;
	}
	public int find(int node) {
		return parent[node] == node ? node : parent[node] = find(parent[node]);
	}
	public int getComps() {
		return this.comps;
	}
	public void unite(int x , int y) {
		int px = find(x);
		int py = find(y);
		if (px == py) return;
		if (rank[px] > rank[py]) parent[py] = px;
		else if (rank[px] < rank[py]) parent[px] = py;
		else {
			rank[px]++;
			parent[py] = px;
		}
		this.comps--;
	}
}
