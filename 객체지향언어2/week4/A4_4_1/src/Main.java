import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n, i;
		String name;
		int id;
		
		System.out.print("�迭�� ũ���>>");
		n = sc.nextInt();
		
		Student [] s = new Student[n];

		for(i = 0; i < s.length; i++) {
			System.out.print("�й�>>");
			id = sc.nextInt();
			sc.nextLine();
			System.out.print("�̸�>>");
			name = sc.nextLine();
			
			s[i] = new Student(name, id);
		}
		
		Arrays.sort(s);
		for(Student st : s)
			System.out.println("�й�= " + st.getId() + ", �̸�= " + st.getName());
	}

}
