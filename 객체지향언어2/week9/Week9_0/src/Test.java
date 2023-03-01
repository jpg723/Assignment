class MyException extends Exception {
	public MyException() {
		super("사용자 예외");
	}
}
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		try {
			method1();
		} catch(MyException e) {
			System.out.println("호출 스택: ");
			e.printStackTrace();
		}
	}
	
	public static void method1() throws MyException {
		throw new MyException();
	}

}
