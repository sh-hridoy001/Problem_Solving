
function dubbleOrTripple(number, boolean){
    if ( boolean === true){
        // console.log(number * 2);
        const result = number * 2 ;
        return result ;
    }else {
        // console.log(number * 3)
        const result = number * 3 ;
        return result ;
    }
}

console.log(dubbleOrTripple(5, true), 'double kora holo.');
console.log(dubbleOrTripple(5, false) , ' tripple kora holo.');

