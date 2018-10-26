public class BinarySearchTree {
    // private Node root=null;
    BinarySearchTree() {
        Node root = null;
    }

    public Node insert(Node root, Student s) {
        if(root == null)
            return new Node(s);
        else if(root.obj.rollno >= s.rollno)
        {
            root.left = insert(root.left, s);
        }
        else 
            root.right = insert(root.right, s);
        return root;
    } 

    // public boolean search(Node root, int d) {
    //     if(root==null)
    //         return false;
    //     if(d==root.rollno)
    //         return true;
    //     else if(d<=root.rollno)
    //         search(root.left, d);
    //     else
    //         search(root.right, d);
    //     return true;
    // }

    // public Node findmin(Node root) {
    //     while(root.left!= null)
    //         root = root.left;
    //     return root;
    // }

    // public Node deleteNode(Node root, int d)
    // {
    //     if(root==null)
    //         return root;
    //     else if(d<root.rollno)
    //         deleteNode(root.left, d);
    //     else if(d>root.rollno)
    //         deleteNode(root.right, d);
    //     else
    //     {
    //         if(root.left == null)
    //             return root.right;
    //         else if(root.right==null)
    //             return root.left;
    //         else
    //         {
    //             Node temp = findmin(root.right);
    //             root.rollno = temp.rollno;
    //             root.cgpa = temp.cgpa;
    //             root.right = deleteNode(root.right, root.rollno);
    //         }
    //     }
    //     return root;
    // }

    public void inorder(Node root) {
        // System.out.println("hello");
        if(root==null)
            return;
        inorder(root.left);
        System.out.println(root.obj.rollno + " " + root.obj.cgpa + " " + root.obj.name);
        inorder(root.right);
    }

    // public void preorder(Node root) {
    //     if(root == null)
    //         return;
    //     System.out.println(root.rollno + " " + root.cgpa);
    //     preorder(root.left);
    //     preorder(root.right);
        
    // }

    public static void main(String[] args) {
        // Node root;
        BinarySearchTree tree = new BinarySearchTree();
        Node root = null;
        Student s = new Student(4, "shubham", 9.5f);
        Student s1 = new Student(3, "a", 9.4f);
        Student s2 = new Student(1, "b", 9.3f);
        Student s3 = new Student(2, "c", 9.2f);
        Student s4 = new Student(5, "d", 9.1f);
        Student s5 = new Student(7, "e", 9.0f);

        root = tree.insert(root, s);
        root = tree.insert(root, s1);
        root = tree.insert(root, s2);
        root = tree.insert(root, s3);
        root = tree.insert(root, s4);
        root = tree.insert(root, s5);
        // root = tree.insert(root, 7, 8.6);
        tree.inorder(root);
        // System.out.println();
        // tree.preorder(root);
        // tree.insert(2);
    }

}