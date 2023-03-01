
class Printer extends Device implements Connectable{
	
	public void print() {
		System.out.println("프린터입니다.");
	}
	public void connect() {
		System.out.println(name + ", 프린터를 연결합니다.");
	}

}
