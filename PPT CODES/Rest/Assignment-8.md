**Solution 1**
```javascript
var minimumDeleteSum = function(s1, s2) {
    const memo = {}
    const memo2 = {}

    function dfs(i, j) {
        if (i >= s1.length && j >= s2.length) return 0
        if (i >= s1.length) return getCharCode(s2.slice(j))
        if (j >= s2.length) return getCharCode(s1.slice(i))

        const memostr = `${i}, ${j}`
        if (memostr in memo) return memo[memostr]

        if (s1[i] === s2[j]) return memo[memostr] = dfs(i + 1, j + 1)

        const s1code = getCharCode(s1[i])
        const s2code = getCharCode(s2[j])

        memo[memostr] = Math.min(s1code + dfs(i + 1, j), s2code + dfs(i, j + 1))
        return memo[memostr]
    }

    function getCharCode(s1) {
        if (s1 in memo2) return memo2[s1]
        let sum = 0
        for (let i = 0; i < s1.length; i++) {
            sum += s1[i].charCodeAt()
        }
        return memo2[s1] = sum
    }

    return dfs(0, 0)
};
```

**Solution 2**
```javascript
var checkValidString = function(s) {
    let leftstack = [];
    let starStack = [];
    for(let i=0; i<s.length; i++) {
        switch(s[i]) {
            case "(":
                leftstack.push(i);
                break;
            case ")":
                if(leftstack.length > 0) {
                    leftstack.pop();
                } else if (starStack.length > 0) {
                    starStack.pop();
                } else {
                    return false;
                }
                break;
            case "*":
                starStack.push(i);
                break;
        }
    }
    while(leftstack.length > 0 && starStack.length > 0) {
        if (leftstack[leftstack.length-1] > starStack[starStack.length-1]) {
            return false;
        }
        leftstack.pop();
        starStack.pop();
    }
    if(leftstack.length > 0) {
        return false;
    }
    return true;  
};
```
**Solution 3**
```javascript
const minDistance = function (word1, word2) {
  const memo = {};
  const helper = (i = w1.length - 1, j = w2.length - 1) => {
    let key = `${i},${j}`;
    if (memo[key] !== undefined) {
      return memo[key];
    }
    if (i < 0 || j < 0) {
      return 0;
    }
    if (w1[i] === w2[j]) {
      const res = 1 + helper(i - 1, j - 1);
      memo[key] = res;
      return memo[key];
    }
    const res = Math.max(helper(i, j - 1), helper(i - 1, j));
    memo[key] = res;
    return memo[key];
  };
  const longestSubseq = helper();
  const minDeletions = word1.length + word2.length - 2 * longestSubseq;
  return minDeletions;
};
```
**Solution 4**
```javascript
var tree2str = function(root) {
    //helper Root, left right
    const helper = root => {
        if (root === null)
            return '';
        
        let left = helper(root.left);
        let right = helper(root.right);
        
        if (!left && !right) {
            return `${root.val}`;
        }
        if (!right) {
            return `${root.val}(${left})`;
        } else {
            return `${root.val}(${left})(${right})`;
        }
    }
    return helper(root);
};
```
**Solution 5**
```javascript
var compress = function(chars) {
    let currentElement = null;
    let prevElement = chars[0];
    let count = 1;
    let index = 1;
    for (; index < chars.length; index++) {
        const tempStore = chars[index];
        currentElement = chars[index];
        if (prevElement == currentElement) {
            chars[index] = undefined;
            count++;
        } else {
            if (count > 1) {
                chars[index - 1] = count;
            }
            count = 1;
        }
        prevElement = tempStore;
    }
    if (count > 1) {
        chars[index - 1] = count;
    }
    let output = 0;
    for (let index = 0; index < chars.length; index++) {
        if (chars[index] !== undefined) {
            if (typeof chars[index] === 'number') {
                const char = chars[index].toString();
                if (char.length === 2) {
                    const [firstNum, secondaryNum] = char.split('');
                    chars[index - 1] = firstNum.toString();
                    chars[index] = secondaryNum.toString();
                } else if (char.length === 3) {
                    const [firstNum, secondaryNum, thirdNum] = char.split('');
                    chars[index - 1 - 1] = firstNum;
                    chars[index - 1] = secondaryNum;
                    chars[index] = thirdNum;
                } else if (char.length === 4) {
                    const [firstNum, secondaryNum, thirdNum, fourthNum] = char.split('');
                    chars[index - 1 - 1 - 1] = firstNum;
                    chars[index - 1 - 1] = secondaryNum;
                    chars[index - 1] = thirdNum;
                    chars[index] = fourthNum;
                }
            } else {
                output++;
            }
        }
    }
    let emptyIndex = 0;
    let index11 = 0;
    for (; index11 < chars.length; index11++) {
        if (chars[index11] !== undefined) {
            chars[emptyIndex++] = chars[index11].toString();
        }
    }
    chars.splice(emptyIndex);
    return;
};
```
**Solution 6**

```javascript
var findAnagrams = function(s, p) {

    let map = new Map();

    let left = 0;

    let right = 0;

    let count = p.length;

    let Arr = new Array();

    for (let i=0; i<p.length; i++) {

        map.set(p[i], (map.get(p[i]) || 0) + 1);
    }

    while (right < s.length) {

        if (map.get(s[right]) > 0) {

            count--;
        }
            map.set(s[right], (map.get(s[right]) || 0) - 1);

            if (count === 0) Arr.push(left);

            if ((right - left + 1) >= p.length) {

                if (map.get(s[left]) >= 0) {

                    count++;
                }

                map.set(s[left], (map.get(s[left]) || 0) + 1);
           
                left++;
            }

            right++;
        }

        return Arr;

};
```
**Solution 7**
```javascript
const decodeString = s => {
    if (s.length === 1) { 
        if (Number.isInteger(+s)) return ""
        else return s
    }
    const stack = []
    for (let i = 0; i < s.length; i++) { 
        if (s[i] === ']') { 
            let str = ''
            while (true) { 
                const char = stack.pop()
                if (char === '[') break 
                str = char + str
            }
            let n = ''
            while (Number.isInteger( +stack[stack.length - 1])) { 
                const number = stack.pop()
                n = number + n
            }
            stack.push(str.repeat(+n))
        } 
        else stack.push(s[i])
    }
    return stack.join('')
};
```

**Solution 8**
```javascript
var buddyStrings = function(A, B) {
    if (A.length != B.length) {
        return false;
    }
    
    if (A == B) {
        let s = new Set();
        
        for (let i = 0; i < A.length; i++) {
            s.add(A.charAt(i));
        }
        
        return s.size < A.length;
    }
    
    let diff = [];
    for (let i = 0; i < A.length; i++) {
        if (A.charAt(i) != B.charAt(i)) {
            diff.push(i);
        }
    }
    
    return diff.length == 2 && A.charAt(diff[0]) == B.charAt(diff[1]) && A.charAt(diff[1]) == B.charAt(diff[0]);
};
```

