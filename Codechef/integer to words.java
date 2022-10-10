class Solution {
    private Map<Integer, String> intToWord;

    public String numberToWords(int num) {
        intToWord = new TreeMap<>(Collections.reverseOrder());
        initializeConstants();
        
        if (num == 0) {
            return intToWord.get(0);
        }
        
        return toWord(num);
    }
    
    private String toWord(int num) {
        StringBuilder result = new StringBuilder();
        for (Map.Entry<Integer, String> entry :  intToWord.entrySet()) {
            int n = entry.getKey();
            String word = entry.getValue();
            
            if (num == 0) {
                break;
            }
            
            if (num < n) {
                continue;
            }
            
            if (num <= 20) {
                result.append(intToWord.get(num) + " ");
                break;
            }
            
            if (num < 100) {
                // example: 93 : compose it to 90 + 3
                result.append(intToWord.get((num / 10) * 10) + " ");
                num = num % 10;
            }
            
            if (num >= 100) {
                int k = num / n;
                // example 2055 => 2 * 1000 + 55
                // num = 2055, k = 2
                result.append(toWord(k) + " ");
                result.append(intToWord.get(n) + " ");
                num = num % n;
            }   
        }
        
        return result.toString().trim();
    }
    
    private void initializeConstants() {
        intToWord.put(0, "Zero");
        intToWord.put(1, "One");
        intToWord.put(2, "Two");
        intToWord.put(3, "Three");
        intToWord.put(4, "Four");
        intToWord.put(5, "Five");
        intToWord.put(6, "Six");
        intToWord.put(7, "Seven");
        intToWord.put(8, "Eight");
        intToWord.put(9, "Nine");
        intToWord.put(10, "Ten");
        intToWord.put(11, "Eleven");
        intToWord.put(12, "Twelve");
        intToWord.put(13, "Thirteen");
        intToWord.put(14, "Fourteen");
        intToWord.put(15, "Fifteen");
        intToWord.put(16, "Sixteen");
        intToWord.put(17, "Seventeen");
        intToWord.put(18, "Eighteen");
        intToWord.put(19, "Nineteen");
        intToWord.put(20, "Twenty");
        intToWord.put(30, "Thirty");
        intToWord.put(40, "Forty");
        intToWord.put(50, "Fifty");
        intToWord.put(60, "Sixty");
        intToWord.put(70, "Seventy");
        intToWord.put(80, "Eighty");
        intToWord.put(90, "Ninety");
        intToWord.put(100, "Hundred");
        intToWord.put(1000, "Thousand");
        intToWord.put(1000000, "Million");
        intToWord.put(1000000000, "Billion");
    }
}

