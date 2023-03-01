<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>greeting message</title>
</head>
<body>
	<h3>greeting.jsp 에서 출력한 메시지 입니다.</h3>
	<%
		out.println(request.getParameter("name") + "님 환영합니다." );
		out.println("<br>");
		out.println("오늘은 " + request.getParameter("date") + "입니다." );
	%>
</body>
</html>