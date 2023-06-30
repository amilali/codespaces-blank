## In C++ 

**If you are using hashmap you can initialize with:**
```cpp
    `unordered_map<int,int> mp;`
```

###OR
**if you want to initialize with some values you can do:**

```cpp
unordered_map<int,int> mp = {{1,2},{2,3},{3,4}};
```

###AND 
**if you want to insert value in iteration:**
```cpp
mp[1] = 2; or mp.insert({1,2});
```
1 is key and 2 is value.

**in iteration**
```cpp
mp[arr[i]] =i;
```
arr[i] is key and i is value.

**to print the hashmap:**
```cpp
for(auto i:mp)
{
    cout<<i.first<<" "<<i.second<<endl;
}
```

**AND**

To check if an element exists in an unordered_map, use **count()** function. count() returns 1 (true) if the element is present in the unordered_map, else it returns 0(false).
e.g:
```cpp
if(mp.count(1))
{
    cout<<"1 is present"<<endl;
}
else
{
    cout<<"1 is not present"<<endl;
}
```

or you can use** find()** function:
e.g:
```cpp
if(mp.find(1)!=mp.end())
{
    cout<<"1 is present"<<endl;
}
else
{
    cout<<"1 is not present"<<endl;
}

```



## In Javascript
**If you are using hashmap you can initialize with**:

```javascript
let mp = new Map();
or
let mp = {};
```

**AND** 
**if you want to insert value in iteration:**
```javascript
let mp = new Map([[1,2],[2,3],[3,4]]);
or
mp[1] = 2; or mp.insert({1,2});
mp[1] = 2;

```
**In iteration**
```javascript
mp[arr[i]] =i;
arr[i] is key and i is value.
same as C++.

to print the hashmap:
for(let i of mp)
{
    console.log(i[0]+" "+i[1]);
}
```

**AND**

To check if an element exists in js hashmap, use has() function. has() returns true if the element is present in the hashmap, else it returns false.
e.g:
```javascript
if(mp.has(1))
{
    console.log("1 is present");
}
else
{
    console.log("1 is not present");
}

```
also there is .hasOwnProperty() function which returns true if the element is present in the hashmap, else it returns false.
e.g:
```javascript
if(mp.hasOwnProperty(1))
{
    console.log("1 is present");
}
else
{
    console.log("1 is not present");
}

```

difference between** .has()** and **.hasOwnProperty()** is that .hasOwnProperty() only checks for the **key** in the hashmap but .has() checks for the **key** and **value** both in the hashmap.

use can use **"in" **operator to check if the key is present in the hashmap or not.

e.g:
```javascript
if(1 in mp)
{
    console.log("1 is present");
}
else
{
    console.log("1 is not present");
}
```