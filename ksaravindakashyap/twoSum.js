function twoSum(numbers, target) {
    for (let i = 0; i < numbers.length; i++) {
        for(let j=0;j<numbers.length;j++){
            if((numbers[i] + numbers[j]) === target){
              if(i!==j)
                {
                console.log(i,j);
              var b = i
              var c = j
              break;
                }
              break;
            } 
            else{
                continue;
            }
        }   
    }
  return [b,c]
}

numbers = [1, 2, 3] 
target = 4

console.log(twoSum(numbers,target))