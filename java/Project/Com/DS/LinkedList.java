package Com.DS;

public class LinkedList {
    static class Node {
        int data;
        Node next;
        Node(int d) {
            data = d;
            next = null;
        }
    }
    Node head = null;

    public void insertAtLast(int d) {
        if(head==null)
        {
            head = new Node(d);
            return;
        }
        Node current = head;
        while(current.next != null)
            current = current.next;
        Node nn = new Node(d);
        nn.next = null;
        current.next = nn;
        return;
    }

    public void insertAtBeg(int d) {
        if(head==null)
        {
            head = new Node(d);
            return; 
        } 
        Node nn = new Node(d);
        nn.next = head;
        head = nn;
        return;
    }

    public void delete(int d) {
        if(head==null)
        {
            System.out.println("Linked List Is empty!");
            return;
        }
        Node temp = head;
        if(temp.data==d)
        {
            head = temp.next;
            return;
        }
        while(temp.next!= null && temp.next.data != d)
            temp = temp.next;
        if(temp.next.data == d && temp.next.next!=null)
        {
            temp.next = temp.next.next;
        }
    }

    public void printLinkedList() {
        Node temp = head;
        while(temp!=null)
        {
            System.out.print(temp.data + " ");
            if(temp.next==null)
                break;
            temp =temp.next;
        }
    }

    public static void main(String[] args) {
        LinkedList ll = new LinkedList();
        ll.delete(2);
        ll.insertAtBeg(1);
        ll.insertAtBeg(2);
        ll.insertAtLast(3);
        ll.insertAtLast(4);
        ll.insertAtLast(5);
        ll.insertAtLast(6);
        ll.insertAtLast(7);
        ll.printLinkedList();
    }
}