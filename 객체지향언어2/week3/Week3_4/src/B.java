
class B extends A{
	public B() {
		System.out.println("생성자B");
	}
	public B(int x) {
		super(x); 
		System.out.println("매개변수 생성자B");
	}
}
