import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class in {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        try{
        //���� ��ü ����
        File file = new File("Output.txt");
         //�Է� ��Ʈ�� ����
         FileReader file_reader = new FileReader(file);
         int cur = 0;
         while((cur = file_reader.read()) != -1){
            System.out.print((char)cur);
         }
         file_reader.close();
        }catch (FileNotFoundException e) {
            e.getStackTrace();
        }catch(IOException e){
            e.getStackTrace();
        }
	}

}
