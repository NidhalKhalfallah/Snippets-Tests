function age(){
    return((today.getFullYear())-1980);
    }
function calculateage(data){
    //if age is in data then define age from data else use the function age
    if(data.age){
        age=data.age;
    }else{
        age=age();
    }
    //if gender is in data then define gender from data else use the function