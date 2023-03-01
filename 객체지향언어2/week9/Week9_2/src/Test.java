import java.io.FileNotFoundException;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		FileReading fr = new FileReading();
		//readFile 호출....
		String path = "data.txt";

		try {
			//throws..폭탄을 던져버리면 호출하는 곳으로 간다.
			fr.readFile(path); 
		} catch(FileNotFoundException e) {
			e.printStackTrace();
		}

	}
}
