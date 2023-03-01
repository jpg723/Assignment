<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>ch06 : login.jsp</title>
<style>
	div {text-align:center;}
</style>
</head>
<body>
<%
	String username = (String)session.getAttribute("username");  
	if (username!=null){
%>
<form action="logout.jsp">
	<%=username %>님 로그인
	<input type="submit" value="로그아웃">
</form>
<%
	}else {
%>
<div>
	<h2>로그인</h2>
	<form name="form1" method="POST" action="login.jsp">
		<input type="text" name="username" placeholder="아이디입력" />
		<input type="password" name="userpw" placeholder="비밀번호"/>
		<input type="submit" value="로그인"/>
	</form>
</div>
<%
}
%>
</body>
</html>