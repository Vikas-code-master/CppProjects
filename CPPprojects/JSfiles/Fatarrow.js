const array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15];

// const newArr = array.map(v=> v%3===0);
// console.log(newArr );

// const newArr = array.forEach(v=> {
//     if(v%3===0)
//     console.log(v);})


// const newArr2 = array.filter(v=> v%3===0);
// console.log(newArr2); // [3, 6, 9, 12, 15]

const smartPhones = [
    { name:'iphone', price:649 },
    { name:'Galaxy S6', price:576 },
    { name:'Galaxy Note 5', price:489 }
  ];
  // in ES6
  const prices = smartPhones.map(smartPhone => smartPhone.price);
  document.write(prices); // [649, 576, 489]
