public class MinPriorityQueue {
    private int[] heap;
    private int capacity;
    private int size;

    MinPriorityQueue(int c) {
        this.capacity = c;
        this.size = 0;
        this.heap = new int[c+1];
    }

    private int getParentIndex(int d) {
        return (d-1)/2;
    }
    private int getLeftChildIndex(int d) {
        return d * 2 + 1;
    }

    private int getRightChildIndex(int d) {
        return d * 2 + 2;
    }
    private boolean hasParent(int d) {
        return getParentIndex(d)>=0;
    }

    private boolean hasLeftChild(int d) {
        return getLeftChildIndex(d) < size;
    }

    private boolean hasRightChild(int d) {
        return getRightChildIndex(d)< size;
    }

    private int parent(int d) {
        return heap[getParentIndex(d)];
    }

    private int leftChild(int d) {
        return heap[getLeftChildIndex(d)];
    }

    private int rightChild(int d) {
        return heap[getRightChildIndex(d)];
    }

    private void swap(int i, int j) {
        int temp = heap[i];
        heap[i] =heap[j];
        heap[j]=temp;
    }

    public int peek() {
        return heap[0];
    }

    public int poll() {
        int temp = heap[0];
        heap[0] = heap[size-1];
        size--;
        sinkDown();
        return temp;
    }

    public void insert(int d) {
        heap[size] = d;
        size++;
        sinkUp();
    }

    public void sinkUp() {
        int index = size-1;
        while(hasParent(index)==true && parent(index) > heap[index]) {
            swap(getParentIndex(index), index);
            index = getParentIndex(index);
        }
    }

    public void sinkDown() {
        int index =0;
        while(hasLeftChild(index)==true) {
            int small = getLeftChildIndex(index);
            if(hasRightChild(index)==true && rightChild(index)<leftChild(index))
                small = getRightChildIndex(index);
            if(heap[index] < heap[small])
                break;
            else {
                swap(index, small);
            }
            index = small;
        }
    }

    public void print() {
        for(int i=0;i<size;i++) {
            System.out.println(heap[i]);
        }
    }

    public static void main(String[] args) {
        MinPriorityQueue q = new MinPriorityQueue(8);
        // MinPriorityQueue q = new MinPriorityQueue(8);
        q.insert(5);
        q.insert(2);
        q.insert(4);
        q.insert(1);
        q.insert(7);
        q.insert(6);
        q.insert(3);
        q.insert(8);
        q.print(); // [ 1, 2, 3, 5, 7, 6, 4, 8 ]
        System.out.println();
        // System.out.println(q.poll());
        q.poll();
        System.out.println();
        q.print();

    }
}
