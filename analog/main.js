setInterval(() => {
    var d=new Date();
    hr=d.getHours();
    min=d.getMinutes();
    sec=d.getSeconds();
    hr_rot=hr*30+min/2;
    min_rot=6*min;
    sec_rot=6*sec;
    document.getElementById("a4").style.transform=`rotate(${hr_rot}deg)`;
    document.getElementById("a5").style.transform=`rotate(${min_rot}deg)`;
    document.getElementById("a6").style.transform=`rotate(${sec_rot}deg)`;


}, 1000);