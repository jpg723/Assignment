package N2;

class Triangle extends Shape implements Drawable{
	
	private int length, width;
	
	public void draw() {
		System.out.println("삼각형 그리기");
	}

}
