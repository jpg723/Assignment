
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Book obj1 = new Book("863ó774��", "���� ", "�������� ");
		AppCD obj2 = new AppCD("2016-7001", "Java Source");
		obj1.checkOut("�迵�� ", "20160320");
		obj2.checkOut("�����", "20160317 ");
		obj1.checkIn();
		obj2.checkIn();

	}
}

