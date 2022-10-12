// Sum of Pairs
// Given a list of integers and a single sum value, return the first two values (parse from the left please) in order of appearance that add up to form the sum.

// sum_pairs([11, 3, 7, 5],         10)
// #              ^--^      3 + 7 = 10
// == [3, 7]

// sum_pairs([4, 3, 2, 3, 4],         6)
// #          ^-----^         4 + 2 = 6, indices: 0, 2 *
// #             ^-----^      3 + 3 = 6, indices: 1, 3
// #                ^-----^   2 + 4 = 6, indices: 2, 4
// #  * entire pair is earlier, and therefore is the correct answer
// == [4, 2]

// sum_pairs([0, 0, -2, 3], 2)
// #  there are no pairs of values that can be added to produce 2.
// == None/nil/undefined (Based on the language)

// sum_pairs([10, 5, 2, 3, 7, 5],         10)
// #              ^-----------^   5 + 5 = 10, indices: 1, 5
// #                    ^--^      3 + 7 = 10, indices: 3, 4 *
// #  * entire pair is earlier, and therefore is the correct answer
// == [3, 7]
// Negative numbers and duplicate numbers can and will appear.

// NOTE: There will also be lists tested of lengths upwards of 10,000,000 elements. Be sure your code doesn't time out.

// function sumPairs(ints, s) {
//     let flag =0;
//     for(let i=0;i<ints.length;i++)
//     {
//         if((ints[i] + ints[i+1]) === s)
//         {
//             //console.log([ints[i] , ints[i+1]]);
//             return ([ints[i] , ints[i+1]])
//         }
//     }
//     for(let i=0;i<ints.length;i++)
//     {
//         for(let j=i+1;j<ints.length;j++)
//         {
            
//             if((ints[i] + ints[j]) === s)
//             {
//                 flag = 1;
//                 if((ints[i] + ints[j]) === 0)
//                 {
//                     //console.log('[0,0]');
//                     return [0, 0]
//                 }
//                 console.log([ints[i] , ints[j]]);
//                // console.log([ints[j]]);
//                // console.log([(ints[i],ints[j])]);
//                 return ([ints[i] , ints[j]])
//             }
//         }
//     }
//     if(flag === 0)
//     {
//         console.log("undefined");
//         return'undefined' ;
//     }
//   }

//---------------------less time complexity


function sumPairs(ints, s) {
    if(ints.length<2)
    {
        return undefined;
    }
    let init = new Set()
    init.add(ints[0])
    for(let i=1;i<ints.length;++i)
    {
        let needed = s - ints[i]
        if(init.has(needed)){
            return ([needed,ints[i]])
        }
        init.add(ints[i])
    }
    return undefined
}






ints = [10, 5, 2, 3, 7, 5]
s = 10
//[3, 7]
let res = sumPairs(ints,s)
console.log(res);