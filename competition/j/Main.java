import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

/* "oOO" before "oo" in any word that has "oo".
 * and "oO" before "o" in any word with a single "o"
 *
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner myReader = new Scanner(new File("practice.in.txt"));
        while (myReader.hasNextLine()) {
            String data = myReader.next();//nextLine or nexT?
            if (data.length() > 3) {
                if (data.contains("oo")) {
                    int index = data.indexOf("oo", 1);
                    data = data.replace(data, "oOOoo");
                }
                System.out.println(data);
            }
        }
    }
}
