package A6_3;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		
		System.out.print("이름을 입력하시오.: ");
		String name = sc.nextLine();
		System.out.print("학번을 입력하시오.: ");
		int rollno = sc.nextInt();
		System.out.print("나이를 입력하시오.: ");
		int age = sc.nextInt();
		
		Student s = new Student(name, rollno, age);
		
		s.print();
	}

}
