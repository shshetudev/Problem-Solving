class NaiveSolution:
    def twoSum(self, nums: list, target: int) -> list:
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i]+nums[j] == target:
                    return [i, j]


if __name__ == '__main__':
    naiveSol = NaiveSolution()
    assert naiveSol.twoSum([2, 7, 11, 15], 9) == [0, 1]
    assert naiveSol.twoSum([3, 2, 4], 6) == [1, 2]
    assert naiveSol.twoSum([3, 3], 6) == [0, 1]
