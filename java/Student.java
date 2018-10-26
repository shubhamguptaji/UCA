public class Student {
    int rollno;
    String name;
    float cgpa;
    Student() {
        rollno = 0;
        name = "";
        cgpa = 0.0f;
    }
    Student(int roll, String s, float f) {
        rollno = roll;
        name = s;
        cgpa = f;
    }
}