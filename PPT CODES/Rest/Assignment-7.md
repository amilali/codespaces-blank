**Solution 1**
```javascript
var isIsomorphic = function(s, t) {

    for (let i = 0; i < s.length; i++) {

        if (s.indexOf(s[i], i + 1) !== t.indexOf(t[i], i + 1)) {
            
            return false;
        }
    }
    return true;
};
```

**Solution 2**
```javascript
function isStrobogrammaticNumber(num) {
  const strobogrammaticPairs = {
    '0': '0',
    '1': '1',
    '6': '9',
    '8': '8',
    '9': '6',
  };

  let left = 0;
  let right = num.length - 1;

  while (left <= right) {
    const leftDigit = num[left];
    const rightDigit = num[right];

    if (!(leftDigit in strobogrammaticPairs && strobogrammaticPairs[leftDigit] === rightDigit)) {
      return false;
    }

    left++;
    right--;
  }

  return true;
}
```
**Solution 3**
```javascript
var addStrings = function (num1, num2) {
    var output = []
    let carry = 0
    let i = num1.length - 1
    let j = num2.length - 1
    while (i >= 0 || j >= 0) {
        let sum = parseInt(num1[i] || 0) + parseInt(num2[j] || 0) + carry
        output.unshift(sum % 10)
        carry = sum > 9 ? 1 : 0
        i--;
        j--; 
    }
    if (carry == 1) {
        output.unshift(1)
    }
    return output.join("")
};
```
**Solution 4**
```javascript
function reverseString(s){
    let arr = s.split('');
    let length = ~~(arr.length/2);
    for(let i = 0; i< length; i++){
        [arr[i],arr[s.length-1-i]] = [arr[arr.length-1-i],arr[i]];
    }
    return arr.join('');
}
var reverseWords = function(s) {
    let arr = s.split(' ');
    for(let i = 0; i<arr.length; i++){
        arr[i] = reverseString(arr[i]);
    }
    return arr.join(' ')
};
```
**Solution 5**
```javascript
var reverseStr = function (s, k, arr = s.split(""), k2 = k * 2) {
  for (let i = 0; i < arr.length - 1; i += k2) {
    swap(i, Math.min(i + k - 1, arr.length - 1));
  }
  return arr.join("");

  function swap(start, end) {
    while (start < end) {
      [arr[start], arr[end]] = [arr[end], arr[start]];
      start++;
      end--;
    }
  }
};
```
**Solution 6**

```javascript
var rotateString = function(s, goal) {
    if(s.length !== goal.length){return false}

    const tempArr = [...s, ...s].join("")
    const regex = new RegExp(`${goal}`)
    return regex.test(tempArr)
};
```
**Solution 7**
```javascript
const backspaceCompare = (S, T) => { 
    return edit(S) === edit(T);
    
    function edit(str) {
        let result = '';
        let backspaces = 0;
        
        for (let i = str.length - 1; i >= 0; i -= 1) {        
            if (str[i] === '#') {
                backspaces += 1;
            } else if (backspaces > 0) {
                backspaces -= 1;
            } else {
                result = str[i] + result;
            }
        }
        
        return result;
    }
};
```

**Solution 8**
```javascript
var isStraight = function([[ax,ay],[bx,by],[cx,cy]]) {
    return ((by-ay)*(cx-bx)===(cy-by)*(bx-ax));
};

var checkStraightLine = function(coordinates) {
    if (coordinates.length === 2) return true;

    for (let i = 2; i < coordinates.length; i++) {
        if (!isStraight([coordinates[0], coordinates[1], coordinates[i]])) {
            return false;
        }
    }
        
    return true;
};
```

