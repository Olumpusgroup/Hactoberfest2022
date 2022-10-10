class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        word_arr = list(s)
        for i in range(0,len(s),2*k):
            print(i)
            word_arr[i:i+k] = word_arr[i:i+k][::-1]
            # i = i+k+2*k
        return ''.join(word_arr)