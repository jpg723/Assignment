import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class out {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);

		System.out.println("입력");
		String s = scan.nextLine();
	     try{
	            //파일 객체 생성
	            File file = new File("Output.txt");
	            BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(file));
	            
	            if(file.isFile() && file.canWrite()){
	                //쓰기
	                bufferedWriter.write(s);
	                //개행문자쓰기
	                bufferedWriter.newLine();
	                bufferedWriter.write(s);
	                
	                bufferedWriter.close();
	            }
	        }catch (IOException e) {
	            System.out.println(e);
	        }
		
	}
}
