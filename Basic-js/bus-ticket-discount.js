/***

Ticket fare Calculator
    - Children (age < 10): free
    - Students get a 50% discount
    - Senior citizens (age >= 60) gets a 15% Discount
    - Otherwise Regular ticket fare 800 tk
*/

const isChildren = false ;
const isStudent = true ;
const isSenior = true ;
const ticket = 800 ;

// Conditional operation

if (isChildren){
    console.log("Free . No ticket needed.")
}else if (isStudent){
    console.log("You got 50% discount")
}else if (isSenior){
    console.log("You gets a 15% discount.")
}else{
    console.log("Regular ticket fare 800 tk")
}
