using System; 

class URI {

    static void Main(string[] args) { 

       int n = 0;
            n = Int32.Parse(Console.ReadLine());

            while (n > 0)
            {
                string fullString;
                string[] splitedString;
                string firstWord, secondWord, finalWord = "";

                int i = 0;
                int final_pos = 0;

                fullString = Console.ReadLine();

                splitedString = fullString.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);

                firstWord = splitedString[0];
                secondWord = splitedString[1];

                while(firstWord.Length > i || secondWord.Length > i)
                {
                    if(firstWord.Length > i)
                    {
                        finalWord += firstWord[i];
                        final_pos++;
                    }
                    if(secondWord.Length > i)
                    {
                        finalWord += secondWord[i];
                        final_pos++;
                    }
                    i++;
                }
                Console.WriteLine(finalWord);

                n--;
            }

    }

}