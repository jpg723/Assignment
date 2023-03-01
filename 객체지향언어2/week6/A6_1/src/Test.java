import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 Scanner sc = new Scanner(System.in);
		  
		  System.out.print("두 정수와 연산자를 입력하세요>> ");
		  
		  int a = sc.nextInt();
		  int b = sc.nextInt();
		  String cc = sc.next();
		  char c = cc.charAt(0);
		  
		  switch(c) {
		  case '+':
		   Add add = new Add();
		   add.setValue(a, b);
		   System.out.println(add.calculate());
		   break;
		   
		  case '-':
		   Sub sub = new Sub();
		   sub.setValue(a, b);
		   System.out.println(sub.calculate());
		   break;
		   
		  case '*':
		   Mul mul = new Mul();
		   mul.setValue(a, b);
		   System.out.println(mul.calculate());
		   break;
		   
		  case '/':
		   Div div = new Div();
		   div.setValue(a, b);
		   System.out.println(div.calculate());
		   break;
		   
		   default:
		    System.out.println("잘못된 값입니다.");
		    break;
		  }

	}

}
