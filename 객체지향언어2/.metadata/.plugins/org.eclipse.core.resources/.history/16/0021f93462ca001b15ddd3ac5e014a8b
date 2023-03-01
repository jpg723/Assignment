import java.util.Scanner;
public class MemberArrayListTest {
	public MemberArrayListTest() {
		Scanner sc = new Scanner(System.in);
		MemberArrayList m = new MemberArrayList();
		int selectNo = 0;

		while(true)	{
			System.out.println("\n** 회원 관리 프로그램 **");
			System.out.print("1. 회원 추가\n2. 회원 삭제\n3. 전체 회원 출력\n4. 종료\n");
			System.out.print("선택하려는 메뉴의 번호를 입력하세요>> ");
			selectNo = sc.nextInt();

			if(selectNo == 1) {
				m.addMember();
			}
			else if(selectNo == 2) {
				m.removeMember();
			}
			else if(selectNo == 3) {
				m.showAllMember();
			}
			else if(selectNo == 4) {
				System.out.println("프로그램 종료");
				break;
			}
			else
				System.out.println("잘못된 번호입니다. 다시 입력하세요");
		}
	}

}