**How to make css variables**

```css

:root {
    --main-bg-color: #fff;   //here we are making a variable
    --main-text-color: #000;
}

body {
    background-color: var(--main-bg-color); //here we are using the variable we use val() function in css.
    color: var(--main-text-color);
}

```