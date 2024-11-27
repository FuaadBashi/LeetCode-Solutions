class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        op_count = 0
        
        nums = [x for x in nums if x <= k]
        map = Counter( nums )
        # del nums
        

        for c in list(map.keys()):
            if k - c == c:
                op_count += map[c] // 2
                # del map[c]
            elif k - c in map:
                min_pairs = min(map[k-c], map[c])
                op_count += min_pairs
                del map[k-c]
                del map[c]
            else:
                continue
        return op_count