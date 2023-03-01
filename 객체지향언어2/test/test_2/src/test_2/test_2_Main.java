package test_2;

import java.util.HashMap;
import java.util.Scanner;

public class test_2_Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);

		HashMap<String, String> name = new HashMap<String, String>();

		System.out.println("**포인트 관리 프로그램입니다**");
		System.out.println("1.입력  2. 삭제  3. 출력  4.종료  선택한 번호는>> ");
		int num = sc.nextInt();

		if(num == 1) {
			System.out.println("입력>>");
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

