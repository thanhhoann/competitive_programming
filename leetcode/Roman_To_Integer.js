/**
 * @param {string} s
 * @return {number}
 */

const romanToInt = (s) => {
  let res = 0;

  for (let i in s) {
    if (s[i] == "I") res += 1;
    if (s[i] == "V") res += 5;
    if (s[i] == "X") res += 10;
    if (s[i] == "L") res += 50;
    if (s[i] == "C") res += 100;
    if (s[i] == "D") res += 500;
    if (s[i] == "M") res += 1000;
  }

  return res;
};

console.log(romanToInt("XXVII"));
