// first do the condition using ternary:

let price = 700 ;
const isLeader = true ;

if (isLeader == true){
    if (price > 1000){
        price = price / 2 ;
        console.log("Sir ,You have to pay only : ", price)
    }else{
        price = 0 ;
    }
}else{
    price = price + 100 ;
    console.log("Your price :", price)
}