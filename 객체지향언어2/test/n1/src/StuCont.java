import java.util.ArrayList;
import java.util.Scanner;

public class StuCont{

	ArrayList<StuData> list;
	Scanner sc;
	private String name;
	private int score;
	StuData data;				//래퍼런스 변수 
	boolean flag;

	StuCont() {
		sc = new Scanner(System.in);
		flag = true;	//중복된 학번입력 받을시 유효성 검사를 위한 변수
	}

	//입력
	void insert(){
		int stu_Num = 1;
		int i;

		for(i = 0; i < stu_Num; i++) {
			System.out.print("이름을 입력하세요: ");
			name = sc.next();
			System.out.print("점수를 입력하세요: ");
			score = sc.nextInt();
		}
		System.out.println("이름: " + name +", 점수: "+ score);

	}
	void serch(){

		String find;

		System.out.print("검색할 이름을 입력하세요:");	
		find = sc.next();


		if(find.equals(name)) { 		    		  
			System.out.println(score);
		}
		else {
			System.out.println("해당이름이 없습니다.");
		}
	}
}

