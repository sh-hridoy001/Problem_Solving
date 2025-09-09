//while loop----------

let num = 0 ;
while (num <= 20 ){
    num ++ ;
    if (num % 2 == 0){
        continue ;
    }
    console.log(num);
    
}


//for loop :

for (let n = 0; n < 20 ; n++){
    if (n %2 == 1){
        continue;
    }
    console.log(n)
}


//  continue : skip the number .
// break : dont run over the number .