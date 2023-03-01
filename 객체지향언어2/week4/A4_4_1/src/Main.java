import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n, i;
		String name;
		int id;
		
		System.out.print("배열의 크기는>>");
		n = sc.nextInt();
		
		Student [] s = new Student[n];

		for(i = 0; i < s.length; i++) {
			System.out.print("학번>>");
			id = sc.nextInt();
			sc.nextLine();
			System.out.print("이름>>");
			name = sc.nextLine();
			
			s[i] = new Student(name, id);
		}
		
		Arrays.sort(s);
		for(Student st : s)
			System.out.println("학번= " + st.getId() + ", 이름= " + st.getName());
	}

}
