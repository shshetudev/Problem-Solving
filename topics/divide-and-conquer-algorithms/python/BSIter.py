def binarySearch(arr:list, x:int, low:int, high:int)->int:
    while high>=low:
        mid = int((high+low)/2)
        if x == arr[mid]:
            return mid
        elif x > arr[mid]:
            low = mid + 1
        else:
            high = mid -1
    return -1

if __name__== "__main__":
    arr: list = [3,4,5,6,7,8,9]
    pos = binarySearch(arr, 4, 0, len(arr))
    if pos == -1:
        print('Element not found')
    else:
        print('Element found at ' + str(pos))