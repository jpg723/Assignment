<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%!
	int num1 = 0, num2 = 0;
	int result = 0;
	String op = "";
	
	public int calculator(){
		if(op.equals("+")){
			result = num1 + num2;
		}
		else if(op.equals("-")){
			result = num1 - num2;
		}
		else if(op.equals("*")){
			result = num1 * num2;
		}
		else if(op.equals("/")){
			result = num1 / num2;
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
<title>계산기</title>
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
					<input type="text" name="num1" value=<%=num1 %> size="10" readonly>
					<p><%=op %></p>
					<input type="text" name="num2" value=<%=num2 %> size="10" readonly>
					<p>=</p>
					<input type="text" name="result" value=<%=calculator() %> size="10" readonly>
				</form>
			</td>
		</tr>
		<tr><th colspan="2" class= "box1">&nbsp;</th></tr>	
	</table>
</div>
</body>
</html>