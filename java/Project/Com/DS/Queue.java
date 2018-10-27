package Com.DS;
import Com.DS.LinkedList;

public class Queue extends LinkedList {
    Queue() {
        LinkedList head = new LinkedList();
    }

    public boolean isEmpty() {
        if(head==null)
            return true;
        return false;
    }

    public void enqueue(int d) {
        insertAtLast(d);
    }

    public void dequeue() {
        if(head == null)
        {
            System.out.println("Queue is already Empty!");
            return;
        }
        Node temp = head;
        head = temp.next;
    }

    public void printQueue() {
        Node temp = head;
        while(temp!=null)
        {
            System.out.print(temp.data + " ");
            if(temp.next==null)
                break;
            temp = temp.next;
        }
    }

    public static void main(String[] args) {
        Queue q = new Queue();
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);
        q.enqueue(5);
        q.enqueue(6);
        q.enqueue(7);
        q.enqueue(8);
        q.dequeue();
        q.printQueue();
    }
}