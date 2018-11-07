package Client;
import BST.*;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;


public class Client {
    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("C:\\Users\\Shubham\\Desktop\\New folder\\Client\\test.txt");
        Scanner sc = new Scanner(file);
        BinarySearchTree tree = new BinarySearchTree();
        while(sc.hasNextLine()) {
            String str = sc.nextLine();
            String[] arr = str.split(" ");
            for(int i=0;i<arr.length;i++) {
                if(arr[i].length() >= 10) {
                    tree.insert(arr[i]);
                }
            }
        }

        tree.inorder();
    }
}