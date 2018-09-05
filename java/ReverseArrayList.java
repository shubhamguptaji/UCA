import java.util.ArrayList;

class ReverseArrayList{
	public static void main(String[] args) {
		ArrayList<Integer> a = new ArrayList<Integer>(10);
		for(int i=0;i<10;i++)
			a.add(i);
		int j=9;
		for(int i=0;i<5;i++) {
			int b = a.get(j);
			System.out.println(b);
			a.set(i,b);
			j=j-1;
		}
		System.out.println(a);
	}
}
