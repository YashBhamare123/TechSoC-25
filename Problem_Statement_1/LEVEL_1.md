for i in range(1,10):
	message = input('Enter the data to be encoded:')
	encrypted_words = ""
	for word in message:
		for letter in word:
			a = ord(letter)
			if (64<a<88 or 96<a<120 ):
				b = a + 3
			elif (a == 88,89,90,130,121,122):
				b = a - 23
			else:
				b = a
			encrypted_words += chr(b)
	print('Encrypted message : ',encrypted_words)
	real_words = ""
	for word in encrypted_words:
		for letter in word:
			a = ord(letter)
			if (67<a<91 or 99<a<123):
				b = a - 3
			elif (a == 65,66,67,97,98,99):
				b = a + 23
			else:
				b = a
			real_words += chr(b)
	print('Decoded message : ',real_words)
