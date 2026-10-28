#include <vector>
#include <fstream>
#include <ifstream>
#include <math>
float gelu(float x){
    return .5 * x   *(1+std::tanh(std::sqrt(2/M_PI)*(x+0.044715*x*x*x)));
}
void loadWeights(){
    auto readFromFileStream=[](std::vector<float> &vec,std::ifstream &stream,int maxCount=0){
        float input;
        if(maxCount>0){
            while (stream>> input){
                vec.push_back(input);

                maxCount--;
                if(maxCount ==0){
                    break;
                }
            }while(stream>>input){
                vec.push_back(input)
            }
        }
    }
}