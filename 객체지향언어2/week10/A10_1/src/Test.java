import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);

		int i = 0;
		
		System.out.print("�ܾ� ���ڿ��� �Է��ϼ���>> ");
		String s = sc.nextLine();
		
		StringTokenizer st = new StringTokenizer(s, " ");
		
		int count = st.countTokens();
		System.out.println("��� " + count + "���� �ܾ �ֽ��ϴ�.");
		String[] buf = new String[count];
		
		System.out.println("[�и��� ��ū]");
		
		while(st.hasMoreTokens()) {
			buf[i] = st.nextToken();
			System.out.println(buf[i]);
			i++;
		}
		System.out.println(" ��ū�� : " + count);
		Arrays.sort(buf);
		System.out.println("===== sort =====");
		
		for(i = 0; i < buf.length; i++) {
			System.out.println(buf[i]);
		}
	}

}
