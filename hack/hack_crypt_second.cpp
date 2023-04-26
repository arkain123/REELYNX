using System;
using System.Collections.Generic;
using System.Linq;
using namespace std;
{
    class Program
    {
        static void Main()
        {
            Console.OutputEncoding = System.Text.Encoding.Unicode;//вывод на укр языке
            Console.InputEncoding = System.Text.Encoding.Unicode;//ввод на укр языке

            Console.WriteLine("Введите слово,которое нужно зашифровать:");
            string s = Console.ReadLine();

            string alfabet = "абвгґдеєжзиіїйклмнопрстуфхцчшщьюя"; //алфавит
            var fullAlfabet = alfabet + alfabet.ToUpper(); // большие буквы
            int y;
            List<string> result = new List<string>();
            for (y = 1; y < 34; y++) // значение уходит в ключ
            {
                result.Add(Shift(fullAlfabet, s, y));
            }

            Console.ReadLine();
            static string Shift(string fullAlfabet, string targetWord, int key)
            {

                string result = "";
                for (int i = 0; i < targetWord.Length; i++) // длинна слова
                {
                    for (int j = 0; j < fullAlfabet.Length; j++) //длинна алфавиа
                    {
                        if (targetWord[i] == fullAlfabet[j]) // приравниваем слово к алфавиту
                        {
                            var temp = j + -key; // сдвиги

                            while (temp >= fullAlfabet.Length)
                                temp -= fullAlfabet.Length;

                            result += fullAlfabet[temp];
                        }
                    }
                }
                Console.WriteLine("key: {0}", key);
                Console.WriteLine("Зашифрованное слово: {0}", result);
                return result;
            }
        }
    }
}