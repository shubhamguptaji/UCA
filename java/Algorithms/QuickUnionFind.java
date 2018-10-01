public class QuickUnionFind {
    private int[] id;

    public QuickUnionFind(int n) {
        id = new int[n];
        for(int i=0;i<n;i++) {
            id[i]=i;
        }
    }
    public boolean connected(int p, int q) {
        return id[p]==id[q];
    }
    public void union(int p, int q) {
        int pid = id[p];
        int qid = id[q];
        for(int i=0;i<id.length;i++){ 
            if(id[i]==pid) {
                id[i]=qid;
            }
        }
    }

    public static void main(String[] args) {
        QuickUnionFind q =  new QuickUnionFind(10);
        q.union(1,2);
        q.union(5,6);
        for(int i=0;i<10;i++) {
            System.out.print(q.id[i] + " ");
        }

    }
}