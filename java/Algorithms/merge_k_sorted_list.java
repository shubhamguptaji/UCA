import java.util.PriorityQueue;
import java.util.Collections;
import java.util.Arrays;

public class merge_k_sorted_list {
    private PriorityQueue<LinkedList> p;
    
    public mergeLists(LinkedList[] list) {

    }

    public static void main(String[] args) {
        int k = 3;
        LinkedList[] lists = new LinkedList[k];
        for(int i=0;i<k;i++)
            lists[i] = new LinkedList<>();
        lists[0].add(1);
        lists[0].add(10);
        lists[0].add(20);
        lists[1].add(4);
        lists[1].add(11);
        lists[1].add(13);
        lists[2].add(3);
        lists[2].add(8);
        lists[2].add(9);

    }
}