

const image = document.getElementById('image');
const info = document.getElementById('info');

image.addEventListener('click', () => {
    if (info.style.display === 'none' || info.style.display === '') {
        info.style.display = 'block';
    } else {
        info.style.display = 'none';
    }
});
