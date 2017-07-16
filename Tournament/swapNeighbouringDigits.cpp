int swapNeighbouringDigits(int n) {
    int result = 0, tenPower = 1;
  	while (n != 0) {
	    	int digit1 = n % 10,
			  digit2 = ((n - digit1) / 10) % 10;
		    result += tenPower * (10 * digit1 + digit2);
    		n = floor(n / 100);
    		tenPower *= 100;
  	}
	  return result;
}
