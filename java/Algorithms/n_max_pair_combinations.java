import java.util.PriorityQueue;
import java.util.Collections;
import java.util.Arrays;


public class n_max_pair_combinations {
    PriorityQueue<Integer> p;
    public n_max_pair_combinations() {
        this.p = new PriorityQueue<>();
    }

    public int[] solution(int[] a, int[] b, int n) {
        Arrays.sort(a);
        Arrays.sort(b);
        for(int i=a.length-1;i>=0; i--) {
            for(int j=b.length-1;j>=0;j--) {
                int sum = a[i] + b[j];
                if(p.size() == n) {
                    if(sum>p.peek())
                    {
                        p.remove();
                        p.add(sum);
                    }
                    else {
                        break;
                    }
                }
                else 
                    p.add(sum);
            }
        }
        int[] res = new int[n];
        for(int i=n-1;i>=0;i--)
            res[i] = p.remove();
        return res;
    }

    public static void main(String[] args)  {
        n_max_pair_combinations res = new n_max_pair_combinations();
        int[] a = {1,4,2,3};
        int[] b = {2,5,1,6};
        int[] x = res.solution(a, b, 4);
        for(int i=0;i<x.length;i++)
            System.out.println(x[i]);


    }
}