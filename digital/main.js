setInterval(() => {
    var d=new Date();
    document.getElementById("w1").innerHTML=d.getHours();
    document.getElementById("w2").innerHTML=d.getMinutes(); 
    document.getElementById("w3").innerHTML=d.getSeconds();
}, 1000);

