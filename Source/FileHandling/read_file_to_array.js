const fs = require('fs');

function readFileToArray(filename) {
    const data = fs.readFileSync(filename, 'utf8');
    let lines = [''];
    let j = 0;
    for (let i = 0; i < data.length; i++) {
        if (data[i] === '\n') {
            lines.push('');
            j++;
        } else {
            lines[j] += data[i];
        }
    }
    return lines;
}

const lines = readFileToArray('yourfile.txt');

// Now you can access the lines from the file
for(let i = 0; i < lines.length; i++) {
    console.log(lines[i]);
}
