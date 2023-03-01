<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="labhw11.*" %>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="lect" class="labhw11.LectureBean"/>
<jsp:setProperty name="lect" property="*"/>
<jsp:useBean id="lm" class="labhw11.LectureManager" scope="application"/>
<%
	lm.add(lect);
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>시간표 작성</title>
</head>
<style>
	div{
		text-align:center;
	}
	ol {
		display: inline-block;
	}
	input {
		margin-left: 20px;
	}
	select {
		margin-right: 10px;
	}
</style>
<body>
<%
	out.println("<div>");
	out.println("<form name='form1' method='POST' action='LAB11_4.jsp'>");
	out.println("과목타입: " + "<select name='type'>");

	for(int i = 0; i < LectureBean.getTypenames().length; i++)
		out.println("<option value=" + i + ">" + LectureBean.getTypenames()[i] + "</option>");	
	out.println("</select>");
	
	out.println("과목명: " + "<select name='title'>");
	
	for(int i = 0; i < LectureBean.getTitlenames().length; i++)
		out.println("<option value=" + i + ">" + LectureBean.getTitlenames()[i] + "</option>");
	out.println("</select>");
	
	out.println("요일: " + "<select name='day'>");
	
	for(int i = 0; i < LectureBean.getDaynames().length; i++)
		out.println("<option value=" + i + ">" + LectureBean.getDaynames()[i] + "</option>");
	out.println("</select>");
	
	out.println("시간: " + "<select name='time'>");
	
	for(int i = 0; i < 6; i++)
		out.println("<option value=" + (i + 1) + ">" + (i + 1) + "</option>");
	out.println("</select>");
	
	out.println("연강: " + "<select name='consecutive'>");
	
	for(int i = 0; i < 4; i++)
		out.println("<option value=" + (i + 1) + ">" + (i + 1) + "</option>");
	out.println("</select>");
	
	out.println("<input type='submit' value='등록'>");
	out.println("</form>");
	out.println("<hr>");
	
	for(LectureBean l : lm.getLectureList()){
		out.println(LectureBean.getTypenames()[l.getType()]);
		out.println("/");
		out.println(LectureBean.getTitlenames()[l.getTitle()]);
		out.println("/");
		out.println(LectureBean.getDaynames()[l.getDay()]);
		out.println("/");
		out.println(l.getTime());
		out.println("/");
		out.println(l.getConsecutive());
		out.println("<br>");
	}
	
	out.println("</div>");	
%>
</body>
</html>