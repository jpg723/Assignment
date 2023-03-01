import java.util.Scanner;

public class A3_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		
		System.out.print("문자를 입력하세요: ");
		String operator = sc.next();
		
		System.out.print("숫자 2개를 입력하세요(ex. 3 23): ");
		double num1 = sc.nextDouble();
		double num2 = sc.nextDouble();
		
		if(operator.equals("+")) {
			System.out.println(num1 + operator + num2 + " = " + (num1 + num2));
		}
		
		else if(operator.equals("-")) {
			System.out.println(num1 + operator + num2 + " = " + (num1 - num2));
		}
		
		else if(operator.equals("*")) {
			System.out.println(num1 + operator + num2 + " = " + (num1 * num2));
		}
		
		else if(operator.equals("/")) {
			if(num2 == 0)
				System.out.println("연산을 수행할 수 없다.");
			
			else
				System.out.println(num1 + operator + num2 + " = " + (num1 / num2));
		}						
	}
}
