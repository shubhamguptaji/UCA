// import java.lang.boolean;

public class BinarySearchTree{
    class Node { 
        int data; 
        Node left, right; 
  
        public Node(int item) { 
            data = item; 
            left = right = null; 
        } 
    }
    Node root;
    public BinarySearchTree() {
        root = null;
    }

    public void insert(int d)   {
        root = insertNode(root, d);
    }

    public Node insertNode(Node root,int data) {
        if(root==null)
            return new Node(data);
        if(data<root.data)
            root.left = insertNode(root.left, data);
        else
            root.right = insertNode(root.right, data);
        return root;
    }


    public boolean searchNode(Node root, int d) {
        if(root==null)
            return false;
        if(d==root.data)
            return true;
        else if(d<root.data)
            return searchNode(root.left, d);
        else 
            return searchNode(root.right, d);
    }
    
    public void delete(int d) {
        root = deleteNode(root, d);
    }

    public int findmin(Node root) {
        while(root.left!=null)
            root = root.left;
        return root.data;
    }

    public Node deleteNode(Node root, int d) {
        if(root==null)
            return root;
        if(d<root.data)
            root.left = deleteNode(root.left, d);
        else if(root.data<d)
            root.right = deleteNode(root.right, d);
        else {
            if(root.left==null) {
                return root.right;
            }
            else if(root.right==null) {
                return root.left;
            }
            else {
                root.data = findmin(root.right);
                root.right = deleteNode(root.right, root.data);
            }
        }
        return root;
    }

    public void inorder() {
        inorderTraversal(root);
    }

    public void inorderTraversal(Node root) {
        if(root == null)
            return;
        inorderTraversal(root.left);
        System.out.print(root.data + " ");
        inorderTraversal(root.right);
    }

    public static void main(String[] args) {
        BinarySearchTree tree = new BinarySearchTree();
        tree.insert(50);
        tree.insert(30); 
        tree.insert(20); 
        tree.insert(40); 
        tree.insert(70); 
        tree.insert(60); 
        tree.insert(80);
        tree.delete(20);
        tree.inorder();
    }


}