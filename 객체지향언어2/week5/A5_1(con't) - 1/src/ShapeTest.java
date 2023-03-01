
public class ShapeTest {
	
	private static Shape arrayOfShapes[];
	
	public static void main(String arg[]) {
		
		init();
		drawAll();

		Movable[] m = new Movable[3];
		m[0] = new Rectangle();
		m[1] = new Triangle();
		m[2] = new Circle();

		for (int i=0; i<m.length; i++) {
			m[i].move((int)(Math.random()*100),(int)(Math.random()*100));
		}
	}
	public static void init() {
		arrayOfShapes = new Shape[3];
		arrayOfShapes[0] = new Rectangle();
		arrayOfShapes[1] = new Triangle();
		arrayOfShapes[2] = new Circle();
	}
	public static void drawAll() {
		for (int i = 0; i < arrayOfShapes.length; i++) {
			arrayOfShapes[i].draw();
		}
	}

}
