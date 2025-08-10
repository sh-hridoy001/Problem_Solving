/***

if you get more then 80 then inside your friend score. 
    If your friend get more than 80. then go for a lunch. 
    if your friend get below 80 but greater than or equal 60 then tell your friend, good luck next time. 
    if your friend get less than 60 but more than or equal to 40 then, keep your friend's message unseen.
    if your friend get less than 40, block your friend
if you get less than 80 go to home and sleep and act sad

Note: 
use nested if-else-if-else
*/

git add .
git commit -m "Added new file"
git push



// define a variable :

const myMark = 90 ;
const friendMark = 75 ;

if (myMark >= 80){
    if (friendMark >= 80){
        console.log("Go for a launch.")
    }else if (friendMark <80 && friendMark >=60 ){
        console.log("Good luck next time.")
    }else if (friendMark <60 && friendMark >= 40){
        console.log("Massage Unseen.")
    }else if (friendMark <40 ){
        console.log("Block Your Friend.")
    }
}else{
    cconsole.log("Go to Home Sleep and Act Sad.")
}
