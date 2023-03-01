<%@ tag language="java" pageEncoding="UTF-8"%>
<%@ attribute name="border"%>
<div align="center">
<h2><jsp:doBody/></h2>
<table border="${border}" width="500">
	<tr>
		<%
			int i = 0, j = 0;
				
			for(i = 2; i <= 5; i++){
				out.print("<td>");
				
				for(j = 1; j <= 9; j++)
					out.print(i + " * " + j + " = " + (i * j) + "<br>");
				
				out.print("</td>");
			}
		%>
	</tr>
	<tr>
		<%
			i = 0;
			j = 0;
				
			for(i = 6; i <= 9; i++){
				out.print("<td>");
				
				for(j = 1; j <= 9; j++)
					out.print(i + " * " + j + " = " + (i * j) + "<br>");
				
				out.print("</td>");
			}
		%>
	</tr>
</table>
</div>