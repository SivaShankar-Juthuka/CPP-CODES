#User function Template for python3
class Solution:
	def binaryNextNumber(self, s):
		# code here
		n = int(s, 2)
		res = bin(n+1)[2:]
		return res

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        S = input()
        ob = Solution()
        ans = ob.binaryNextNumber(S)
        print(ans)

# } Driver Code Ends