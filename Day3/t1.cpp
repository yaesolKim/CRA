
//#include<iostream>
//#include<vector>
//#include<string>
//
//#include "gmock/gmock.h"
//
//using std::cout;
//using std::string;
//using std::vector;
//using namespace testing;
//
//
//
//class SplitSum {
//public:
//	vector<string> split(std::string& text)
//	{
//		text += "-";
//		vector<string> values;
//
//		int a = 0, b = 0;
//		while (1) {
//			b = text.find("-", a);
//			if (b == -1) break;
//			string temp = text.substr(a, b - a);
//			values.push_back(temp);
//			a = b + 1;
//		}
//
//		return values;
//	}
//
//
//	int splitAndSum(string text)
//	{
//		if (text.empty()) return 0;
//		//vector<string> values = split(text);
//		
//		return sum(string2Int(split(text)));
//	}
//
//	vector<int> string2Int(testing::internal::Strings& string) {
//		vector<int> result;
//		for (auto str : string) {
//			result.push_back(stoi(str));
//		}
//		return result;
//	}
//
//	int sum(vector<int> nums)
//	{
//		int result = 0;
//		for (auto num : nums) {
//			result += num;
//		}
//		return result;
//	}
//
//};
//
//
//
//class SpiltSumFixture : public Test {
//public:
//	void checkSum(int expect_sum, string input_text) {
//		SplitSum sum;
//		int result_sum = sum.splitAndSum(input_text);
//		EXPECT_EQ(expect_sum, result_sum);
//
//	}
//
//};
//
//TEST_F(SpiltSumFixture, TC1) {
//	//SplitSum app;
//	//int ret = app.splitAndSum("100-10-20");
//	//EXPECT_EQ(130, ret);
//	checkSum(130, "100-10-20");
//
//}
//
//TEST(TS, TC2) {
//	SplitSum app;
//	int ret = app.splitAndSum("100-20-20");
//	EXPECT_EQ(140, ret);
//
//}
//
//TEST(TS, TC3) {
//	SplitSum app;
//	int ret = app.splitAndSum("10-10-20");
//	EXPECT_EQ(40, ret);
//
//}
//
//int main()
//{
//	::testing::InitGoogleMock();
//	return RUN_ALL_TESTS();
//
//	//cout << splitAndSum("100-10-20");
//	//return 0;
//}
