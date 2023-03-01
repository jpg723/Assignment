import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);

		int i = 0;
		
		System.out.print("단어 문자열을 입력하세요>> ");
		String s = sc.nextLine();
		
		StringTokenizer st = new StringTokenizer(s, " ");
		
		int count = st.countTokens();
		System.out.println("모두 " + count + "개의 단어가 있습니다.");
		String[] buf = new String[count];
		
		System.out.println("[분리된 토큰]");
		
		while(st.hasMoreTokens()) {
			buf[i] = st.nextToken();
			System.out.println(buf[i]);
			i++;
		}
		System.out.println(" 토큰수 : " + count);
		Arrays.sort(buf);
		System.out.println("===== sort =====");
		
		for(i = 0; i < buf.length; i++) {
			System.out.println(buf[i]);
		}
	}

}
