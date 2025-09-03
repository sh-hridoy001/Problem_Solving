
/***

Subtask-1:

Display sum of all the odd numbers from 91 to 129.

 */


//using for loops :
let sum = 0;

for(let num = 91 ; num <= 129 ; num = num + 2){
    console.log(num);
    sum = sum + num ;
}
console.log("Sum of these numbers :", sum)

//using while loops :
let n = 91 ;
let Sum = 0 ;
while(n<=129){
    console.log(n)
    Sum = Sum + n ;
    n = n + 2 ;
}
console.log("sum of these numbers :",Sum)

/***
Subtask-2:

Display sum of all the even numbers from 51 to 85.

 */

//for loops :
let add = 0;
for (let n = 50 ; n<=84 ; n = n + 2){
    console.log(n)
    add = add + n ;
}
console.log("Sum of the even num : ",add)


// let num = 50 ;
// num %2==0 ? console.log("Even") : console.log("Odd") 