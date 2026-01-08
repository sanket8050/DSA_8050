// power of 2
// Step 2: A power of 2 has exactly one set bit
        // Example:
        // 8  -> 1000
        // 7  -> 0111
        // 8 & 7 = 0  ✔

int power(int n){
    return (n & (n-1)) == 0;
}

// same for 4 but only at the even possition
// 🔍 Examples
// Number	Binary	Power of 2	Power of 4
// 1	0001	      ✅	        ✅
// 2	0010	      ✅	        ❌
// 4	0100	      ✅	        ✅
// 8	1000	      ✅	        ❌
// 16	10000	      ✅         ✅