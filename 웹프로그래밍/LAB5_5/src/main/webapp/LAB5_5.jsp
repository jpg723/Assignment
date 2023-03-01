<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>이미지 리스트</title>
<style>
ul li{
	list-style: none;
	border-bottom: 1px solid black;
}

span.s1{
	front-size: 16px;
	font-weight: bold;
	color: green;
}

ul li span{
	margin: 0px 150px 40px 30px;
	vertical-align: middle;
}

img{
	width: 100px;
	height: 100px;
	text-align: center;
	margin-right: 150px;
	vertical-align: middle;
}
textarea{
	vertical-align: middle;
}
</style>
</head>
<body>
	<%
		String headerArr[] = {"이미지", "이미지명", "설명"};
		String imgArr[] = {"smile.jpg", "star.jpg", "clover.jpg", "heart.jpg", "sad.jpg"};
		String captionArr[] = {"미소", "별", "클로버", "하트", "슬픔"};
		
		out.println("<ul>");
		out.println("<li class=\"List-1\">");
		
		for(int i = 0; i < headerArr.length; i++){
			out.println("<span class=\"s1\">[" + headerArr[i] + "]</span>");
		}
		out.println("</li>");
		
		for(int i = 0; i < imgArr.length; i++){
			out.println("<li>");
			out.println("<img src= image/" + imgArr[i] + ">");
			out.println("<span>" + captionArr[i] + "</span>");			
			out.println("<textarea rows=5 cols=50>이 이미지는...</textarea>");
			out.println("</li>");
		}
		out.println("</ul>");
	%>
</body>
</html>