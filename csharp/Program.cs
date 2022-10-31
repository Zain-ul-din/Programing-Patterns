using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;

namespace Project
{
    public interface ISaveAble 
    {
        string Save ();
    }

    public class Data : ISaveAble
    {
        int data = 10;
        public string Save () => $"{data}";
    }

    public class AnotherData : ISaveAble
    {
        string data = "Hello World";
        public string Save () => $"{data}";
    }

    public static class Program 
    {
        public static void Main (string[] argv)
        {
            Console.WriteLine ("Hello C#");
            Data data = new Data ();
            AnotherData anotherData = new AnotherData ();
            
            SaveData ((ISaveAble)data, (ISaveAble)anotherData);
        }

        public static void SaveData (params ISaveAble[] dataArray)
        {
            string content = "";
            foreach (var data in dataArray)
            {
                content += (data.Save () + " , ");
            }
            File.WriteAllText ("./Index.text", content);
        }
    }    

    


}


