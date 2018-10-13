import java.util.Map;
import java.util.HashMap;

class UpdateData implements Runnable {
    Map<String, Integer> m;

    public UpdateData() {
        this.m = new HashMap<>();
    }
    public UpdateData(Map<String, Integer> m) {
        this.m = m;
    }
    @Override
    public void run() {
        // synchronized (m) {
            if(m.get("a") == null) {
                m.put("a", 1);
            }
            else {
                int t = m.get("a");
                m.put("a", t+1);
            }
        // }
    }
}

