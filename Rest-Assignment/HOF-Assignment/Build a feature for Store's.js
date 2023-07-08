// Store's inventory with prices in USD
var inventory = {
    item1: 10,
    item2: 20,
    item3: 30,
    item4: 40
  };
  
  // Function to convert USD to INR
  function convertToINR(priceUSD) {
    var exchangeRate = 80;
    return priceUSD * exchangeRate;
  }
  
  // Convert prices to INR using map
  var inventoryINR = Object.keys(inventory).map(function(key) {
    var priceUSD = inventory[key];
    var priceINR = convertToINR(priceUSD);
    return {
      item: key,
      priceINR: priceINR
    };
  });
  
  // Display the converted prices in INR
  console.log(inventoryINR);
  