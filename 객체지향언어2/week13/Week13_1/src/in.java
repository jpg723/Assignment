import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class in {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
        try{
        //파일 객체 생성
        File file = new File("Output.txt");
         //입력 스트림 생성
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
