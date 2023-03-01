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
	
	table{
		margin: auto;
	}
	table, td, th{
		border : 1px solid black;
		border-style: hidden;
	}
	
	td.t1{
		whidth: 300px;
		font-size: 10px;
		padding-left: 20px;
		padding-right: 20px;
	}
	
	td.t2{
		width: 30px;
	}
	
	ul, ol{
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
	<span><%@include file="menu.jsp" %></span>
	<p>
	<table>
		<tr>
			<td class="t1"><%@include file="news.jsp" %></td>
			<td class="t2">&nbsp;</td>
			<td class="t1"><%@include file="shopping.jsp" %></td>
		</tr>
	</table>
</div>
</body>
</html>