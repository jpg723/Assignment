<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Application Object 01</title>
</head>
<body>
<%
	String username = (String)session.getAttribute("username");
	String time = (String)session.getAttribute("time");
	application.setAttribute("count", 1);
	
	if(username != null)
		out.println("<form action='application_02.jsp'>");
		session.setAttribute("username", username); 
%>
<div>
	<form name="fomr1" method="POST" action="application_02.jsp">
		아이디: <input type="text" name="username"><br><br>
		원하는 세션 지속시간(분): <input type="text" name="time"><br><br>
		<input type="submit" value="로그인"> <input type="button" value="취소">		
	</form>
</div>
</body>
</html>