public class UnionFind
{
	private int[] id;
	private int N;
	private int[] size;
	public UnionFind(int N) 
	{
		this.N  = N;
		this.id = new int[N];
		this.size = new int[N];
		for(int i=0;i<N;i++) {
			this.id[i]=i;
			this.size[i]=1;
		}
	}

	private int find(int p) 
	{
		while(p!=id[p])
		{
			p = id[p];
		}
		return p;
	}

	public boolean connected(int p, int q) 
	{
		return find(p)== find(q);
	}

	public void union(int p, int q) 
	{
		int pid = find(p);
		int qid = find(q);

		if(pid == qid) return;
		if(size[pid]<size[qid]) {
			id[pid]=id[qid];
			size[qid]+=size[pid];
		}
		else
		{
			id[qid] = id[pid];
			size[pid] += size[qid];
		}
	}
	public void print() {
		for(int i=0;i<N;i++) {
			System.out.println(this.id[i]);
		}
	}

	public static void main(String[] args) {
		UnionFind u = new UnionFind(10);
		u.union(1,2);
		u.union(3,4);
		u.union(4,8);
		u.print();
	}
}
