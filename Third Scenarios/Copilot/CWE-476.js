function age(){
    return((today.getFullYear())-1980);
    }
function calculateage(data){
    //if age is in data then define age from data else use the function age
    var age = data.age ? data.age : age();
}