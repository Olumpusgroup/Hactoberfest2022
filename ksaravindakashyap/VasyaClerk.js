//THERE WAS A PROBLEM IN UNDERSTANDING QUESTION - 17/7

function tickets(peopleInLine){
    var count = 0;
    for(let i=0; i< peopleInLine.length; i++)
    {
        if(peopleInLine[i] === 25)
        {
            count +=25
            console.log("25 ->" + count);
        }
        else{
            if(count===0){
                //console.log("NO");
                return "NO"
            }
            else if(peopleInLine[i] === 50){
                temp = peopleInLine[i] -25
                if(count>=temp){
                    count+=25
                }else{
                    return "NO"
                }
            }else if(peopleInLine[i] === 100){
                temp = peopleInLine[i] -25
                if(count>=temp){
                    count+=25
                }else{
                    return "NO"
                }
            }
        }
    }
    return "YES"

  }

peopleInLine = [ 25, 50, 25, 50, 100, 25, 25, 50 ]
var result = tickets(peopleInLine)
console.log(result);