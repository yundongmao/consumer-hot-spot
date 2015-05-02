#include "../src/KeywordExtractor.hpp"
#include <fstream>
using namespace CppJieba;

int main(int argc, char ** argv)
{
    KeywordExtractor extractor("../dict/jieba.dict.utf8", "../dict/hmm_model.utf8", "../dict/idf.utf8", "../dict/stop_words.utf8");
    //KeywordExtractor extractor("../dict/jieba.dict.utf8", "../dict/hmm_model.utf8", "../dict/idf.utf8", "../dict/stop_words.utf8", "../dict/user.dict.utf8");
    string s("哈尔滨工业大学是中华人民共和国工业和信息化部直属理工类全国重点大学。");
    vector<pair<string, double> > wordweights;
    vector<string> words;

    ofstream out("result.txt");
    if (!out)
    {
        cerr<<"Cannot open the file!"<<endl;
        return -1;
    }

    size_t topN = 5;
    extractor.extract(s, wordweights, topN);
    out<<s<<'\n'<<wordweights<<endl;
    cout<< s << '\n' << words << endl;
    out<<s<<'\n'<<words<<endl;

    out.close();
    return EXIT_SUCCESS;
}
