/*** 

BMI Calculator and Health Category

Create a JavaScript program that calculates the Body Mass Index (BMI) and assigns a health category based on the BMI value. Use nested if-else statements to determine the health category.

    - Calculate BMI using the formula: BMI = weight (kg) / (height (m))^2
    - BMI < 18.5, you are underweight.
    - BMI >= 18.5 and BMI <=24.9, you are normal.
    - BMI >=25 and BMI <= 29.9, you are overweight.
    - Otherwise, you are obese.

*/

// if (BMI < 18.5 ){
//     console.log("You are Underweight.")
// }else{
//     if(BMI >= 18.5 && BMI <= 24.9){
//         console.log("You are Normal")
//     }else{
//         if(BMI >= 25 && BMI <= 29.9){
//             console.log("You are overweight.")
//         }else{
//             console.log("You are obese.")
//         }
//     }
// }



// // Find the BMI :
// console.log("Your BMI is : ", BMI)

// ternary operation   :
//           ?             :             ;


// Done it just for our operation ; OPTIONAL .

// BMI >= 25 && BMI <= 29.9 ? console.log("You are overweight.") : console.log("You are obese.")

// BMI >= 18.5 && BMI <= 24.9 ? console.log("You are Normal") :


// Define the variable :
const weight = 20 ;
const height = 1.7 ;

const BMI = (weight /  (height**2)) ;
BMI < 18.5 ?  console.log("You are Underweight.")  : BMI >= 18.5 && BMI <= 24.9 ? console.log("You are Normal") : BMI >= 25 && BMI <= 29.9 ? console.log("You are overweight.") : console.log("You are obese.")