public class QuickUnion {
    private int[] id;
    QuickUnion(int n ){
        id = new int[n];
        for(int i=0;i<n;i++) {
            id[i]= i;
        }
    }
    private int root(int i) {
        while(i!=id[i]) {
            i=id[i];
        }
        return i;
    }
    public boolean connected(int p, int q) {
        return root(p)==root(q);
    }
    public void union(int p, int q) {
        int i=root(p);
        int j=root(q);
        id[i]=j;
    }
    public static void main(String[] args) {
        QuickUnion q = new QuickUnion(10);
        q.union(1,2);
        q.union(2,9);
        System.out.print(q.connected(1,8));
    }
}