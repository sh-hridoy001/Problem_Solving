
// sort() : eta alpabet / number onujayi sajai lekhe . 

const Name = ['MD', 'Sazzad', 'Hossain', 'Hridoy','Developer','Programmer'];

const Nam = Name.sort();
// console.log(Nam)

const numbers = [1, 6 ,9 , 7 , 2, 5]; 
// console.log(numbers.sort()) // not work clearly, it will work when the number<10  :
const NNumbers = [ 100, 5, 47, 85 , 66 , 89 , 12 , 1 , 67, 25 , 3 , 8 ]
// const num = NNumbers.sort(function(a, b) {return (a - b)})
// console.log(num)

//  ekhon choto theke boro akare sajabo : shudhu just return a B- A kore dile hobe ;;

const num = NNumbers.sort(function(a, b) {return ( b - a)})
console.log(num)