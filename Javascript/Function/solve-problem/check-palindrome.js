
// function checPalindrome(str){
//     let String = str.split('').reverse().join('') ;
//     if (String == checPalindrome){
//         console.log(str, "Is Palindrome")
//     }
// }

// const result = checPalindrome('pop')
// console.log(result)



let str = 'pon';

function checkpalindrome(){
    let opp = str.split("").reverse().join("");
    if (opp === str){
        console.log( str,"Palindrome")
    }else{
        console.log(str,"is not palindrom")
    }
}

checkpalindrome();


// check undefined : - 
// let variable ;
// console.log(variable)