<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>final4</title>
</head>
<body>
<div>
<form name="form1" method="post" action="jstl_result.jsp">
	<h1>나 소개</h1>
	<hr>
	이름 : <input type="text" name="name"><p>
	생년월일 : <input type="date" name="birth"><p>
	좋아하는 과일:
	<input type="checkbox" name="fruit" value="사과">사과
	<input type="checkbox" name="fruit" value="딸기">딸기
	<input type="checkbox" name="fruit" value="귤">귤
	<input type="checkbox" name="fruit" value="키위">키위
	<input type="checkbox" name="fruit" value="수박">수박
	<p>
	좋아하는 색: 
	<select name="color">
		<option value="오렌지">오렌지</option>
		<option value="파랑">파란</option>
	</select>
	<p>
	<input type="submit" value="보내기">
</form>
</div>
</body>
</html>