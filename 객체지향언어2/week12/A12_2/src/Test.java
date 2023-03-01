import java.util.HashMap;
import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);

		HashMap<String, Integer> nations = new HashMap<String, Integer>();
		
		System.out.println("나라 이름과 인구를 3개 입력하세요.(예: Korea 5000)");
		for(int i = 1; i <= 3; i++) {
			System.out.print(i + ". 나라 이름, 인구 >> ");
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

		System.out.println("제일 인구가 많은 나라는 (" + max_nation + ", " + nations.get(max_nation) + ")");


	}

}
