
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Test().test();

	}
	private void test() {
		Fruits fruits = new Apple();
		System.out.println(fruits.getName());
	}
	public class Fruits {
		private String name;
		
		public Fruits() {
			this.name = "unknown";
		}
		public String getName() {
			return name;
		}
	}

	public class Apple extends Fruits {
		public String getName() {
			return "Apple";
		}
	
	}
}
