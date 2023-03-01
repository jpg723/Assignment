<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!-- 컴퓨터학과 20200997 이미지 / 크롬-->
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<style>
table{
	border-collapse: collapse;
	width: 550px;
}
table, th, td {
	font-weight: bold;
	font-size: 12px;
	height: 30px;
}
</style>

<title>이클래스 로그인</title>
</head>
<body>
<form action="result.jsp">
	<div align="center">
		<img src="image/background.jpg" width="100%">
		<h2>로그인</h2>
		<hr></hr>
		
		<table>
			<tr>
				<td rowspan="5"><img src="image/login.png" height="150px" width="230px"></td>
				<td colspan="4">회원님의 아이디와 비밀번호를 정확히 입력하세요.</td>
			</tr>
			<tr>
				<th colspan="4">
					<select name= "type">
						<option value= "학부생" selected>학부생</option>
						<option value= "대학원생">대학원생</option>
						<option value= "교직원">교직원</option>
					</select>
				</th>
			</tr>
			<tr>
				<td colspan="1">아이디</td>
				<td colspan="3"><input type="text" name="strID" size="18" style="background-color: #fff47d" autofocus /></td>
			</tr>
			<tr>
				<td colspan="1">비밀번호</td>
				<td colspan="3"><input type="password" name="strPwd" size="19" maxlength="10" style="background-color: #fff47d"></td>
			</tr>
			<tr>
				<td colspan="4">
					<input type="submit" value="로그인">
					<input type="button" value="가입하기">
				</td>
			</tr>
		</table>
	</div>
</form>
</body>
</html>