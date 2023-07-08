// Function to generate a random number between min and max (inclusive)
function getRandomNumber(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
  }
  
  // Function to delay the execution
  function delay(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
  }
  
  // Function to display the countdown message
  function displayCountdown(seconds) {
    console.log(`Generating random number in ${seconds} seconds...`);
  }
  
  // Delayed random number generation function
  async function delayedRandomNumber() {
    const delaySeconds = 3;
    let countdown = delaySeconds;
  
    while (countdown > 0) {
      displayCountdown(countdown);
      await delay(1000);
      countdown--;
    }
  
    const randomNumber = getRandomNumber(1, 10);
    console.log(`Random number generated: ${randomNumber}`);
  }
  
  // Example 
  delayedRandomNumber();
  