// Form validation
const form = document.getElementById('myForm');
const nameInput = document.getElementById('name');
const emailInput = document.getElementById('email');
const phoneInput = document.getElementById('phone');
const passwordInput = document.getElementById('password');
const ageInput = document.getElementById('age');
const genderInput = document.getElementById('gender');
const dateInput = document.getElementById('date');
const colorInput = document.getElementById('color');

form.addEventListener('submit', function(event) {
  event.preventDefault();
  
  if (!validateName()) {
    return;
  }

  if (!validateEmail()) {
    return;
  }

  if (!validatePhone()) {
    return;
  }

  if (!validatePassword()) {
    return;
  }

  if (!validateAge()) {
    return;
  }

  if (!validateGender()) {
    return;
  }

  if (!validateDate()) {
    return;
  }

  if (!validateColor()) {
    return;
  }

  // If all validations pass, submit the form
  alert('Form submitted successfully!');
  form.reset();
});

function validateName() {
  const nameValue = nameInput.value.trim();
  
  if (nameValue === '') {
    showError(nameInput, 'Name is required');
    return false;
  }

  if (!/^[a-zA-Z ]+$/.test(nameValue)) {
    showError(nameInput, 'Name can only contain letters and spaces');
    return false;
  }

  return true;
}

function validateEmail() {
  const emailValue = emailInput.value.trim();
  
  if (emailValue === '') {
    showError(emailInput, 'Email is required');
    return false;
  }

  if (!/^[\w.-]+@[a-zA-Z_-]+?\.[a-zA-Z]{2,3}$/.test(emailValue)) {
    showError(emailInput, 'Email is not valid');
    return false;
  }

  return true;
}

function validatePhone() {
  const phoneValue = phoneInput.value.trim();
  
  if (phoneValue === '') {
    showError(phoneInput, 'Phone number is required');
    return false;
  }

  if (!/^\d{10}$/.test(phoneValue)) {
    showError(phoneInput, 'Phone number must be 10 digits');
    return false;
  }

  return true;
}

function validatePassword() {
  const passwordValue = passwordInput.value.trim();
  
  if (passwordValue === '') {
    showError(passwordInput, 'Password is required');
    return false;
  }

  if (passwordValue.length < 6) {
    showError(passwordInput, 'Password must be at least 6 characters');
    return false;
  }

  return true;
}

function validateAge() {
  const ageValue = ageInput.value.trim();
  
  if (ageValue === '') {
    showError(ageInput, 'Age is required');
    return false;
  }

  if (ageValue < 18 || ageValue > 99) {
    showError(ageInput, 'Age must be between 18 and 99');
    return false;
  }

  return true;
}

function validateGender() {
  const genderValue = genderInput.value.trim();
  
  if (genderValue === '') {
    showError(genderInput, 'Gender is required');
    return false;
  }

  return true;
}

function validateDate() {
  const dateValue = dateInput.value.trim();
  
  if (dateValue === '') {
    showError(dateInput, 'Date is required');
    return false;
  }

  return true;
}

function validateColor() {
  const colorValue = colorInput.value.trim();
  
  if (colorValue === '') {
    showError(colorInput, 'Color is required');
    return false;
  }

  return true;
}

function showError(input, message) {
  const formControl = input.parentElement;
  const errorElement = formControl.querySelector('.error');
  errorElement.innerText = message;
}

// Clear error messages on input change
nameInput.addEventListener('input', clearError);
emailInput.addEventListener('input', clearError);
phoneInput.addEventListener('input', clearError);
passwordInput.addEventListener('input', clearError);
ageInput.addEventListener('input', clearError);
genderInput.addEventListener('input', clearError);
dateInput.addEventListener('input', clearError);
colorInput.addEventListener('input', clearError);

function clearError() {
  const formControl = this.parentElement;
  const errorElement = formControl.querySelector('.error');
  errorElement.innerText = '';
}
