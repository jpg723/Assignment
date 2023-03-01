import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		Set<String> treeSet = new TreeSet<String>();
		String name;
		
		for(int i = 0; i < 5; i++) {
			System.out.print("추가할 회원의 이름은: ");
			name = sc.nextLine();
			treeSet.add(new String(name));
		}
		System.out.println(treeSet);

	}
}
