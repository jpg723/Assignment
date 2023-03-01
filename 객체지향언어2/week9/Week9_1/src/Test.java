
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			method();
		}catch(DiskFailureException e) {
			e.printStackTrace();
		}

	}
	public static void method() throws DiskFailureException {
		throw new DiskFailureException();
	}

}
