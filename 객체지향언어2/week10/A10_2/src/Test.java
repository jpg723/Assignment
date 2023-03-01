import java.util.Scanner;
import java.util.StringTokenizer;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		String s;
		int i;
		int space = 0;

		while(true){
			System.out.println("한 줄로 문장을 입력하세요. (종료는 exit을 입력) ");
			s = sc.nextLine();

			if(s.equals("exit")) {
				System.out.println("종료합니다...");
				break;
			}
			StringTokenizer stk = new StringTokenizer(s, " ");
			space = stk.countTokens() - 1;
			System.out.println("어절 개수는 " + stk.countTokens());

			System.out.println("공백의 개수는 " + space);

		}

	}

}
