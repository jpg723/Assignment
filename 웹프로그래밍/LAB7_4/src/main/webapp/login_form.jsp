<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>LAB7_4 forward</title>
</head>
<body>
	<%
	    String msg = request.getParameter("msg");
	
	    if(msg != null){
	    	out.println(msg);
	    }
	%>
	<form action="login.jsp" method="post">
		<br>
		<input type="text" name="id" placeholder="아이디" onfocus="this.placeholder">
		<p> <input type="text" name="pw" placeholder="비밀번호" onfocus="this.placeholder">
		<p> <input type="submit" value="로그인"> <input type="reset" value="다시입력">
	</form>
</body>
</html>