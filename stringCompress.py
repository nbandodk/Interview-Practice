def compress(test_str):
	res = []
	count = 0
	prev = test_str[0]

	for char in test_str:
		if char == prev:
			count += 1
		else:
			res += prev + str(count)
			prev = char
			count = 1

	res += prev + str(count)
	res = ''.join(res)
	if len(res) < len(test_str):
		return res
	else:
		return test_str


print compress("cccaaat")
