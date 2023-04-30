package NumberSystems;

public class IndianNumber {
    private String numberText;
    private String numberDigits;

    public String getText() {
        return numberText;
    }

    public String getNumber() {
        return numberDigits;
    }

    public IndianNumber(String num) {
        numberDigits = num;

        numberDigits = numberToDigits(num);
    }

    private String numberToDigits(String num) {
        String[] ones = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
        String[] tens = { "", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety",
                "Hundred" };

    }

    private static String[] denominations = { "", "Thousand", "Lakh", "Crore", "Arab", "Kharab" };
}
