<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>LAB8_4</title>
</head>
<body>
<form action="page_control_02.jsp" method="post">
	아이디: <input type="text" name= username>
	비밀번호: <input type="password" name= password>
	<input type="submit" value="forward 전송">
</form>
<form action="page_control_03.jsp" method="get">
	<p>아이디: <input type="text" name= username>
	비밀번호: <input type="password" name= password>
	<input type="submit" value="sendRedirect 전송">
</form>
</body>
</html>