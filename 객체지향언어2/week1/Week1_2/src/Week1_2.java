import java.util.Scanner;

public class Week1_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		String alp;
		String Alp = "";
		char c;
		int i;
		
		while(true) {
	     	System.out.print("���ڸ� �Է��ϼ���: ");
	    	alp = sc.next();
	    	
	    	if(alp.equals("0"))
	    		break;
	    	
	    	for(i = 0; i < alp.length(); i++) {
	    		 c = alp.charAt(0);
	    		 
	    	    if(c >=65 && c <=90) {
                    Alp = alp.toLowerCase();
	    	    }
                else if(c >= 97 && c <= 122) {
                	Alp = alp.toUpperCase();
	          	}
                else {                
                	System.out.println("�����ڰ� �ƴմϴ�.");
	    	        Alp = alp;
                }
	    	}
	    	System.out.println(Alp);
		}

	}


}
