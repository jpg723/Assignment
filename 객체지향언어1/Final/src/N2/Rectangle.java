package N2;

class Rectangle extends Shape implements Drawable{
	private int base, height;
	
	public void draw() {
		System.out.println("사각형 그리기");
	}
}
