<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>ch: 주소록</title>
<style>
	div	{
		text-align: center;
	}
	table {
		width: 150px;
		text-align: center;
		margin-left: auto;
		margin-right: auto;
	}
	table, td {
		border: 1px solid black;
		border-collapse: collapse;
	}
	table {
		width: 260px;
	}
	td {
		text-align: left;
	}
	.box{
		background-color: #d6f0ff;
	}
	
</style>
</head>
<body>
<div>
	<h1 style="font-weight: bold;">주소록 등록</h1>
	<hr>
	<form method="post" action="addr_add.jsp" name="form1">
		<table>
			<tr>
				<td>이 름</td>
				<td><input type="text" name="username" size=26 class="box"></td>
			</tr>
			<tr>
				<td>전화번호</td>
				<td><input type="text" name="tel" size=26 class="box"></td>
			</tr>
			<tr>
				<td>이메일</td>
				<td><input type="text" name="email" size=26 class="box"></td>
			</tr>
			<tr>
				<td>성별</td>
				<td>
					<select name="gender">
						<option value="여" selected>여</option>
						<option value="남">남</option>
					</select>
				</td>
			<tr>
				<td>그룹</td>
				<td>
					<select name="group">
						<option value="가족">가족</option>
						<option value="친구" selected>친구</option>
						<option value="직장">직장</option>
					</select>
				</td>
			</tr>
			<tr>
			<td colspan="2">
				<input type="submit" name="login" value="로그인"> 
				<input type="reset" name="reset" value="취소">
			</td>
			</tr>
		</table>
	</form>
</div>
</body>
</html>