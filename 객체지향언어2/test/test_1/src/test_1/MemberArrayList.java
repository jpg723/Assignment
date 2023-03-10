package test_1;

import java.util.Scanner;

public class MemberArrayList {
	Scanner sc = new Scanner(System.in);

	Member[] members = new Member[100];

	private int count = 1;

	public void addMember()	{
		System.out.print("추가할 회원의 아이디는 : ");
		String id = sc.next();
		System.out.print("추가할 회원의 이름은 : ");
		String name = sc.next();

		for(int i = 0; i < members.length; i++)	{
			if(members[i] != null && members[i].getId().equals(id))	{
				System.out.print("이미 존재하는 회원 아이디 입니다.\n");
			}
		}
			
		for(int i = 0; i < members.length; i++)	{
			if(members[i] == null)	{
				count = i+1;
				members[i] = new Member(count, id, name);
				break;
			}
		}
	}
	public void serachMember() {
		System.out.print("ID : ");
		String id = sc.next();

		Member m = findBook(id);

		if(m == null) {
			System.out.println("해당회원은 존재하지 않습니다.");
			return;			
		}
		for(int i = 0; i < members.length; i++)	{
			if(members[i] != null && members[i].getId().equals(id))	{
				System.out.println("Name"+ members[i].getName());
			}
		}

	}

	public void showAllMember() {
		System.out.print("\n");

		for(Member m : members)	{
			if( m != null )	{
				printBookInfo(m);
			}
		}
	}

	public void removeMember()	{
		System.out.print("삭제하려는 회원의 아이디는 : ");
		String id = sc.next();

		Member m = findBook(id);

		if(m == null) {
			System.out.println("해당회원은 존재하지 않습니다.");
			return;
		}

		for(int i = 0; i < members.length; i++)	{
			if(members[i] != null && members[i].getId().equals(id))	{
				members[i] = null;
				System.out.println("삭제완료");
				return;
			}
		}
	}

	public void printBookInfo(Member m)	{
		System.out.println(m.toString());
	}

	public Member findBook(String id) {		
		for(int i = 0; i< members.length; i++)	{
			if(members[i] != null && members[i].getId().equals(id))	{
				return members[i];
			}
		}
		return null;
	}
}

