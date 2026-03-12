#include<iomanip>
#include<iostream>
#include <vector>

using namespace std;

int main(){
    int linha = 1;

    int coluna[6];

    vector<char> respostas;

    while(linha != 0){
        cin >> linha;

       

        for(int i = 0; i < linha; i++){
            
            int flg = 0;

            char temp = '*';

            for(int j = 1; j < 6; j++){
                cin >> coluna[j];
                
                    switch (j)
                    {
                    case 1:
                        if(coluna[j] <= 127){
                            temp = 'A';
                            flg += 1;
                        }
                        break;
                    
                    case 2:
                        if(coluna[j] <= 127){
                            temp = 'B';
                            flg += 1;
                        }
                        break;
                    case 3:
                        if(coluna[j] <= 127){
                            temp = 'C';
                            flg += 1;
                        }
                        break;

                    case 4:
                        if(coluna[j] <= 127){
                            temp = 'D';
                            flg += 1;
                        }
                        break;
                    
                    case 5:
                        if(coluna[j] <= 127){
                            temp = 'E';
                            flg += 1;
                        }
                        break;

                    default:
                        respostas.push_back('*');
                        break;
                    }

                
            }
            if(flg == 1){
                respostas.push_back(temp);
            }
            else{
                respostas.push_back('*');
            }
            
        }
        
    }

    for(int i = 0; i < respostas.size(); i++){
        cout << respostas[i] << endl;
    }


}