namespace CSharpAlgoQuizDll.Quiz0001
{
    using System.Linq;
    using System.Collections.Generic;

    public static class Quiz
    {
        /// <summary>
        /// 输入一个英文句子，把句子中的单词(不区分大小写)按出现次数按从多到少把单词和次数在屏幕上输出来，要求能识别英文句号和逗号，即是说单词由空格、句号和逗号隔开。
        /// </summary>
        /// <param name="sentence"></param>
        /// <returns></returns>
        public static string GetWordsFrequency(string sentence)
        {
            var strSplitor = new []{' ', ','};
            var dict = new Dictionary<string, int>();
            var strSplit = sentence.Split(strSplitor);
            var result = string.Empty;

            foreach (var elt in strSplit)
                if (dict.ContainsKey(elt)) dict[elt] += 1;
                else dict[elt] = 1;

            return dict.Aggregate(result, (current, pair) => current + string.Format("{0}:{1} ", pair.Key, pair.Value));
        }
    }
}
