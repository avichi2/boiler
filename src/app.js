


import * as ledstate from "./data.json" 
const fs =require('fs');

function process(){
    fs.readFile("./customer.json", "utf8", (err, jsonString) => {
        if (err) {
          console.log("File read failed:", err);
          return;
        }

        console.log(jsonString);
    var jsonobj=JSON.parse(jsonString);
    if(jsonobj.ledstate==1){
        document.getElementById("btn").innerHTML="off";
    }
      });


}