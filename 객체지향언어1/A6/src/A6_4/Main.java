package A6_4;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		
		Person p1 = new Person();
		p1.name = "홍길동";
		p1.height = (float)163.0;
		p1.weight = (float)48.5;
		
		System.out.print("이름은? : ");
		String name = sc.nextLine();
		System.out.print("키는? : ");
		float height = sc.nextFloat();
		System.out.print("몸무게는? : ");
		float weight = sc.nextFloat();
		
		Person p2 = new Person(name, height, weight);
		
		p1.print();
		p2.print();
		
	}

}
