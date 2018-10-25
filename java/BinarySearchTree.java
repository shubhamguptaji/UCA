public class BinarySearchTree {
    // private Node root=null;
    BinarySearchTree() {
        Node root = null;
    }

    public Node insert(Node root, int d, double gpa) {
        if(root == null)
            return new Node(d, gpa);
        else if(root.rollno >= d)
        {
            root.left = insert(root.left, d, gpa);
        }
        else 
            root.right = insert(root.right, d, gpa);
        return root;
    } 

    public boolean search(Node root, int d) {
        if(root==null)
            return false;
        if(d==root.rollno)
            return true;
        else if(d<=root.rollno)
            search(root.left, d);
        else
            search(root.right, d);
        return true;
    }

    public Node findmin(Node root) {
        while(root.left!= null)
            root = root.left;
        return root;
    }

    public Node deleteNode(Node root, int d)
    {
        if(root==null)
            return root;
        else if(d<root.rollno)
            deleteNode(root.left, d);
        else if(d>root.rollno)
            deleteNode(root.right, d);
        else
        {
            if(root.left == null)
                return root.right;
            else if(root.right==null)
                return root.left;
            else
            {
                Node temp = findmin(root.right);
                root.rollno = temp.rollno;
                root.cgpa = temp.cgpa;
                root.right = deleteNode(root.right, root.rollno);
            }
        }
        return root;
    }

    public void inorder(Node root) {
        if(root==null)
            return;
        inorder(root.left);
        System.out.println(root.rollno + " " + root.cgpa);
        inorder(root.right);
    }

    public void preorder(Node root) {
        if(root == null)
            return;
        System.out.println(root.rollno + " " + root.cgpa);
        preorder(root.left);
        preorder(root.right);
        
    }

    public static void main(String[] args) {
        // Node root;
        BinarySearchTree tree = new BinarySearchTree();
        Node root = null;
        root = tree.insert(root, 4, 9.2);
        root = tree.insert(root, 3, 9.4);
        root = tree.insert(root, 2, 9.5);
        root = tree.insert(root, 1, 9.1);
        root = tree.insert(root, 5, 9.0);
        root = tree.insert(root, 6, 9.8);
        root = tree.insert(root, 7, 8.6);
        tree.inorder(root);
        System.out.println();
        tree.preorder(root);
        // tree.insert(2);
    }

}