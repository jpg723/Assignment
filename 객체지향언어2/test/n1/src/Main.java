import java.util.Scanner;

public class Main {
	Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		int select = -1;
		StuCont cont = new StuCont();
		Scanner sc = new Scanner(System.in);
		
		while(true){
			
			System.out.println("============= 성적관리 프로그램 =============");
			System.out.println("1.학생 추가\n2.검색\n3.성적순 정렬(내림차순)\n4.점수대별 출력 \n5.종료");
			System.out.println("=======================================");
			System.out.print("메뉴를 선택하세요: ");
			select = sc.nextInt();
			
			if(select == 1){
				cont.insert();
			}
			else if(select == 2){
				cont.serch();
			}
			else if(select == 5){
				System.out.println("프로그램이 종료됩니다.");
				break;
			}
		}
	}
}