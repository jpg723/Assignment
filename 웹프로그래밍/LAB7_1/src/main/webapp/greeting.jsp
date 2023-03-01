<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<style>
	div {
		text-align : center;
	}
</style>
<title>greeting message</title>
</head>
<body>
<div>
	<h2>greeting.jsp 에서 출력한 메시지 입니다.</h2>
	<%
		out.println(request.getParameter("name") + "님 환영합니다." );
		out.println("<br>");
		out.println("오늘은 " + request.getParameter("date") + "입니다." );
	%>
</div>
</body>
</html>