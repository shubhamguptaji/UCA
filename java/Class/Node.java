public class Node {
    Student obj;
    Node left, right;
    Node()
    {
        this.obj = null;
        left = null;
        right = null;
    }
    Node(Student o) {
        obj = o;
        left = null;
        right = null;
    }
}