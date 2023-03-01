var Links = {
  setColor:function(color){
    var alist = document.querySelectorAll('a');
    var i = 0;
    while(i < alist.length){
      alist[i].style.color = color;
      i = i + 1;
    }
  }
}
var Body = {
  setColor:function(color){
    document.querySelector('body').style.color = color;
  },
  setBackgroundSetColor:function(color){
    document.querySelector('body').style.backgroundColor = color;
  }
}
function nightDayHandler(self){
  if(self.value === 'night'){
    Body.setBackgroundSetColor('black');
    Body.setColor('white');
    self.value = 'day';

    Links.setColor('powderblue');
  }
  else {
    Body.setBackgroundSetColor('white');
    Body.setColor('black');
    self.value = 'night';

    Links.setColor('purple');
  }
}
