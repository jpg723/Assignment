package P12_2;

public class TV {
	String color;
	boolean power;
	int channel;

	void power() { 
		power = !power;
	}
	public void channelUp() {
		 channel++;
	}
	public void channelDown() { 
		channel--;
	}

}
