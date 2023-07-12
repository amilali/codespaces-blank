// Open modal
const openModalBtn = document.getElementById('openModalBtn');
const modal = document.getElementById('modal');
const closeModalBtn = document.getElementsByClassName('close')[0];

openModalBtn.addEventListener('click', function() {
  modal.style.display = 'block';
  document.body.style.overflow = 'hidden'; // Disable scroll on the background
});

// Close modal
function closeModal() {
  modal.style.display = 'none';
  document.body.style.overflow = 'auto'; // Enable scroll on the background
}

closeModalBtn.addEventListener('click', closeModal);
window.addEventListener('click', function(event) {
  if (event.target === modal) {
    closeModal();
  }
});
