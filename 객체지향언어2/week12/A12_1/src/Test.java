import java.util.HashMap;
import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		HashMap<String, String> map = new HashMap<String, String>();
		
		map.put("java", "�ڹ�");
		map.put("school", "�б�"); 
		map.put("map", "����");
		
		System.out.println("(java, �ڹ�)\n(school, �б�)\n(map, ����)");
		
		while(true) {
			System.out.print("ã�� ���� �ܾ �Է��Ͻÿ�>> ");
			String word = sc.next();
			
			if(word.equals("quit")) {
				break;
			}
			
			String kor = (String) map.get(word);
			if(kor == null) 
				System.out.println("�ܾ��� �ǹ̴� null");
			else
				System.out.println("�ܾ��� �ǹ̴� " + kor); 
		}
	}
}
