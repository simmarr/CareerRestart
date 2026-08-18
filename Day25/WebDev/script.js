const startButton=document.getElementById("startButton");
const status=document.getElementById("status");

startButton.addEventListener("click",function(){
    status.textContent="Mission October Started!";
    status.classList.add("started");

});