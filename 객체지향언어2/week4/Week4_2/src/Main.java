
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Book obj1 = new Book("863Ã³774°³", "°³¹Ì ", "º£¸£º£¸£ ");
		AppCD obj2 = new AppCD("2016-7001", "Java Source");
		obj1.checkOut("±è¿µ¼÷ ", "20160320");
		obj2.checkOut("¹ÚÈñ°æ", "20160317 ");
		obj1.checkIn();
		obj2.checkIn();

	}
}

