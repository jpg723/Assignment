import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

class Controller {
	ArrayList<Phone> tel;
	FileWriter fw;
	Scanner sc;
	FileReader fr;

	public Controller() throws IOException {

		tel = new ArrayList<Phone>();
		sc = new Scanner(System.in);
	}

	void input(FileWriter fw) throws IOException {

		if(tel.size() == 0) {// ArrayList 변수 tel의 크기가 0이면 실행		
			String opn1 = "사용자번호"+"이름"+"\t\t"+"전화번호"+"\t\t"+"주소"+"\r\n";
			//문자열 변수 opn1에 위에 문자열 대입
			tel.add(new Phone(0, "이름","전화번호","주소"));
			//ArrayList 변수 tel의 리스트 추가 Phone 객체를 생성해서 추가 
			fw.write(opn1); 
			// FileWrite의 변수 fw를 이용해 write 함수 호출 파일에 문자열 쓰기
		}

		System.out.print("사용자 번호를 입력하세요>>");
		int idNum = sc.nextInt();
		System.out.print("사용자 이름을 입력하세요>>");
		String name = sc.next(); 
		System.out.print("사용자 전화번호를 입력하세요>>");
		String number = sc.next(); 
		System.out.print("사용자 이메일을 입력하세요>>"); 
		String address=sc.next(); 

		tel.add(new Phone(idNum,name,number,address)); 

		String tatal = idNum + "\t\t" + name + "\t\t" + number + "\t\t" + address + "\r\n";
		fw.write(tatal);
		fw.close();
	}
	void search() {

		System.out.print("검색할 사용자 번호를 입력하세요>>");
		int search = sc.nextInt(); 
		boolean check = false;
		int index = -1;

		for(int i = 0;i < tel.size();i++) {

			if(tel.get(i).idNum == search) {
				index = i; // 변수 index에 i를 대입
				check = true; // 변수 check에 true 대입
			}
		}

		if(check == true) {
			System.out.println("사용자" + search + "의  전화번호는" + tel.get(index).phoneNumber + "입니다.");
		}
		else {
			System.out.println("검색결과가 없습니다.");//출력
		}
	}

	public void input() {

		System.out.print("사용자 번호를 입력하세요>>");
		int idNum = sc.nextInt();
		System.out.print("사용자 이름을 입력하세요>>");
		String name = sc.next(); 
		System.out.print("사용자 전화번호를 입력하세요>>");
		String number = sc.next(); 
		System.out.print("사용자 이메일을 입력하세요>>"); 
		String address=sc.next(); 

		tel.add(new Phone(idNum,name,number,address)); 
		
	}

}