<!-- 20200997 컴퓨터학과 이미지 chrome -->
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Session Object 01</title>
</head>
<body>
<%
	String username = (String)session.getAttribute("username");

	if(username != null)
		out.println("<form action='session_02.jsp'>");
		session.setAttribute("username", username); 
%>
<div>
	<form name="fomr1" method="POST" action="session_02.jsp">
		아이디: <input type="text" name="username"><br><br>
		비밀번호: <input type="password" name="uwerpw"><br><br>
		<input type="submit" value="로그인"> <input type="button" value="취소">		
	</form>
</div>
</body>
</html>