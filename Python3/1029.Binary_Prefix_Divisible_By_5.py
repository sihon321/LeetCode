class Solution:
    def prefixesDivBy5(self, A: [int]) -> [bool]:
        ret = []
        sum = 0

        for i in range(len(A)):
            if sum == 0 and A[i] == 1:
                sum += 1
            else:
                if A[i] == 1:
                    sum = sum * 2 + 1
                else :
                    sum *= 2

            if sum % 5 == 0:
                ret.append(True)
            else:
                ret.append(False)
        return ret
