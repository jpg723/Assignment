
public class MyPair<T> {
	T a;
	T b;
	
	public MyPair(T a, T b) {
		this.a = a;
		this.b = b;
	}
	public T geta() {
		return a;
	}
	public T getb() {
		return b;
	}
	public void seta(T a) {
		this.a = a;
	}
	public void setb(T b) {
		this. b = b;
	}
	public String toString() {
		return "str1 : " + a.toString() + ", str 2 : " + b.toString();
	}

}
