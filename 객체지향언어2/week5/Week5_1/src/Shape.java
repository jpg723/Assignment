interface Movable {
	
	void move(int x, int y);
}
class Shape implements Movable {
	
	protected int x, y;
	
	public void draw() {
		System.out.println("shape ±×¸®±â");
	}
	
	public void move(int x,int y) {
		this.x = x;
		this.y = y;
	}

}
