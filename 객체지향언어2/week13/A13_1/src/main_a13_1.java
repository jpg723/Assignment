import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.OutputStream;

public class main_a13_1 {

	public static void main(String[] args) {

		try {
			FileReader fr = new FileReader("input.txt");
			OutputStream fw = new FileOutputStream("output.txt");

			int data = 0;
			int outdata = 0;

			while((data = fr.read()) != -1) {
				if(data >= 97 && data <= 122) {
					outdata = data - 32;
				}
				else {
					outdata = data;
				}
				fw.write(outdata);
			}
			fr.close();
			fw.close();

		}catch(IOException e) {
			e.printStackTrace();
		}
	}
}