public class QueueBasic implements QueueIntf {
	private int[] a = new int[5];
	private int tail = 0;
	private int head = -1;
	@Override
	public void enqueue(int e) {
		if(tail==5) throw new RuntimeException("Overflow");
		a[tail++]=e;
		if(head==-1)
			head = 0;
	}
	@Override
	public int dequeue() {
		if(head ==-1) throw new RuntimeException("underflow");
		if(head==tail) throw new RuntimeException("queue is empty");
		return a[head++];
	}

	@Override
	public boolean isEmpty() {
		int a = size();
		if(a==0)
			return true;
		return false;
	}

	@Override
	public int size() {
		if(head==-1 && tail==0) return 0;
		return tail - head;
	}
	
	@Override
	public void printQueue() {
		for(int i=tail;i<head;i++) {
			System.out.print(a[i] + " ");
		}
	
	}

	public static void main(String[] args) {
		System.out.println("Hello");
		QueueIntf q = new QueueBasic();
		System.out.println("size : "+q.size());
		System.out.println("IsEmpty : "+q.isEmpty());
		q.enqueue(1);
		q.printQueue();
	}

}
