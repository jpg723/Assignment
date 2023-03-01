
class UsbMem extends Device implements Connectable{

	public void print() {
		System.out.println("USB 메모리입니다.");
	}
	public void connect() {
		System.out.println(name + ", USB 메모리를 연결합니다.");
	}
}
