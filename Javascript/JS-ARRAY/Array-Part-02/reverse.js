
const numbers = [ 10, 11 , 12 , 13 , 14 , 15];

for (loop of numbers){
    // console.log(loop);
}

let reversed = numbers.reverse();
// console.log(reversed)
// console.log(numbers.reverse());


const revese_num = [];
for (let i = 0 ; i < numbers.length ; i ++){
    const num = numbers[i];
    revese_num.unshift(num);
}


// reverse side using last index :
const Numberss = [0,1,2,3,4,5,6,7,8,9];
const Numbers = ['MD', 'Sazzad', 'Hossain', 'Hridoy','Developer','Programmer'];

for (let n= Numbers.length - 1 ; n >0 ; n-- ){
    const num = Numbers[n];
    console.log(num);
    // console.log(n)   
}