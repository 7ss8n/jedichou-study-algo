import numpy as np
s1 = [50  for x in range(23) ]
s2 = [150 for x in range(137)]
s3 = [250 for x in range(197)]
s4 = [350 for x in range(152)]
s5 = [450 for x in range(151)]
s6 = [550 for x in range(200)]
s7 = [650 for x in range(140)]
sample = s1+s2+s3+s4+s5+s6+s7
sample_array = np.array(sample)
print np.std(sample_array, ddof=1)
