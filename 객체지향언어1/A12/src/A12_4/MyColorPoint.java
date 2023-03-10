package A12_4;

class MyColorPoint extends MyPoint{
	
	String color;
	
	public MyColorPoint(int x, int y, String color) {
		super(x, y);
		this.color = color;
	}

	@Override
	protected void move(int x, int y) {
		this.x = x;
		this.y = y;
	}

	@Override
	protected void reverse() {
		int temp;
		temp = this.x;
		this.x = this.y;
		this.y = temp;
		
	}
	
	protected void show(){ 
        System.out.println(x + "," + y + "," + color);
    }

}
