
class Rectangle extends Shape {
	private int width, height;
	
	public void setWidth(int w) {
		width = w;
	}
	public int getWidth() {
		return width;
	}
	public void setHeight(int h) {
		height = h;
	}
	public int getHeight() {
		return height;
	}
	public void draw() {
		System.out.println("사각형 그리기");
	}
}
