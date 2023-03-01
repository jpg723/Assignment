<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<style>
table {
	border-collapse: collapse;
	width: 540px;
}

table, th, td {
	border: 1px solid gray;
	font-weight: bold;
}

th {
	font-size: 20;
	background-color:#ededed;
}
tr {
	height: 23px;
}

input.imageAlign{
	vertical-align: middle;
}
</style>
<title>회원 가입</title>
</head>
<body>
	<img src= "image/background.jpg" width="100%">
	<form method="post" action="register.jsp">
	<div align="center">
		<table>
			<tr>
				<th colspan="11">회원 가입</th>
			</tr>
			<tr>
				<th>아이디</th>
				<td>
					<input type="text" name="id" size="19">
					<input type="image" src="image/checkbutton.jpg"class="imageAlign" height="23">
				</td>
			</tr>
			<tr>
				<th>패스워드</th>
				<td>
					<input type="password" name="pw" size="20">
				</td>
			</tr>
			<tr>
				<th>성별</th>
				<td><input type="radio" name="gender" value="0">남 
				<input type="radio" name="gender" value="1" checked>여</td>
			</tr>
			<tr>
				<th>국적</th>
				<td>
					<input type="text" name="nation">
					<input type="button" value="국적변경">
				</td>
			</tr>
			<tr>
				<th>휴대폰</th>
				<td>
					<select name= "phone">
						<option value= 1 selected>010</option>
						<option value= 2>011</option>
						<option value= 3>017</option>
						<option value= 4>070</option>
						<option value= 5>080</option>
					</select>
					- <input type="text" name="phone" size="6">
					- <input type="text" name="phone" size="6">
				</td>
			</tr>
			<tr>
				<th>이메일</th>
				<td><input type="text" name="email" size="50"></td>
			</tr>
			<tr>
				<th>생일</th>
				<td><input type="date" name="birth"></td>
			</tr>
			<tr>
				<th>관심분야</th>
				<td>
					<input type="checkbox" name="hobby" value="뉴스">뉴스
					<input type="checkbox" name="hobby" value="맛집" checked>맛집 
					<input type="checkbox" name="hobby" value="책">책 
					<input type="checkbox" name="hobby" value="영화">영화 
					<input type="checkbox" name="hobby" value="여행">여행
				</td>
			</tr>
			<tr>
				<th>가입인사</th>
				<td><textarea cols="55" rows="5">회원들에게 간단한 가입인사를 남겨주세요</textarea></td>
			</tr>
			<tr>
				<th>증명사진</th>
				<td><input type="file" name="photo" size="40"></td>
			</tr>
			<tr>
				<th colspan="11">
				<input type="submit" value="가입하기" onclick="document.location='member4.html'">
				<input type="reset" value="다시작성">
				</th>
			</tr>
		</table>
	</div>
	</form>
</body>
</html>