
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Shape[] s = new Shape[3];
		s[0] = new Rectangle();
		s[1] = new Triangle();
		s[2] = new Circle();
		
		int x, y;
		
		System.out.printf("Shape 타입 객체 배열\n");
		
		for (int i=0; i<s.length; i++) {
			
			s[i].draw();
			
			x = (int)(Math.random()*100);
			y = (int)(Math.random()*100);
			
			System.out.printf("x: %d, y: %d\n\n", x, y);
		}
	}

}
