public class StuData {
	private String name;
	private int score;

	public StuData(String name, int score){
		this.name = name;
		this.score = score;

	}
	public int getScore() {
		return score;
	}
	public void setScore(int score) {
		this.score = score;
	}

	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
}