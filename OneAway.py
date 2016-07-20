def one_away(s1, s2):
	if len(s1) == len(s2):
		return one_edit_replace(s1, s2)

	elif len(s1) + 1 == len(s2):
		return one_edit_indel(s1, s2)

	elif len(s1) - 1 == len(s2):
		return one_edit_indel(s2, s1)

	else:
		return False


def one_edit_replace(s1, s2):
	edited = False
	for c1, c2 in zip(s1, s2):
		if c1 != c2:
			if edited:
				return False
			edited = True
	return True

def one_edit_indel(s1, s2):
	edited = False
	i = 0
	j = 0
	while i < len(s1) and j < len(s2):
		if s1[i] != s2[j]:
			if edited:
				return False
			edited = True
			i += 1
		i += 1
		j += 1

	return True

print one_away("pale", "ble")
