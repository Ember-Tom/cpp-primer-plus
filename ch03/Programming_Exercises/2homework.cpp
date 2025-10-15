/*
2．编写一个小程序，要求以几英尺几英寸的方式输入其身高，并
以磅为单位输入其体重。（使用3个变量来存储这些信息。）该程序报告其BMI（Body Mass Index，体重指数）。为了计算BMI，该程序以英
寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身
高转换为以米为单位的身高（1英寸=0.0254米）。然后，将以磅为单位
的体重转换为以千克为单位的体重（1千克=2.2磅）。最后，计算相应
的BMI—体重（千克）除以身高（米）的平方。用符号常量表示各种转
换因子。
*/

#include <iostream>

#define uint32_t unsigned int

float The_INCH(uint32_t feet, uint32_t inch);
float The_WEIGHT(uint32_t weight);
float The_BMI(float meter, float pounds);

int main(int argc, const char **argv)
{
    using namespace std;

    uint32_t feet = 0;
    uint32_t inch = 0;
    uint32_t weight = 0;

    float the_meter = 0.0f;
    float the_pounds = 0.0f;
    float the_bmi = 0.0f;

    cout << "Enter your Height!" << endl;
    cout << "Your feet:_\b";
    cin >> feet;
    cout << "Your inch:_\b";
    cin >> inch;
    cout << "Enter your Weight!" << endl;
    cout << "Your weight:_\b";
    cin >> weight;

    the_meter = The_INCH(feet,inch);
    the_pounds = The_WEIGHT(weight);
    the_bmi = The_BMI(the_meter,the_pounds);

    cout << "Your BMI is " << the_bmi << " ." << endl;

    return EXIT_SUCCESS;
}

float The_INCH(uint32_t feet, uint32_t inch)
{
    using namespace std;

    const uint32_t Feet_Inch_num = 12;
    const float Inch_Meter_num = 0.0254f;
    uint32_t the_inch;
    float the_meter;

    the_inch = feet * Feet_Inch_num + inch;
    the_meter = the_inch * Inch_Meter_num;

    cout << "You are " << the_inch << " inch tall \n";
    cout << "or " << the_meter << " meter tall.\n";

    return the_meter;
}

float The_WEIGHT(uint32_t weight)
{
    using namespace std;

    const float weight_num = 2.2f;
    float the_weight;

    the_weight = weight / weight_num;

    cout << "You are " << the_weight << " kilogram.\n";

    return the_weight;
}

float The_BMI(float meter, float pounds)
{
    float the_bmi;

    the_bmi = pounds / (meter * meter);

    return the_bmi;
}
