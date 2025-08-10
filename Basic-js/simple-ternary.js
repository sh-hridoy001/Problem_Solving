/***

you have two numbers in two variables, called: num1, num2

now declare a variable called result. 
if num1 is bigger than num2 then result will be double of num1. if not, then the value of the variable result will be the sum of num1 and num2.

write a simple if-else. 

also, write it using ternary operator.

 */

// Way One -----------
const num1 = 90 ;
const num2 = 85 ;

if (num1 > num2){
    console.log(num1*2)

}else{
    console.log(num1 + num2) ;
}

// Ternary Operation,,,,,,,,WAY TWO------------

(num1 > num2) ? console.log(num1*2) : console.log(num1 + num2) 