
// discount checking and find out the discount price

const price = 7000 ;
if (price >= 5000){
    const discount = price * 10/100 ;
    console.log("You got discount :",discount ,"taka")
    const totalprice = (price - discount) ;
    console.log("You have to pay only :" ,totalprice)
} else {
    console.log("Sorry you have to pay all amount.")
}