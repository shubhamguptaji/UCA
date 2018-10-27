package Com.DS;

public class Stack {
    public char[] arr;
    public int top;
    public int size;

    private void doubleArraySize(int d) {
        char[] temp = new char[2*d];
        for(int i=0;i<d;i++) {
            temp[i] = arr[i];
        }
        size = 2*d;
        arr = temp;
    }

    private void reduceSize() {
        size = size - (size/4);
        char[] temp = new char[size];
        for(int i=0;i<=top;i++)
        {
            temp[i] = arr[i];
        }
        arr = temp;
    }

    public Stack(int capacity) {
        arr = new char[capacity];
        top = -1;
        size = capacity;
    }

    public char peek() {
        return arr[top];
    }

    public void push(char d) {
        if(top >=size-1)
        {
            doubleArraySize(size);
        }
        arr[++top] = d;
    }

    public int pop() {
        if(top<0)
        {
            System.out.println("Stack is already empty");
            return -1;
        }
        int temp = arr[top];
        top--;
        if(top<(size/2)){
            reduceSize();
        }
        return temp;
    }

    public boolean isEmpty() {
        return top<0;
    }

    public void printStack() {
        for(int i=0;i<=top;i++)
            System.out.print(arr[i] + " ");
        System.out.println(arr.length);
    }

    // public static void main(String[] args) {
    //     Stack stk = new Stack(10);
    //     stk.push('a');
    //     System.out.println(stk.peek());
    //     stk.pop();
    // //     // stk.push(2);
    // //     // stk.push(3);
    // //     // stk.push(4);
    // //     // stk.push(5);
    // //     // stk.push(6);
    // //     // stk.push(7);
    // //     // stk.push(8);
    // //     // stk.push(9);
    // //     // stk.push(10);
    // //     // stk.push(11);
    // //     // stk.push(12);
    // //     // stk.push(13);
    // //     // stk.push(14);
    // //     // stk.push(15);
    // //     // stk.push(16);
    // //     // stk.printStack();
    // //     // for(int i=0;i<12;i++)
    // //     //     stk.pop();
    //     stk.printStack();

    // }
}