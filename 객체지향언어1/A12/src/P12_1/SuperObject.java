package P12_1;

public class SuperObject {
	protected String name;
	
	public void paint() {
		draw();
	}
	
	public void draw() {
		System.out.println(name);
	}

}
