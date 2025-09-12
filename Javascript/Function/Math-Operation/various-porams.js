

function evenSizedstr(str){
    const size = str.length ;
    console.log(str,'. Ekhane', size ,'ta word ache.')
    if(str %2===0){
        console.log("Even String size")
    }else{
        console.log("Odd str size.")
    }
}

evenSizedstr('Chittagong');
evenSizedstr('Dhaka');