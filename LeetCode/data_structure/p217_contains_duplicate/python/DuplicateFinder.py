def main():
    print("Hello World!")

def contains_duplicate(nums: list) -> bool:
    numsContainer = {}
    for num in nums:
        if num in numsContainer:
            return True
        numsContainer[num] = 1
    return False


if __name__ == "__main__":
    print(contains_duplicate([1,2,3,4])) # False
    print(contains_duplicate([1,2,3,1])) # True