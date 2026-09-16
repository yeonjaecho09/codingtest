function solution(my_string) {
  const elements = my_string.split(' ');
  let result = Number(elements[0]);

  for (let i = 1; i < elements.length; i += 2) {
    const operator = elements[i];
    const nextNumber = Number(elements[i + 1]);

    if (operator === '+') {
      result += nextNumber;
    } else if (operator === '-') {
      result -= nextNumber;
    }
  }

  return result;
}

console.log(solution("4 + 5"));
