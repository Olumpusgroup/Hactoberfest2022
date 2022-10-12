function getSum( a,b )
{
    var sum =0
    if(a<=b)
    {
        for(let i=a;i<=b;i++)
        {
             sum += i;
        }
    }
    else {
        for(let i=a;i>=b;i--)
        {
             sum += i;
        }
    }
   return sum;
}

console.log(getSum(0,-1));