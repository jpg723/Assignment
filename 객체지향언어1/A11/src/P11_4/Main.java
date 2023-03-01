package P11_4;

import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Shape>list = new ArrayList<Shape>();
		
		list.add(new Circle());
		list.add(new Triangle());
		list.add(new Shape());
		
		for(Shape i : list) {
			i.draw();
		}
	}

}
