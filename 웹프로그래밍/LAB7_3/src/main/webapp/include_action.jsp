<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>LAB7_3</title>
<style>
	div.div {
		text-align: center;	
	}
	
	table.t{
		margin: auto;
	}
	table.t, td, th{
		border-style: hidden;
		width: 600px;
	}
	
	td.t1{
		width: 200px;
		font-size: 10px;
		padding-left: 50px;
		padding-right: 20px;
	}
	
	td.t2{
		width: 20px;
		border-style: hidden;
	}
	
	td.t3{
		width: 100px;
		font-size: 10px;
		padding-left: 5px;
		padding-right: 120px;
		padding-bottom: 20px;
	}

</style>
</head>
<body>
<div class = "div">
<h1>Include Action Practice</h1>
	<table class="t">
		<tr>
			<td class="t1">	
				<jsp:include page="calendar.jsp">
					<jsp:param name="YEAR" value="2020" />
					<jsp:param name="MONTH" value="2" />
				</jsp:include>
			</td>
			<td class="t2">&nbsp;</td>
			<td class="t3">
				<jsp:include page="news.jsp">
					<jsp:param name="TASK1" value = "" />
					<jsp:param name="TASK2" value="take a class" />
					<jsp:param name="TASK3" value="Homework" />
				</jsp:include>
			</td>
		</tr>
	</table>
</div>
</body>
</html>