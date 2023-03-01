package test_1;

import java.util.Scanner;
public class MemberArrayListTest {
	public MemberArrayListTest() {
		Scanner sc = new Scanner(System.in);
		MemberArrayList m = new MemberArrayList();
		int selectNo = 0;

		while(true)	{
			System.out.println("1. 회원 추가 | 2. 회원 삭제 | 3. 회원 검색 | 4. 전체 회원 출력 | 5. 종료");
			System.out.print("입력>> ");
			selectNo = sc.nextInt();

			if(selectNo == 1) {
				m.addMember();
			}
			else if(selectNo == 2) {
				m.removeMember();
			}
			else if(selectNo == 3) {
				m.serachMember(); 
			}
			else if(selectNo == 4) {
				m.showAllMember();
			}
			else if(selectNo == 5) {
				System.out.println("프로그램 종료");
				break;
			}
			else
				System.out.println("잘못된 번호입니다. 다시 입력하세요");
		}
	}

}
