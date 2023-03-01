import java.util.HashMap;
import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);

		HashMap<String, String> name = new HashMap<String, String>();

		System.out.print("입력하려는 데이터의 수는: ");
		int n = sc.nextInt();

		System.out.println("이름과 전화번호를 입력하세요.(예: 홍길동 010-111-1212)");
		for(int i = 1; i <= n; i++) {
			System.out.print(i + ". 이름, 전화번호 >> ");
			name.put(sc.next(), sc.next());
		}


		System.out.print("\n전화번호를 찾으려는 회원의 이름은: ");
		String member = sc.next();

		String number = (String) name.get(member);
		
		if(number == null) 
			System.out.println("해당하는 이름의 회원은 리스트에 없습니다.");
		else
			System.out.println(member + "의 전화번호는: " + number); 

	}

}
