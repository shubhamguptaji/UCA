public class UnionFindWithn2
{
	private int[] a;
	public int N;

	public UnionFindWithn2(int N) {
		this.N = N;
		this.a = new int[N];
		for(int i=0;i<N;i++)
		{
			this.a[i] = i;
		}
	}
	public boolean connected(int p, int q) {
		return this.a[p]==this.a[q];
	}

	public void union(int p, int q) {
		for(int i=0;i<N;i++){
			if(a[i]==a[p])
			{
				a[q]=a[p];
			}
		}
	}
	public void print(){
		for(int i=0;i<N;i++) {
			System.out.println(a[i]);
		}
	}

	public static void main(String[] args) {
		UnionFindWithn2 u = new UnionFindWithn2(10);
		u.union(1,2);
		u.union(2,3);
		u.print();
	}
}

