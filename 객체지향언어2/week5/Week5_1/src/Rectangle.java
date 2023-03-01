
class Rectangle extends Shape {
	
	private int width, height;
	
	public void setWidth(int w) {
		width = w;
	}
	public void setHeight(int h) {
		height = h;
	}
	public int getWidth() {
		return width;
	}
	public int getHeight() {
		return height;
	}
	public void draw() {
		System.out.println("사각형 그리기");
		System.out.println("사각형 이동 좌표");
	}
}
