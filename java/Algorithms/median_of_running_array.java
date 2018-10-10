import java.util.PriorityQueue;
import java.util.Scanner;
import java.util.Collections;

public class median_of_running_array {
    PriorityQueue<Integer> p1;
    PriorityQueue<Integer> p2;

    public median_of_running_array() {
        this.p1 = new PriorityQueue<>();
        this.p2 = new PriorityQueue<>(Collections.reverseOrder());

    }
    public Integer median(Integer e) {
        p1.add(e);
        if(p1.size() - p2.size() > 1) {
            Integer temp = p1.poll();
            p2.add(temp);
        }
        Integer median;
        if(p1.size()>p2.size())
            median = p1.peek();
        else if(p1.size()<p2.size())
            median = p2.peek();
        else
            median = (p1.peek() + p2.peek())/2;
        return median;

    }
    public static void main(String[] args) {
        median_of_running_array p = new median_of_running_array();
        Scanner sc = new Scanner(System.in);
        int a;
        for(int i=0;i<10;i++) {
            a = sc.nextInt();
            System.out.println(p.median(a));
        }
    }
}