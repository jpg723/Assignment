import java.io.FileNotFoundException;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		FileReading fr = new FileReading();
		//readFile ȣ��....
		String path = "data.txt";

		try {
			//throws..��ź�� ���������� ȣ���ϴ� ������ ����.
			fr.readFile(path); 
		} catch(FileNotFoundException e) {
			e.printStackTrace();
		}

	}
}
