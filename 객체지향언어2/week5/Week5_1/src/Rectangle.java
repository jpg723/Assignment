
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
		System.out.println("�簢�� �׸���");
		System.out.println("�簢�� �̵� ��ǥ");
	}
}
