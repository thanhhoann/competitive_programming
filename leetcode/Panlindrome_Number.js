/**
 * @param {number} x
 * @return {boolean}
 */

const isPalindrome = (x) => {
  let arr = x.toString().split("");

  let p_left = 0,
    p_right = arr.length - 1;

  while (p_left != p_right && p_left < p_right) {
    if (arr[p_left] !== arr[p_right]) {
      return false;
    } else {
      p_left++;
      p_right--;
    }
  }
  return true;
};
