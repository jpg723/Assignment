import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		int a, b;
		String c;

		Add add = new Add();
		Sub sub = new Sub();
		Mul mul = new Mul();
		Div div = new Div();

		System.out.print("두 정수와 연산자를 입력하시오.(ex.34 5 +)>>");
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.next();

		if(c.equals("+")) {
			add.setValue(a, b);
			System.out.println(add.calculate());
		}
		else if(c.equals("-")) {
			sub.setValue(a, b);
			System.out.println(sub.calculate());
		}
		else if(c.equals("*")) {
			mul.setValue(a, b);
			System.out.println(mul.calculate());
		}
		else if(c.equals("/")) {
			div.setValue(a, b);
			System.out.println(div.calculate());
		}
		else
			System.out.println("잘못된 연산자 입니다.");
			
	}

}
