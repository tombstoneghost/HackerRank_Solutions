'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}
function vowelsAndConsonants(s) {
    var len = s.length;

    for(var i=0; i<len; i++)
    {
        var ch = s.charAt(i);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            console.log(ch);
    }
    for(var i=0; i<len; i++)
    {
        var ch = s.charAt(i);
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            console.log(ch);
    }
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}
