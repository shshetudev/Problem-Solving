package main

import "fmt"

func duplicate_finder(nums []int) bool {
	numsContainer := make(map[int]int)
	for i := 0; i < len(nums); i++ {
		if _, ok := numsContainer[nums[i]]; ok {
			return true
		}
		numsContainer[nums[i]] = 1
	}
	return false
}

func main() {
	var nums = []int{1, 2, 3, 4}
	fmt.Print(duplicate_finder(nums)) // false
}
