import java.util.HashMap;
import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		HashMap<String, String> map = new HashMap<String, String>();
		
		map.put("java", "자바");
		map.put("school", "학교"); 
		map.put("map", "지도");
		
		System.out.println("(java, 자바)\n(school, 학교)\n(map, 지도)");
		
		while(true) {
			System.out.print("찾고 싶은 단어를 입력하시오>> ");
			String word = sc.next();
			
			if(word.equals("quit")) {
				break;
			}
			
			String kor = (String) map.get(word);
			if(kor == null) 
				System.out.println("단어의 의미는 null");
			else
				System.out.println("단어의 의미는 " + kor); 
		}
	}
}
