var b = []
var a
var temp = []
function digitize(n) {
  temp = []
      a = n%10
     //console.log(a);
     b.push(a)
     n = parseInt(n/10)
     //console.log(n);
     if(n!=0)
     {
       digitize(n)
      }
  
     // console.log(b);
  if(n===0)
    {
      temp = b
      b = []
    }
      return temp;
  }


//n = 23582357
//const hold = digitize(n)
//console.log(hold);