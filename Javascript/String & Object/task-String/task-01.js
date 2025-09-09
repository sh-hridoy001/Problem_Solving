// Task: Count how many times 'a' appears

let word = "banana";
let letter = "a";
let count = 0;

for (let i = 0; i < word.length; i++) {
    if (word[i] === letter) {
        count++;
    }
}

console.log(letter + " appears " + count + " times.");
