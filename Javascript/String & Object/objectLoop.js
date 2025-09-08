
const mobile = {
    brand: 'Vivo',
    price: 9999,
    version: 1.0 ,
    isOld: true,
    camera: '10MP',
    display: '6 inch.'
}

// // " for of " is use for Array. And for in use for String :

for (const property in mobile){
    console.log(property);
    console.log(mobile[property]);
}

// // another way to looping a string .
// const key = Object.keys(mobile) //it is converting string to array.
// console.log(key)

// for (const Property of key){
//     console.log(Property, " : ", mobile[Property])
// }

