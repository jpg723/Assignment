import java.io.FileNotFoundException;
import java.io.FileReader;

public class FileReading {
	FileReading() {

	}
	public void readFile(String fileName) throws FileNotFoundException {
		
		FileReader fileReader = new FileReader(fileName);
		System.out.println("1. FileReader Creating....");
	}
}
