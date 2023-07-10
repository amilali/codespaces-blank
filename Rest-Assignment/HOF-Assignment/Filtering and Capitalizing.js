// List of books with authors and publication years
var books = [
    { title: "Book 1", author: "author 1", year: 2005 },
    { title: "Book 2", author: "author 2", year: 2012 },
    { title: "Book 3", author: "author 3", year: 2008 },
    { title: "Book 4", author: "author 4", year: 2015 },
    { title: "Book 5", author: "author 5", year: 2011 }
  ];
  
  // Filter and capitalize author names
  var filteredBooks = books.filter(function(book) {
    return book.year >= 2010;
  }).map(function(book) {
    return {
      title: book.title,
      author: book.author.toUpperCase()
    };
  });
  
  // Display the filtered and capitalized books
  console.log(filteredBooks);
  