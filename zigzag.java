public String convert(String s, int numRows) {

	if (s.length() <= 2 || numRows == 1 || s.length() < numRows--)
		return s;

	char[] arr = s.toCharArray();
	char[] result = new char[s.length()];
	int tam = 0;

	for (int row = 0; row <= numRows; row++) {
		for (int i = row; i < arr.length; i += (numRows - row) * 2) {
			if (row != numRows || i == numRows)
				result[tam++] = arr[i];
			if (row != 0 && i >= numRows){
				i += (row * 2);
				if (i < arr.length) {
					result[tam++] = arr[i];
				}
			}
		}
	}
	return new String(result);
}