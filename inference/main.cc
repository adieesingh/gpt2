#define _USE_MATH_DEFINES
#include <vector>
#include <iostream>
#include <fstream>
#include <fstream>
#include <cmath>

using tensor = std::vector<float>;
struct TransformerInput
{
    // this for attention
    tensor qWeights, kWeights, vWeights;
    tensor qBiases, kWeights, vWeights;

    // this is for mjp
    tensor l1Weights, l2Weights;
    tensor l1Biases, l2Biases;

    tensor oWeights, oBaises;

    tensor lnAttnWeights, lnAttnBiases;
    tensor lnMlpWeights, lnMlpWeights;
};

float gelu(float x)
{
    return .5 * x * (1 + std::tanh(std::sqrt(2 / M_PI) * (x + 0.044715 * x * x * x)));
}
void loadWeights()
{
    auto readFromFileStream = [](std::vector<float> &vec, std::ifstream &stream, int maxCount = 0)
    {
        float input;
        if (maxCount > 0)
        {
            while (stream >> input)
            {
                vec.push_back(input);

                maxCount--;
                if (maxCount == 0)
                {
                    break;
                }
            }
            while (stream >> input)
            {
                vec.push_back(input);
            }
        }
    }
}