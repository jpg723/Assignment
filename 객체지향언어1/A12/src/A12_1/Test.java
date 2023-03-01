
public class Test {

	public static void main(String[] args) {
		
		Employee e = new Employee();
		SalariedEmployee s = new SalariedEmployee();
		HourlyEmployee h  = new HourlyEmployee();

		e.input();
		e.computeSalary();
		System.out.println(e.toString());
		
		s.input();
		s.computeSalary();
		System.out.println(s.toString());
		
		h.input();
		h.computeSalary();
		System.out.println(h.toString());
	}
}

