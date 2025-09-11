
// sum of array - using function -------


function sumOfarray(nembers){
    let sum = 0;
    for (const number of numbers){
        // console.log(number);
        sum = sum + number;
    }
    return sum ;

}

const numbers = [10,25, 41, 50];
const sum = sumOfarray(numbers);
console.log(sum)