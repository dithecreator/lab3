//
//  main.cpp
//  lab3
//
//  Created by Дима on 15.10.23.
//

#include <iostream>
#include <map>
using namespace std;
typedef pair<string, string> myPair;
int main()
{
    map<string, string> dictionary;
    
    string word;
    string translate;
    int answer;
    cout << "выберите, что вы хотите сделать: ";
    cout << "1 - добавить слово" << endl;
    cout << "2 - удалить слово" << endl;
    cout << "3 - найти слово" << endl;
    cout << "4 - заменить слово" << endl;
    cout << "5 - показать словарь" << endl;
    cin >> answer;

    switch(answer){
        case 1:
        cout << "введите слово: ";
        cin >> word;
        cout << "введите перевод: ";
        cin >> translate;
        dictionary.insert(make_pair(word, translate));
        break;
        
        case 2:
        cout << "введите слово, которое хотите удалить: ";
        cin >> word;
        if(dictionary.find(word) != dictionary.end()){
            dictionary.erase(word);
        }
        break;
        
        case 3:
        cout << "введите искомое слово: ";
        cin >> word;
            for (auto it = dictionary.begin(); it != dictionary.end(); it++) {
                if (dictionary.find(word) != dictionary.end()) {
                    cout << dictionary[word] << endl;
                }
            }
            
            case 4:
            cout << "введите слово для замены: ";
            cin >> word;
            cout << "введите слово: ";
            cin >> word;
            if (dictionary.find(word) != dictionary.end())
            {
                cin >> dictionary[word];
            }
            break;
            
            case 5:
            for (auto it = dictionary.begin(); it != dictionary.end(); it++) {
                cout << it->first << "  " << it->second << endl;
            }
            break;
            
            default:
            cout << "ошибка" << endl;
            break;

    }
 
    
}
