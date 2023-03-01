package labhw11;

public class CalcBean{
	
	private int op1, op2;
	private String operator;
	private int result;
	
	public int getOp1() {
		return op1;
	}
	
	public void setOp1(int op1) {
		this.op1 = op1;
	}
	
	public int getOp2() {
		return op2;
	}
	
	public void setOp2(int op2) {
		this.op2 = op2;
	}
	
	public String getOperator() {
		return operator;
	}
	
	public void setOperator(String operator) {
		this.operator = operator;
	}
	
	private int add(int a, int b) {
		return a + b;
	}
	
	private int sub(int a, int b) {
		return a - b;
	}
	
	private int mult(int a, int b) {
		return a * b;
	}
	
	private int div(int a, int b) {
		return a / b;
	}
	
	public int calc() {
		switch(operator) {
		case "+":
			result = add(op1, op2);
			break;
		
		case "-":
			result = sub(op1, op2);
			break;
		
		case "*":
			result = mult(op1, op2);
			break;
		
		case "/":
			result = div(op1, op2);
			break;
		}
		return result;
	}
}