public class BinaryTree {
    public class Node {
        int data;
        Node left, right;

        public Node(int d) {
            data = d;
            left = right =null;
        }
    }
    Node root;
    public BinaryTree() {
        root = null;
    }
    public void insert(int d) {
        root = insertNode(root, d);
    }

    public Node insertNode(Node root, int d) {
        if(root == null)
            return new Node(d);
        else if(d<root.data)
            root.left = insertNode(root.left, d);
        else if(root.data<d)
            root.right = insertNode(root.right, d);
        return root;
    }
}