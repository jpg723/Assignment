<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%request.setCharacterEncoding("utf-8"); %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<h2>EL의 param2</h2>
<form method="post" action="el_param2_2.jsp">
	아이디 : <input type="text" name="id" size="15"><br><br>
	비밀번호 : <input type="text" name="pw" size="15"><br><br>
	<input type="checkbox" name="hobby" value="뉴스">뉴스
	<input type="checkbox" name="hobby" value="맛집">맛집
	<input type="checkbox" name="hobby" value="책">책
	<input type="checkbox" name="hobby" value="영화">영화
	<input type="checkbox" name="hobby" value="여행">여행
	<br><br>
	<input type="submit" value="가입하기">
	<input type="reset" value="다시작성">
</form>

</body>
</html>