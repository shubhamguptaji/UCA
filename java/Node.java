public class Node {
    int rollno;
    double cgpa;
    Node left, right;
    Node()
    {
        rollno = 0;
        cgpa = 0.0;
        left = null;
        right = null;
    }
    Node(int roll, double gpa)
    {
        rollno = roll;
        cgpa = gpa;
        left = null;
        right = null;
    }
}