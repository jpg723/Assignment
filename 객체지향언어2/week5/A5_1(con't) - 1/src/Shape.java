
class Shape implements Movable {
	
	protected int x, y;
	
	public void move(int x,int y) {
		x = (int)(Math.random()*100);
		y = (int)(Math.random()*100);
		System.out.printf("x: %d, y: %d\n",x, y);
	}
	public void draw() {
		System.out.println("Shape Draw");
	}
}