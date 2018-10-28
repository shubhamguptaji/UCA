class Static1 {
    static int count;
    int var;
    static void method() {
        System.out.println(++count);
    }
    void method2() {
        System.out.println(count);
        System.out.println(var);
    }
    static void method3() {
        Static1 s1  =new Static1();
        System.out.println(s1.var);
        s1.method2();
    }
}
class StaticDemo {
    public static void main(String[] args) {
        Static1.method();
        Static1 s = new Static1();
        s.method();
        Static1.method3();
    }
}