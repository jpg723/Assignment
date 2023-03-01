
public class TV {

	String color;
	boolean power;
	int channel;
	
	public TV(int c) {
		this.channel = c;
	}
	public void power() {
		power = false;
	}
	public void channelUp() { 
		System.out.println(channel + 1);
	}
	public void channelDown() { 
		System.out.println(channel - 1);
	}

}
