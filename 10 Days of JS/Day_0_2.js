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

function performOperation(secondInteger, secondDecimal, secondString) {
    const firstInteger = 4;
    
    const firstDecimal = 4.0;
    
    const firstString = 'HackerRank ';
    
    var res1 = firstInteger + Number(secondInteger);
    var res2 = firstDecimal + Number(secondDecimal);
    var res3 = firstString + secondString;

    console.log(res1 + "\n" + res2 + "\n" + res3);
}


