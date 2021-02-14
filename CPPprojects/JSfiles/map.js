// var person = [25,36,49,64] ;
// // console.log(person[3]) ;
// let newArr = person.map((elem , index, arr)=>
// {
//     console.log( Math.sqrt(elem)) ;
// });
// console.log (newArr);

// let x = person.filter(even => even > 36) ;
// console.log (x);


// let newArr1 = person.forEach((elem , index, arr)=>
// {
//     console.log( elem ) ;
// });

// console.log(Math.round(10.500))

// ******************************************
// const arr = [1,2, [ 3,4,[5,6 ,[7,8]]] ,9, 10, [11, 12, 13]] ;
// // for converting this array in 1 dimensional (flatten the array)
// const newArr = arr.flat(Infinity) ;
// console.log(newArr) ;

// ******************************************

const person = {name : "vikas" , id : 56 } ;
// const newArr = Object.entries(person) ; 
// console.log (newArr) ;  // [ 'name', 'vikas' ], [ 'id', 56 ]
const obj = Object.fromEntries(person);
console.log (obj) ;
