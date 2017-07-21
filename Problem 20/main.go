package main

import (
	"fmt"
	"math/big"
	"strconv"
)

/**
Project Euler Problem 20
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!
*/

func main() {
	fmt.Println(sumResult(factorial(100)))
}

func sumResult(result *big.Int) int {
	var sum int
	str := fmt.Sprintf("%v", result)

	for i := 0; i < len(str); i++ {
		j, err := strconv.Atoi(string(str[i]))
		if err == nil {
			sum += j
		}
	}
	return sum
}

func factorial(n int) *big.Int {
	factorialSln := big.NewInt(1)

	for i := 1; i <= n; i++ {
		factorialSln = big.NewInt(0).Mul(factorialSln, big.NewInt(int64(i)))
		fmt.Println(factorialSln)
	}

	return factorialSln
}
