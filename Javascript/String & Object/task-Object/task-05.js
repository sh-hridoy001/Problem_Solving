
// Loop through an object and print the key-value pairs with their types
/**
    Output :-
    key: name | type:  string
    key: age | type:  number
    key: city | type:  string
    key: isStudent | type:  boolean
 */

let myObject = {
    name: 'John Doe',
    age: 25,
    city: 'Example City',
    isStudent: true
};

const keys = Object.keys(myObject);
// console.log(keys," : ", myObject[keys] )

for (const Property of keys){
    // console.log(Property," : ",myObject[Property])
    console.log("key:",Property, " | type: ", typeof myObject[Property])  //typeof myObject[key]
}

// console.log(typeof myObject.isStudent) ( we can find single typeof An object)