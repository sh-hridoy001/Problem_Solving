
const sentence = "I am learning web development";
let reverse = '';
for (const letter of sentence){
    console.log(letter); // that'll run one by one. 
    reverse = letter + reverse ;
}
console.log(reverse);