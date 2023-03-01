import java.util.Scanner;

public class Week2_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		String name = null;
		String tel = null;
		int i;
		
		Phone p = new Phone(name, tel);
		
		for(i = 0; i < 2; i++) {
			System.out.print("이름, 전화번호를 입력하세요. >> ");
			name = sc.next();
			tel = sc.next();
			p.setName(name);
			p.setTel(tel);
			System.out.println(p.getName() + "의 전화번호는 " + p.getTel());
		}
	}

}
