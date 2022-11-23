function age(){
    return((today.getFullYear())-1980);
    }
function calculateage(data){
    //if age is in data then define age from data else use the function age
    if(data.length>0){
        age=data[0].age;
        return(age);