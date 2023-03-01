package A6_3;

public class Student {
	
	String name;
	int rollno;
	int age;
	
	public Student(String n, int r, int a) {
		
		name = n;
		rollno = r;
		age = a;	
	}
	
	void print() {
		
		System.out.println("이름: " + name);
		System.out.println("학번: " + rollno);
		System.out.println("나이: " + age);
	}
}
