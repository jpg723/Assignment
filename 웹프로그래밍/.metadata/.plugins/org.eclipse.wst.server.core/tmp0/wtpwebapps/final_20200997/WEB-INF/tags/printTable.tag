<%@ tag language="java" pageEncoding="UTF-8"%>
<jsp:useBean id="bean" class="finalBean.LoginBean" />
<jsp:setProperty property="*" name="bean"/>
<h2><jsp:doBody/></h2>
이름:${ bean.getId()}님은 ${ bean.getColor()}색을 좋아합니다.<p><p>
${ bean.getId()}님은
<%	
	String age = " ";
				
	if(bean.isGrownUp() == true)
	age = "성인이 아닙니다";
			
	else
		age = "성인입니다";
				
	out.println(" " + age);
%>
