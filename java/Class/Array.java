import java.util.Arrays;

class FillArray {
	public static void main(String[] args) {
		int a[] = {1, 2, 3,4,5,6,7,8,9,10};
		Arrays.fill(a,3,6, 0);
		System.out.println(Arrays.toString(a));
		System.out.println("length is " + a.length);
		Arrays.sort(a, 0, 8);
		System.out.println("Sorted array is " + Arrays.toString(a));
	}
	
}
