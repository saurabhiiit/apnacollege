  //1. Ways to print in Javascript
    // console.log("Hello world");
    // alert("Hello World");
    // document.write("Hello World");


    //2. Javascript console API
    // console.log("Hello World", 6+4 , "Another log");
    // console.warn("This is warning");
    // console.error("this is an error");
    // console.clear();
    // console.assert(4==6);

    //3. Javascript Variables
//   var number1 = 34;
//   var number2 = 56;

//   // console.log(number1 + number2);

// //   4. Datatypes in Javascript
// var str1 = "This is a string"; //string
// var num1 = 56.76; //number
// //objects
// var marks = {
//     ravi:34,
//     subham : 64,
//     harry:99
// }
// // console.log(marks);

// //booleans
// var a =true;
// var b= false;
// // console.log(a);

// // var und = undefined;
// var und;
// // console.log(und);

// var n=null;
// // console.log(n);

// var arr = [1,2,"bablu",4,5];
// // console.log(arr[2]);
// // console.log(arr);

// // Operators in Javascript 
// var a =100;
// var b=10;
// console.log("The value of a + b is ",a+b);
// console.log("The value of a + b is ",a-b);
// console.log("The value of a + b is ",a*b);
// console.log("The value of a + b is ",a/b);

// //Assignment Operators
// var c=b;
// c+=2;
// console.log(c);

// //Comparison operator
// // console.log(b==c)
// // console.log(b>c)
// // console.log(b<c)

// //Logical Operator
// // console.log(true && true);
// // console.log(true && false);
// // console.log(false && false);

// // console.log(true || true);
// // console.log(true || false);
// // console.log(false || false);

// console.log(!true);

// //Function in Javascript
// function avg(a,b){
//   return (a+b)/2;
// }
// c1 = avg(4,6);
// c2 =avg(5,8);
// // console.log(c1,c2);

// //Conditionals in Javascript
// var age=24;
// if(age>8){
//   console.log("Yor are not a kid")
// }
// else{
//   console.log("perfect age ")
// }


// function rasna(age){
//   if(age>18)
//   return true;
//   else
//   return false;
// }

// console.log(rasna(5));


//loops in Javascript

// var arr=[1,2,3,4,5,6,7];
// for(var i=0;i<arr.length;i++)
// {
//   console.log(arr[i]);
// }

// arr.forEach(function(elements){
//   console.log(elements)
// })

// let j=0;
// while(j<arr.length){
//   console.log(arr[j]);
//   j++;
// }

// let arr=["fan","camera",34,null];
//Array methods
// console.log(arr.length);
// arr.pop();
// console.log(arr);
 
// DOM manipulation
let elem = document.getElementById('click');
// console.log(elem);

let elemClass = document.getElementsByClassName("container")
// console.log(elemClass);

// elemClass[0].style.background = "yellow";
elemClass[0].classList.add("bg-primary");
elemClass[0].classList.add("text-success");
// elemClass[0].classList.remove("text-success");
// console.log(elemClass[0].innerHTML);
// console.log(elemClass[0].innerText);
// console.log(elem.innerHTML);
// console.log(elem.innerText);

// tn = document.getElementsByTagName('div');
// console.log(tn);
// createElement = document.createElement('p');
// createElement.innerText = "This is a created para";
// tn[0].appendChild(createElement);

// createElement2 = document.createElement('b');
// createElement2.innerText = "This is a created bold";
// tn[0].replaceChild(createElement2, createElement);
// removeChild(element); --->removes an element;

// function clicked(){
//   console.log("The button was clicked");
// }
// window.onload=function(){
//   console.log("The window was loaded");
// }

//Events in Javascript
// firstcontainer.addEventListener('click',function(){
//   document.querySelectorAll('.container')[1].innerHTML="<b>We have Clicked</b>";

// })

// let prevHTML = document.querySelectorAll('.container')[1].innerHTML;
//   firstcontainer.addEventListener('mouseup',function(){

//    document.querySelectorAll('.container')[1].innerHTML=prevHTML;

// })

// firstcontainer.addEventListener('mousedown',function(){

//   document.querySelectorAll('.container')[1].innerHTML="<b>We have clicked</b>";

// })


//Arrow functions
// function summ(a,b){
//   return a+b;
// }
// or
sum=(a,b)=>{
  return a+b;
}

logkaro=()=>{
  document.querySelectorAll('.container')[1].innerHTML="<b>set timeout fired</b>";
  console.log("I am your log");
}

// settimeout and setinterval
// setTimeout(logkaro,2000);
clr = setInterval(logkaro,2000);
// clearInterval(clr);
// clearTimeout(clr);

//Javascript localStorage
// localStorage.setItem('name','Harry');
// localStorage;
// localStorage.getItem('name');
// localStorage.clear();

//Json
// obj = {name:"Harry", length:1, a: {this: "that"}}
// jso = JSON.stringify(obj); 
// console.log(jso);
// console.log(typeof jso);
// parsed = JSON.parse(`{"name":"Harry","length":1,"a":{"this":"that"}}`)
// console.log(parsed);

//Template literals - Backticks
a= 34;
console.log(`This is my ${a}`);

