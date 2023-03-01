interface Controllable {
 void play();
 void stop();
}
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Controllable c = new Controllable() {
			public void play() {
				System.out.println("PLAY");
			}
			public void stop() {
				System.out.println("STOP");
			}
		};
		c.play();
		c.stop();
	}

}
