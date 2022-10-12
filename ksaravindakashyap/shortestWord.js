// Simple, given a string of words, return the length of the shortest word(s).
// String will never be empty and you do not need to account for different data types


function findShort(s){
    let list = s.split(' ') 
    // console.log(list);
    var count = list[0].length
    // console.log(count);
    list.forEach(sLength => 
        {
            if(count > sLength.length)
            {
                count = sLength.length
            }
        })
        return count
    }
    
//s = "bitcoin take over the world maybe who knows perhaps" //This is an example string
findShort(s)

