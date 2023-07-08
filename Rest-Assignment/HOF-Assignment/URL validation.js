// Function to validate URL
function validateURL(url) {
    var regex = /^(http:\/\/|https:\/\/)[\w\d\S]+.[\w]+$/;
    return regex.test(url);
  }
  
  // Example usage
  var url1 = "http://www.example.com";
  var url2 = "https://www.example.com";
  var url3 = "http://123example.com";
  var url4 = "ftp://www.example.com";
  
  console.log(validateURL(url1) ? url1 + " is a valid URL" : url1 + " is not a valid URL");
  console.log(validateURL(url2) ? url2 + " is a valid URL" : url2 + " is not a valid URL");
  console.log(validateURL(url3) ? url3 + " is a valid URL" : url3 + " is not a valid URL");
  console.log(validateURL(url4) ? url4 + " is a valid URL" : url4 + " is not a valid URL");
  