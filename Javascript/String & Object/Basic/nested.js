const identity = {
    name: 'sazzad',
    age: 19,
    proffession: 'web developer',
    'marrital status': 'Single',
    dream: 'become a programmer',
    result: {
        gpa: 5 ,
        merrit: 'Top possition',
    }
}


// how can i access the GPA :
console.log(identity.result.gpa)

// we can also change the value of gpa :

identity.result.gpa = 4 ,
console.log(identity.result.gpa)

// we can also delete a property from a object :
delete identity.result;
console.log(identity)