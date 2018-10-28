import java.util.Map;
import java.util.HashMap;

public class logReader {

    public static void main(String[] args) throws InterruptedException{
        Map<String, Integer> m = new HashMap<>();
        for(int i = 0 ; i < 10 ; i++) {
           Thread t = new Thread(new UpdateData(m));
           t.start();
        }
        // t.join();
        // Thread.currentThread().sleep(3000);
        System.out.println(m.get("a"));
    }
}