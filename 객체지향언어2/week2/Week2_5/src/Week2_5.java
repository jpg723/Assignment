import java.util.Scanner;

public class Week2_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		String s;
		int i;		
	     	
		System.out.println("���ڿ��� �Է��Ͻÿ�: ");
	    
	    s = sc.next();
	        
	    for (i = s.length()-1; i>=0; i--) {
	        System.out.print(s.charAt(i));
	    }
	}
}
