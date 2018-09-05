import java.util.ArrayList;

class ArrayLists {
	public static void main(String[] args) {
		ArrayList<Integer> arr = new ArrayList<Integer>(10);
		for(int i=0;i<10;i++)
			arr.add(i);
		System.out.println(arr);
		System.out.println(arr.size());
		System.out.println(arr.contains(5));
	}
}

