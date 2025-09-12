

// arrray operation-----------

const SUM = 0 ;
function arraySum(Numbers){
    for (const sum of Numbers){
        SUM = SUM + sum ;
    }
    return SUM ;
}

const Numbers = [ 10, 15, 42];
const Sum = arraySum(Numbers);
console.log(Sum);