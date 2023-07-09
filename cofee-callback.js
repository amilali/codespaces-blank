
// hof main function
makeacoffee=(name, callback)=>
{
    setTimeout(() => {
        callback(name);
    }, 4000);
    console.log(`${name} your coffee is making`);
}

// callback fn

makingcoffee=(name)=>{
    console.log(`Yay! ${name} your coffee is maked`);
}

makeacoffee('Amil', makingcoffee);