var lengthOfLastWord = function(s) {
    const arr = s.trim().split(" ");
     const lastword = arr[arr.length-1];
     return lastword.length;
};