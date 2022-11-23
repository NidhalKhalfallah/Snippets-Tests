function age(){
    return((today.getFullYear())-1980);
    }
function calculateage(data){
    //if age is in data then define age from data else use the function age
    if(data.age){
        return data.age;
    }
    else{
        return age();
    }