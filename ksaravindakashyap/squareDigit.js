function squareDigits(num){
     var holder1 = num.toString()
    var holder2 = holder1.split('')
    for(let i=0;i<(holder2.length);i++)
    {
        holder2[i] =  (holder2[i]**2)
    }
    var holder3 = parseInt(holder2.join(''))
    return holder3;
  
}