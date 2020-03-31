# contains only the best solution function


def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
    ans={}
    for word in strs:
        s="".join(sorted(word))

        if s not in ans:
            ans[s]=[word]
        else:
            ans[s].append(word)
    return ans.values()
