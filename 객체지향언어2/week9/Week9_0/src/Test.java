class MyException extends Exception {
	public MyException() {
		super("����� ����");
	}
}
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		try {
			method1();
		} catch(MyException e) {
			System.out.println("ȣ�� ����: ");
			e.printStackTrace();
		}
	}
	
	public static void method1() throws MyException {
		throw new MyException();
	}

}
