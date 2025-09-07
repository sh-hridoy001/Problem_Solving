
const indentity = {
    name: 'sazzad',
    age: 19,
    proffession: 'web developer',
    'marrital status': 'Single',
    dream: 'become a programmer',
}

//for accessing every document 
console.log(indentity)

// access just a value from this object
console.log("Direct access in console.")
console.log(indentity.name);
console.log(indentity.proffession);

// can acces also using another variable
console.log("Using defined variable.")
const sopno = indentity.dream ;
console.log(sopno);


// if the property defined using space we have to use third bracket
console.log("If use space in Properties, You have access like this.")
console.log(indentity['marrital status']);