<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>include 지시어 테스트</title>
<style>
	div {
		text-align: center;	
	}
	
	table.t{
		margin: auto;
	}
	table.t, td, th{
		border : 1px solid black;
		border-style: hidden;
		width: 600px;
	}
	
	td.t1{
		width: 200px;
		font-size: 10px;
		padding-left: 20px;
		padding-right: 5px;
	}
	
	td.t2{
		width: 20px;
		border-style: hidden;
	}
	
	td.t3{
		width: 500px;
		font-size: 10px;
		padding-left: 5px;
		padding-right: 40px;
	}
	ul{
		padding-left: 25px;
	}
	
	li{
		text-align: left;
	}
</style>
</head>
<body>
<div>
	<h2>include 지시어 연습</h2>
	<hr>
	<table class="t">
		<tr>
			<td class="t1"><%@include file="calendar.jsp" %></td>
			<td class="t2">&nbsp;</td>
			<td class="t3"><%@include file="news.jsp"%></td>
		</tr>
	</table>
</div>
</body>
</html>