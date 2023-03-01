import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int i, n, count = 0;
		String userId;
		String password;
		
		User[] u = new User[3];
		
		for(i = 0; i < u.length; i++) {
			System.out.println("==========================");
			System.out.println("1. Sign Up\n2. Login\n3. Print All Users\n4. Exit");
			System.out.println("==========================");
			System.out.print("번호를 입력하시오: ");
			n = sc.nextInt();
			
			if(n == 1) {
				System.out.print("Id: ");
				userId = sc.next();
				sc.nextLine();
				System.out.print("Password: ");
				password = sc.nextLine();
				u[i] = new User(userId, password);
				count++;
			}
			else if(n == 3) {
				for(i = 0; i < count; i++) {
					System.out.println("{ " + u[i].userId + ", " + u[i].password + " }");
				}
			}
			else if(n == 4)
			{
				System.out.println("종료");	
				break;
			}
		}
		

	}

}
