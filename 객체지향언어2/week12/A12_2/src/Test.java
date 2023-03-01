import java.util.HashMap;
import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);

		HashMap<String, Integer> nations = new HashMap<String, Integer>();
		
		System.out.println("���� �̸��� �α��� 3�� �Է��ϼ���.(��: Korea 5000)");
		for(int i = 1; i <= 3; i++) {
			System.out.print(i + ". ���� �̸�, �α� >> ");
			nations.put(sc.next(), sc.nextInt());
		}

		Set<String> keys = nations.keySet();
		Iterator<String> it = keys.iterator();

		int max = 0;
		String max_nation = null;
		
		while(it.hasNext()) {
			String key = it.next();
			int value = nations.get(key);
			if(max < value) {
				max = value;
				max_nation = key;
			}
		}

		System.out.println("���� �α��� ���� ����� (" + max_nation + ", " + nations.get(max_nation) + ")");


	}

}
