
class Printer extends Device implements Connectable{
	
	public void print() {
		System.out.println("�������Դϴ�.");
	}
	public void connect() {
		System.out.println(name + ", �����͸� �����մϴ�.");
	}

}
