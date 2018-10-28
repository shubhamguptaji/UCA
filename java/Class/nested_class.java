class outer {
	static int x1;
	int x2;
	private int x3;
	class inner {
		int y;
		void display() {
			System.out.println(x2 + " " + y);
		}
	}
	void print() {
		System.out.println(x1);
	}
}

class outer1 {
	public static void main(String[] args) {
		outer obj = new outer();
		outer.inner in = new outer().new inner();
		obj.x1 = 1;
		obj.x2 = 2;
		in.y = 3;
		in.display();
	}
}
