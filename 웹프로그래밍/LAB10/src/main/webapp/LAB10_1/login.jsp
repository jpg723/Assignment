<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>login.jsp</title>
</head>
<body>
<%
	request.setCharacterEncoding("UTF-8");
	
	String username = (String)session.getAttribute("user");

	if(username != null){
		out.println("<div id='logout'>");
		out.println("<form action='checker.jsp'>");
		out.println(username + "님 환영합니다.<br><br>");
		out.println("<input type='submit' value='로그아웃'>");
		out.println("<input type='hidden' name='action' value='logout'>");
		out.println("</form>");
		out.println("</div>");
	}
	
	else{
		out.println("<form name='form1' method='POST' action='checker.jsp'>");
		out.println("아이디 : " + "<input type='text' name='username'><br><br>");
		out.println("비밀번호 : " + "<input type='password' name='userpw'><br><br>");
		out.println("<input type='hidden' name='action' value='login'>");
		out.println("<input type='submit' value='로그인'>");
		out.println("</form>");		
	}
%>
</body>
</html>