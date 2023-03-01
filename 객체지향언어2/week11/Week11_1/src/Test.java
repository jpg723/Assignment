import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		Set<String> s = new HashSet<String>();
		String[] sample = new String[5];

		for(int i = 0; i < sample.length; i++) {
			System.out.print("추가할 회원의 이름: ");
			sample[i] = sc.nextLine(); 
			s.add(sample[i]);
		}
		System.out.println(s);


	}
}
