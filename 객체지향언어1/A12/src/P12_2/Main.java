package P12_2;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		TV[] tv = new TV[3];
		
		for(int i = 0; i < tv.length; i++) {
			tv[i] = new TV();
			tv[i].channel = 10;
			tv[i].channelUp();
			System.out.println("tvArr[" + i + "].channel= " + tv[i].channel);
		}

	}

}
