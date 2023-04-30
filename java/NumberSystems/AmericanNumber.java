package NumberSystems;

public class AmericanNumber {
    private String numberText;
    private String numberDigits;

    public String getText() {
        return numberText;
    }

    public String getNumber() {
        return numberDigits;
    }

    // accepts number in numerical form;
    public AmericanNumber(String num) {
        numberDigits = num;

        numberDigits = numberToText(num);
    }

    public static String numberToText(String num) {
        int len = num.length();
        String res = "";

        for (int i = 0; len > 0; i++, len -= 3) {
            if (len < 3) {
                res = numToHundreds(Integer.parseInt(num.substring(0, len))) + " " + denominations[i] + " " + res;
            } else {
                res = numToHundreds(Integer.parseInt(num.substring(len - 3, len))) + " " + denominations[i] + " " + res;
            }
        }
        return res;
    }

    public static String numToHundreds(int num) {
        String[] ones = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
        String[] tens = { "", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety",
                "Hundred" };

        String res = "";
        res += ones[num / 100] + " ";// hundreds
        if (num / 100 != 0) {
            res += "hundred ";
        }

        if (num % 100 < 20) {
            res += ones[num % 100];
        } else {
            res += tens[(num % 100) / 10] + " ";
            res += ones[num % 10];
        }

        return res.trim();
    }

    private static String[] denominations = { "", "Thousand", "Million", "Billion", "Trillion", "Quadrillion" };

    public static void main(String[] args) {
        String num = "1110845693452";

        // System.out.println(numToHundreds(200));
        System.out.println(numberToText(num));
    }
}
