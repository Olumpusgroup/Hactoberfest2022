function towerBuilder(nFloors) {
    var str = " "
    var Rep = " "
var res = [ ]
var count=0
var j =0 
for(let i=0;i<nFloors;i++)
{
    str = ""
    for(let j=0;j<=(i+count);j++)
    {
        str += "*"
   //     console.log(str);
    }
    res.push(str)
    // console.log(res);
    count+=1
  //  console.log(count);
}

for(let i=nFloors-1;i>0;i--)
{
    res[j] = (Rep.repeat(i)+ res[j]+ Rep.repeat(i))
    j+=1
}

console.log(res);
}

nFloors = 3;
towerBuilder(nFloors)