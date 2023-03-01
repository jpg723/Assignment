<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>login_main.jsp</title>
<%
	String userid = (String)session.getAttribute("userid");
	String userpw = (String)session.getAttribute("userpw");

	if(userid != null){
		out.println("<form action='login.jsp'>");
		session.setAttribute("userid", userid); 
		session.setAttribute("userpw", userpw); 
	}
%>
</head>
<body>
<div>
	<form name="fomr1" method="POST" action="login.jsp">
		아이디: <input type="text" name="userid">&nbsp;
		비밀번호: <input type="password" name="userpw">&nbsp;
		<input type="submit" value="로그인">	
	</form>
</div>
</body>
</html>