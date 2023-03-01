<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%!

	//멤버변수
	int num1, num2 = 0;
	int result = 0;
	String op="";
	
	//연산자별 처리를 위한 메서드 선언
	public int calculator(){
		if (op.equals("+")){
			result = num1+num2;
		}else if (op.equals("-")){
			result = num1 - num2;
		}else if (op.equals("*")){
			result = num1 * num2;
		}else if (op.equals("/")){
			result = num1/num2;
		}
		return result;
	}
%>
<%
	if(request.getMethod().equals("POST")){
		num1 = Integer.parseInt(request.getParameter("num1"));
		num2 = Integer.parseInt(request.getParameter("num2"));
		op = request.getParameter("operator");
	}
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<style>
	div{
		align: center;
	}
	td {
		border: 0.5px solid #7d4f40;
	}
	table {
		width: 500px;
		height: 300x;
	}
	
	td.box1 {
		width: 500px;
		height: 80px;
		background-color: #ffdb78;
		font-size: 75px;
		text-align: center;
	}
	
	td.box2 {
		width: 250px;
		height: 350px;
		text-align: center;
	}
	
	input {
		text-align: center;
	}
</style>
<title>Calculator</title>
</head>
<body>
<div align="center">
	<table>
	<tr>
		<td colspan="2" class= "box1">CalCuLaTor</td>
	</tr>
	<tr>
		<td colspan="1" class="box2"><img src= "image/calculator.png" width="100%"></td>
		<td colspan="1" class="box2">
			<form name=form1 method=post action="calc_result.jsp">
				<input type="text" name="num1" size=15 value="0"><br><br>
				<select name="operator">
					<option selected>+</option>
					<option>-</option>
					<option>*</option>
					<option>/</option>
				</select><br><br>
				<input type="text" name="num2" size="15" value="0" ><br><br>
				<input type="submit" value="=" name="B1"><br><br>
				<input type="text" name="result" size="10" disabled>
			</form>
		</td>
	</tr>
	<tr><th colspan="2">&nbsp;</th></tr>
</table>
</div>
</body>
</html>