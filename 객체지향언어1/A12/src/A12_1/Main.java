package A12_1;

import java.util.Scanner;

public class Main {

	@SuppressWarnings("resource")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		Employee e0 = new Employee();
		SalariedEmployee e1 = new SalariedEmployee(null, 0, 0);
		HourlyEmployee e2 = new HourlyEmployee(null, 0, 0, 0);
		
		System.out.print("이름은? ");
		e0.setName(sc.next());
		System.out.print("직원번호는? ");
		e0.setId(sc.nextInt());
		System.out.print("직급은? ");
		e0.setPosition(sc.next());
		System.out.println(e0.toString());
		
		System.out.print("\n이름은? ");
		e1.setName(sc.next());
		System.out.print("직원번호는? ");
		e1.setId(sc.nextInt());
		System.out.print("직급은? ");
		e1.setPosition(sc.next());
		System.out.print("월급은? ");
		e1.setMonthly(sc.nextInt());
		System.out.println(e1.toString());
		
		System.out.print("\n이름은? ");
		e2.setName(sc.next());
		System.out.print("직원번호는? ");
		e2.setId(sc.nextInt());
		System.out.print("직급은? ");
		e2.setPosition(sc.next());
		System.out.print("시급은? ");
		e2.setRate(sc.nextInt());
		System.out.print("일한 시간은? ");
		e2.setHours(sc.nextInt());
		System.out.println(e2.toString());
	}

}
