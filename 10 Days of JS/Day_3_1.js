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


function getSecondLargest(nums) {
    let largest = Math.max(...nums);
    let secondlargest;

    for(let i=0;i<nums.length;i++)
    {
        if(nums[i] != largest)
        {
            if(secondlargest == undefined || nums[i] > secondlargest)
            {
                secondlargest = nums[i];
            }
            else if((i = nums.length -1))
            {
                if(secondlargest == undefined || nums[i] > secondlargest)
                {
                    secondlargest = nums[i];
                }
            }
        }
    }

    return secondlargest;
}


function main() {
    const n = +(readLine());
    const nums = readLine().split(' ').map(Number);
    
    console.log(getSecondLargest(nums));
}
