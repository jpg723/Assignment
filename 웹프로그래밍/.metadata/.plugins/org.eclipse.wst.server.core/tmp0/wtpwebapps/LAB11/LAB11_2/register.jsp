<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%request.setCharacterEncoding("utf-8"); %>
<jsp:useBean id="bean" class="labhw11.LoginBean" />
<jsp:setProperty property="*" name="bean"/>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>LAB11_2</title>
</head>
<body>
<div align=center>
	<h1>등록내용</h1>
	이름 : <jsp:getProperty property="id" name="bean"/><br>
	전화번호 : <jsp:getProperty property="pw" name="bean"/><br>
	이 메 일 : <jsp:getProperty property="email" name="bean"/><br>
	성별: <%=bean.getGender() %><br>
	생 일: <jsp:getProperty property="birth" name="bean"/><br>
	<hr>
	<%	
		String age = " ";
		int gender = Integer.parseInt(bean.getGender());
		String gen = " ";
		
		if(bean.isGrownUp() == false)
			age = "성인이 아닙니다";
	
		else
			age = "성인입니다";
		
		if(gender == 1)
			gen = "여성이고, ";
		
		else
			gen = "남성이고, ";
		
		out.println(bean.getId() + "씨는 " + gen + age);
	%>
</div>
</body>
</html>