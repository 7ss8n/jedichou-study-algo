def disemvowel(string):
    -- 去除句子中的元音
    return ''.join([x for x in string if x not in "aeiouAEIOU"])
