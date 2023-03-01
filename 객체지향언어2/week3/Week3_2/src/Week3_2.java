
public class Week3_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		TV[] t = new TV[3];
		
		int i = 0;
		
		for(i = 0; i < t.length; i++) {
			t[i] = new TV(10);
			System.out.print("tvArr[" + i + "].channel=");
			t[i].channelUp();
		}	
	}
}
