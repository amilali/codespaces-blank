// Function to validate LinkedIn profile URL
function validateLinkedInURL(url) {
    var regex = /^https:\/\/www.linkedin.com\/in\/[a-zA-Z0-9_-]{5,30}[a-zA-Z0-9]$/;
    return regex.test(url);
  }
  
  // Example
  var url1 = "https://www.linkedin.com/in/johndoe123";
  var url2 = "https://www.linkedin.com/in/mary-jane";
  var url3 = "https://www.linkedin.com/in/_joe";
  var url4 = "https://www.linkedin.com/in/johndoe1_";
  var url5 = "https://www.linkedin.com/in/johndoe1234567890123456789012";
  
  console.log(validateLinkedInURL(url1) ? url1 + " is a valid LinkedIn profile URL" : url1 + " is not a valid LinkedIn profile URL");
  console.log(validateLinkedInURL(url2) ? url2 + " is a valid LinkedIn profile URL" : url2 + " is not a valid LinkedIn profile URL");
  console.log(validateLinkedInURL(url3) ? url3 + " is a valid LinkedIn profile URL" : url3 + " is not a valid LinkedIn profile URL");
  console.log(validateLinkedInURL(url4) ? url4 + " is a valid LinkedIn profile URL" : url4 + " is not a valid LinkedIn profile URL");
  console.log(validateLinkedInURL(url5) ? url5 + " is a valid LinkedIn profile URL" : url5 + " is not a valid LinkedIn profile URL");
  